/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139364
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_2), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))) : (((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(var_2)))))));
    var_14 = ((/* implicit */int) ((unsigned short) (unsigned char)249));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                            var_16 = ((/* implicit */unsigned int) var_7);
                            arr_11 [i_2] [8U] [i_1] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_3]))) <= ((((_Bool)1) ? (arr_0 [3U]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31256))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 7; i_5 += 2) 
                    {
                        {
                            arr_17 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)41)) : (((((/* implicit */_Bool) (short)-6267)) ? (((/* implicit */int) arr_9 [9U] [8ULL] [10] [i_4] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))))))));
                            var_17 = min((((/* implicit */long long int) arr_14 [i_5] [i_4] [i_4] [1LL] [i_5] [i_1])), (max((((/* implicit */long long int) (unsigned char)224)), (arr_3 [i_0]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_1]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_21 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    arr_22 [5] [(unsigned short)8] [i_6] [i_6] = (~(((/* implicit */int) arr_9 [0] [i_1] [4] [i_1 + 1] [(short)10] [i_1 + 3])));
                    var_19 ^= ((/* implicit */int) arr_2 [i_6] [i_1]);
                }
                for (int i_7 = 3; i_7 < 7; i_7 += 2) 
                {
                    arr_26 [3LL] [(short)8] [7] = ((/* implicit */int) var_0);
                    var_20 *= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [(_Bool)1])))) << (((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (var_1)))) ? (((/* implicit */int) ((arr_13 [i_0] [(unsigned short)5] [(unsigned short)5] [i_7]) <= (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_1] [i_0] [i_7] [i_7]))))) : (arr_6 [i_0] [(unsigned char)10] [i_7])))));
                    var_21 = ((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) max((arr_9 [i_7] [i_7] [i_7] [i_7 - 3] [(signed char)10] [6U]), (arr_9 [4] [i_7] [(unsigned char)0] [i_7 - 2] [10LL] [i_7]))))));
                }
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    var_22 = ((((((/* implicit */_Bool) arr_29 [i_1 - 2] [i_1 + 4] [i_1 - 1])) ? (((/* implicit */int) arr_14 [i_0] [(short)4] [(short)4] [i_1] [i_8] [i_8])) : (((/* implicit */int) (unsigned char)31)))) > ((~(arr_10 [i_1] [6U] [i_1 + 2] [i_0]))));
                    var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) 3870557759U)) + (arr_20 [i_1] [i_1] [(signed char)9] [i_8])))) ? ((-(((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (-869022039))))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (-650105093) : (((/* implicit */int) (unsigned char)98)))))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (max((((/* implicit */unsigned short) var_4)), ((unsigned short)26363)))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                arr_38 [i_9] [(unsigned char)9] = ((int) -1953111321);
                                var_26 += ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)32)), (-869022017)));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */int) (unsigned char)231)) ^ (((/* implicit */int) (unsigned char)13))))));
                }
                for (unsigned char i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)101)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            {
                                arr_47 [i_0] [(unsigned short)1] [(unsigned short)2] [i_13] [(signed char)1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((-1697888746) & (((1303043562) >> (((/* implicit */int) var_4))))))), (((((5579785275652509336ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26341))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_0] [(signed char)3] [i_12] [i_13]) <= (((/* implicit */unsigned long long int) var_2)))))) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)896)))))))));
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) -869022043)) && (((/* implicit */_Bool) (short)888)))))) % (((var_1) ^ ((-(var_8)))))));
                                var_30 = ((/* implicit */unsigned int) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_48 [(signed char)7] [i_13] [1] [i_1] [(signed char)5] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) ((arr_30 [i_12] [i_13] [i_12]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) < (((((/* implicit */int) (unsigned short)26379)) << (((var_9) - (2232125422968897705ULL)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_31 ^= min((var_4), (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))) > (var_2))));
}
