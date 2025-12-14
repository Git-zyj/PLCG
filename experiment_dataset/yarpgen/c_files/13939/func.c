/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13939
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? ((-(arr_0 [i_0]))) : (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */int) ((arr_3 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33978)))))) & (((/* implicit */int) ((signed char) arr_4 [(unsigned char)8] [i_0] [i_1]))))))))));
                var_20 = ((/* implicit */unsigned char) var_18);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = ((unsigned long long int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))));
                    var_21 = ((/* implicit */long long int) ((unsigned int) max((max((arr_8 [i_2]), (((/* implicit */unsigned long long int) var_12)))), (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((2251524935778304ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned long long int) 17592186044415LL)) : (var_11)))));
}
