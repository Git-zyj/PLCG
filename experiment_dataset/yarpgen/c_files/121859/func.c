/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121859
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((-2628803929016432843LL), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0] [i_2]))))), (arr_3 [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (((((min((-2628803929016432843LL), (-2628803929016432843LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 1])) || (((/* implicit */_Bool) arr_3 [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((arr_9 [i_1] [4LL]), (((/* implicit */unsigned int) ((((/* implicit */int) (short)14336)) + (((/* implicit */int) min((arr_7 [i_0]), (arr_0 [i_3])))))))));
                                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)55597)) + (((/* implicit */int) arr_4 [(unsigned char)11] [i_2 - 1] [i_2] [(unsigned char)11]))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_9 [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
                                var_22 ^= ((arr_9 [i_0] [i_0]) + (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_8 [i_0] [i_2 - 1] [(short)6] [i_4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) (~((-(-2628803929016432843LL)))));
    var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) var_14))))));
}
