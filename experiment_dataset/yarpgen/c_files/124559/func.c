/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124559
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
    var_16 = ((/* implicit */_Bool) min((var_5), ((signed char)-67)));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) var_10)), (var_9))) : (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_10)) > (min((((/* implicit */long long int) var_10)), (var_12)))))) : ((-(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */short) var_2);
                            arr_10 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_0] [i_3] [i_2 - 2] [i_3] [i_3] [i_1 - 1])), ((-(arr_0 [i_0])))))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_11))) : (min((((/* implicit */unsigned long long int) (signed char)-67)), (var_11)))))));
                            var_19 = ((/* implicit */unsigned char) var_5);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                            {
                                arr_14 [i_3] = ((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_2] [17] [i_3] [i_2 - 1]);
                                var_20 = ((/* implicit */unsigned int) arr_7 [i_2 + 3] [i_2 - 1] [i_4] [i_4]);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (_Bool)1))));
                                arr_19 [i_0] [i_0] [i_3] [i_5] |= ((/* implicit */unsigned long long int) (_Bool)0);
                                var_22 = ((/* implicit */signed char) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_3]))) : (arr_9 [i_3] [i_1 - 1])));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? ((-(var_14))) : (arr_7 [i_1 - 1] [(short)11] [(short)9] [i_0])));
                                var_24 = var_0;
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (max((-1LL), (((/* implicit */long long int) (signed char)-60)))) : (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_0)), (arr_5 [i_1] [i_1] [(unsigned char)5]))))))));
                var_26 = ((/* implicit */unsigned int) (~(min(((-(var_14))), (var_12)))));
                var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (562948879679488LL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_10)))))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-78)) ? (2059975476U) : (8191U))))));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])), (arr_0 [i_0])))) ? (var_9) : (((/* implicit */unsigned long long int) var_0)))))))));
            }
        } 
    } 
    var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((~(var_8))) : (var_11)));
}
