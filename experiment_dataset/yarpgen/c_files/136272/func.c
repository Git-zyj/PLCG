/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136272
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
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((short) (signed char)122));
                                arr_13 [i_4] [i_1] [i_2] [i_1] [3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) -1))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (arr_11 [i_0] [i_0 + 1] [i_0 + 3] [(short)14] [9LL]))))));
                                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1])) ? (min((arr_9 [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_0 - 1]), (367143421U))) : (min((arr_9 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1]), (arr_9 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1])))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (+(var_14)))) : (arr_4 [(short)11] [i_1])));
                                arr_17 [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1285116999237678351ULL)) ? (1285116999237678342ULL) : (((/* implicit */unsigned long long int) -130471688))));
                                arr_18 [i_0 - 1] [13] [i_1] [(unsigned char)5] [i_1] [i_3] [i_5] = ((/* implicit */unsigned int) ((unsigned short) var_3));
                            }
                            var_18 = ((/* implicit */unsigned short) max((17161627074471873265ULL), (((/* implicit */unsigned long long int) (unsigned char)62))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_1] = ((/* implicit */int) ((_Bool) ((unsigned long long int) arr_6 [i_0 + 3] [i_1] [i_1])));
                arr_20 [(unsigned char)12] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (arr_1 [i_0 - 1])))) ? ((-(((((/* implicit */_Bool) 2073364411160038822LL)) ? (((/* implicit */int) var_5)) : (1118027516))))) : (max((38334122), (min((var_13), (var_6)))))));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    arr_23 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))), (arr_11 [i_0] [i_0 + 3] [i_0] [i_1] [i_0 + 3])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (max((17161627074471873265ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */unsigned int) max((((int) var_15)), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4)))))))) : (min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38520)) ? (var_14) : (((/* implicit */int) var_3)))))))));
                                var_20 = ((/* implicit */long long int) ((1285116999237678323ULL) ^ (((/* implicit */unsigned long long int) ((unsigned int) (short)32767)))));
                                arr_31 [i_1] [i_1] [i_1] [i_0] [i_6] [i_1] [i_0] = var_8;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_5))));
    var_22 = ((/* implicit */unsigned int) var_1);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_6)))) ? (max((1285116999237678339ULL), (((/* implicit */unsigned long long int) 3U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), ((-2147483647 - 1)))))));
}
