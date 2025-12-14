/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15356
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
    var_17 = ((/* implicit */long long int) min((var_17), ((-(var_8)))));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 11364172832059255928ULL))))), (((signed char) min((var_16), (((/* implicit */unsigned long long int) var_14)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((4851956160557179620LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 1]))))))))));
                        var_20 = ((/* implicit */int) (~(arr_1 [i_2])));
                        var_21 = ((/* implicit */long long int) max((((16993577766611266015ULL) * (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_0 - 1] [i_0 - 1])))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)496))) <= (17204648213776135189ULL)))), ((+(17204648213776135208ULL)))));
                        var_23 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1] [i_0])), ((-(8199195676893618017ULL))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)65051)))))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_0 [i_0]))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_5] [i_1]))))));
                        var_26 = ((/* implicit */long long int) ((_Bool) arr_5 [i_5] [i_1] [i_1]));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (signed char)13)) && (((/* implicit */_Bool) var_9))))))), (min((((/* implicit */unsigned long long int) ((unsigned short) var_5))), (((17204648213776135194ULL) / (arr_9 [i_6] [i_1])))))));
                        var_28 ^= ((/* implicit */_Bool) var_6);
                    }
                }
            } 
        } 
    } 
}
