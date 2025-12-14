/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125526
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5044343136903814441ULL)) ? (((/* implicit */int) (_Bool)0)) : (-588194132)));
        var_13 &= ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_0 [i_0] [i_0]))) / (((((/* implicit */_Bool) arr_0 [(short)15] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0] [i_0])))));
        var_14 = ((/* implicit */short) ((min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)0)))) * (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)0)))))))));
        arr_2 [i_0] = ((/* implicit */short) var_8);
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? ((~(((/* implicit */int) (_Bool)1)))) : (arr_4 [i_1] [i_1] [(_Bool)0])));
            var_16 = ((/* implicit */short) (-(arr_0 [i_0] [i_1])));
            arr_5 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) << (((arr_4 [i_0] [i_1] [i_1]) - (1886950242)))));
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) var_5);
            arr_11 [i_2] &= ((/* implicit */signed char) arr_3 [i_0] [i_0]);
            var_17 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_8 [i_2]))) | (((min((1579721603), (((/* implicit */int) var_3)))) * (((/* implicit */int) arr_8 [i_0]))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((arr_6 [i_0] [i_0] [i_0]) % (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)0]))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned int) arr_4 [i_3] [i_3] [i_0]);
                            var_20 = ((/* implicit */int) ((16368) >= (1579721603)));
                            var_21 *= ((/* implicit */_Bool) 3019491899540187597ULL);
                        }
                    } 
                } 
                arr_22 [i_0] [i_4] [i_4] = -2101048881;
                var_22 = ((/* implicit */int) arr_7 [i_0]);
            }
            var_23 = (_Bool)1;
            var_24 = ((/* implicit */signed char) ((int) (_Bool)1));
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) arr_3 [(_Bool)1] [i_7]);
            var_26 *= (+(min((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [4U] [i_0])), (var_5))));
            var_27 = ((/* implicit */signed char) arr_24 [i_0]);
            var_28 = (_Bool)1;
            arr_25 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (1073709056)));
        }
    }
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((max((var_11), (var_10))) & (min((((/* implicit */unsigned int) (signed char)18)), (var_10))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ ((+(((/* implicit */int) var_7))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        var_30 = ((/* implicit */signed char) (+(2147483647)));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) arr_27 [i_8])) : (((/* implicit */int) arr_27 [i_8]))));
    }
}
