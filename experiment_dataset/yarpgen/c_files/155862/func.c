/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155862
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
    var_18 += ((/* implicit */short) (-(((/* implicit */int) var_4))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_2))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((unsigned char) arr_0 [i_0]);
        var_21 &= ((/* implicit */unsigned char) max((-6968141815171912534LL), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((1723941608U) >> (((((/* implicit */int) var_8)) + (14609)))))) : (((7746488381310209910LL) | (((/* implicit */long long int) 12U))))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_15))));
        var_23 = ((/* implicit */long long int) var_4);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_24 = ((/* implicit */short) 7746488381310209910LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((long long int) -7746488381310209919LL)))));
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) var_16)) / (-3462214992891582222LL))));
                    var_26 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (signed char)2)) ? (-7746488381310209911LL) : (((/* implicit */long long int) 1723941630U)))));
                }
                for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    var_27 = ((/* implicit */short) max((var_27), (var_8)));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (4213307859796264652LL)))) ? (var_14) : (var_2)));
                    arr_17 [i_1] = ((/* implicit */unsigned int) var_12);
                }
                for (short i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    var_29 = ((/* implicit */unsigned int) 4213307859796264660LL);
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(0U)))) ? (((long long int) var_4)) : (((/* implicit */long long int) var_14))));
                }
                var_31 ^= ((/* implicit */int) ((long long int) ((((/* implicit */int) (short)9786)) << (((((/* implicit */int) arr_18 [i_3] [i_1] [i_3] [i_1] [i_1])) - (19547))))));
            }
            var_32 = ((short) var_9);
            var_33 &= ((/* implicit */long long int) 3475037065U);
            var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_17))));
        }
        var_35 = ((/* implicit */long long int) var_3);
    }
    for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
    {
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) 1380723080U))));
        var_37 = ((/* implicit */unsigned char) arr_21 [i_7]);
    }
}
