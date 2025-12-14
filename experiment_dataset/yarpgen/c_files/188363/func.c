/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188363
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1] [i_0 + 1] [(signed char)9])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_0] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_0 - 1] [i_0 - 1]))))));
                    var_19 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_2 [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_11 [0] [i_3] [i_2] [i_2] [i_1] [i_0] [0]))));
                                var_21 = ((/* implicit */long long int) arr_2 [i_2 - 1]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) arr_12 [5LL] [(short)15] [i_1] [(short)15] [i_0 + 1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 4) 
        {
            {
                arr_18 [15ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_6 + 3] [i_6 + 1] [i_6 + 1]))) ? (((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6 + 4])) ? (759221604U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 + 4] [i_6 - 2] [i_6 + 4])))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) (unsigned short)44521))))));
            }
        } 
    } 
}
