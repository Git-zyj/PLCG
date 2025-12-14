/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112919
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) var_0))));
            arr_6 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_1]) > (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
            var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(arr_2 [i_1])))) / (((arr_4 [i_0] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))));
            var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? ((~(((/* implicit */int) arr_0 [i_0] [i_1])))) : (((/* implicit */int) var_2))));
        }
        var_13 = var_4;
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) max((arr_1 [i_0]), (var_3))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0 + 4])) == (var_7))))) / (((((/* implicit */_Bool) (unsigned short)65384)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_4 [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */short) arr_3 [i_0 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10)))) : (min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        arr_14 [i_0 + 3] [i_0 + 3] [i_2] [i_4 - 2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (max((((/* implicit */long long int) arr_3 [i_4])), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_2 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_2]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_1 [i_4])))))))) : (max((min((var_6), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_3])))), (((var_8) ? (var_6) : (var_9)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) min((min((((/* implicit */int) var_8)), (arr_12 [(short)14] [i_5 + 1] [i_0 + 1] [i_0] [i_0]))), (((/* implicit */int) ((signed char) arr_13 [i_0] [i_0 - 1] [i_0] [i_0])))));
                            arr_17 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0 + 2])))) > (arr_13 [i_0] [i_2] [i_3] [i_2]))))));
                            arr_18 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((634489881752355565ULL) - (4346125582556619684ULL)))) ? (min((((/* implicit */long long int) arr_2 [i_0])), (arr_4 [i_0] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0])) << (((arr_2 [i_0]) - (836181819U))))))))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_5 + 1])), ((+(var_9))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_4 - 1] [i_6] [i_2] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [(_Bool)1] [i_0] [i_0] [i_0 + 4])) ? (((/* implicit */long long int) arr_9 [i_0 + 1] [9LL] [i_0 + 1])) : (arr_13 [i_0] [i_0] [i_0] [i_0])));
                            var_17 = (~((+(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] [(signed char)5] [i_6])))));
                            var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) arr_20 [i_6] [i_6] [(_Bool)1] [(_Bool)1] [5ULL] [i_0])) : (((/* implicit */int) var_8))))));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_4 - 2])), (max((634489881752355565ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 + 3]))))))) ? (((/* implicit */long long int) (~((+(var_0)))))) : ((~(min((arr_13 [i_0] [i_2] [i_2] [i_4]), (((/* implicit */long long int) arr_3 [i_0 + 4]))))))));
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0 + 3])) ? (((arr_16 [i_0] [i_2] [i_7] [i_4] [i_3] [i_2] [i_4]) ? (var_9) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                            arr_26 [i_4] [i_4] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) arr_4 [i_0] [i_4 + 1]);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-9013473286997450974LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1981744209936328268LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (arr_2 [i_4 - 1])))));
                            var_22 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_20 [i_0] [i_0] [i_2] [i_3] [i_2] [i_7])), (arr_11 [i_2] [i_3] [i_3] [i_3])))) && (((/* implicit */_Bool) arr_11 [i_2] [i_0 + 1] [i_3] [i_4 - 2]))))), (min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)64)))));
                        }
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_23 = arr_2 [i_8];
                        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-((+(var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2]))) + (arr_13 [i_2] [i_3] [i_2] [i_2]))))))));
                        arr_29 [i_0] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_2] [i_3] [i_8]))))) + (((/* implicit */int) max((((/* implicit */signed char) arr_24 [i_0] [i_0] [(short)4] [i_2] [i_3] [i_8] [i_3])), (arr_22 [i_0] [i_0 + 3] [i_3] [i_0] [i_0]))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) arr_7 [(signed char)5] [i_2]))), (max((((/* implicit */unsigned int) arr_9 [12] [12] [i_0])), (var_0))))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (var_4)));
                    }
                    arr_30 [i_0] [i_0] [i_0] [i_0] = (~((+(((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_2))))))));
                }
            } 
        } 
    }
    for (short i_9 = 2; i_9 < 12; i_9 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_31 [i_9 + 2] [i_9 + 2])) != (((/* implicit */int) var_10)))) ? (((/* implicit */int) arr_16 [i_9] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_31 [i_9 + 2] [i_9 + 2]))));
        var_27 = ((/* implicit */signed char) (-(((arr_32 [i_9 + 2]) ? ((-(var_9))) : ((-(var_9)))))));
    }
    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? ((+(1840827287U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4762)) || (((/* implicit */_Bool) 135275089))))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) var_1))))), (min((var_6), (((/* implicit */unsigned long long int) var_0))))))));
    var_29 = ((/* implicit */_Bool) (+(var_5)));
    var_30 = ((/* implicit */unsigned int) ((signed char) ((1ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))));
}
