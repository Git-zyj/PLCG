/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145488
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
    var_18 = ((var_0) | (((/* implicit */unsigned long long int) ((long long int) -2688988123656125793LL))));
    var_19 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)9);
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)15091))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) (signed char)-9)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]))))));
                arr_8 [(signed char)6] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */unsigned long long int) max((9010313463042334876LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) var_11))) < (((unsigned long long int) arr_12 [(unsigned short)2] [i_3 - 1] [i_0] [(unsigned short)2])))))));
                            arr_14 [9LL] [(unsigned short)13] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned short)17] [i_2 - 1] [i_0]))) | ((-9223372036854775807LL - 1LL)))) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1])))));
                            arr_15 [i_0] = ((/* implicit */long long int) (signed char)9);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_12);
}
