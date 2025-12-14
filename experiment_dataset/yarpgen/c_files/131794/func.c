/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131794
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
    var_13 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) max(((((-(var_8))) - (((/* implicit */long long int) ((1003679403) + (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */long long int) ((arr_1 [i_0] [7U]) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) != (var_0)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_4 [i_0] [i_0]))))) < (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 3] [i_0])))), ((_Bool)1)));
                    var_16 = ((/* implicit */unsigned int) arr_0 [i_0 - 2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8436758930610457429LL))));
                                var_18 = ((/* implicit */signed char) (((-((+(((/* implicit */int) arr_2 [i_0] [i_0])))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(short)9] [i_1] [i_1] [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])) : ((~(((/* implicit */int) arr_12 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) var_10);
        arr_14 [i_0] = ((/* implicit */_Bool) arr_5 [3U] [i_0] [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0 + 3])) >> (((arr_7 [i_0]) - (504977193U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)88))) : (min((((arr_4 [i_0] [(unsigned char)8]) ? (-8436758930610457430LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))))))));
    }
}
