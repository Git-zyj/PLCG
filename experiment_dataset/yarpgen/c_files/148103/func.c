/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148103
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((signed char) (-(-8489653584172344137LL))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) -8489653584172344137LL)) ? (-8489653584172344137LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), ((~(-8489653584172344137LL)))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) max((arr_8 [i_3] [i_3] [i_3 + 1] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1])))) >> ((((~(((unsigned int) arr_0 [i_2])))) - (817141813U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 += ((/* implicit */signed char) ((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4])))));
        var_20 += ((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_0))));
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) 585454573U);
    }
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
}
