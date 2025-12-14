/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118481
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_0])))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) | (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (arr_1 [i_0] [i_0]))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned short)39093)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))))))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_1]) % ((-(arr_3 [i_1])))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_2 [i_1] [i_1]))) : (arr_2 [i_1] [i_1])))));
        var_16 *= ((/* implicit */signed char) ((2147483647) << (((((/* implicit */int) (_Bool)1)) - (1)))));
        var_17 *= ((/* implicit */unsigned int) (_Bool)1);
    }
    var_18 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_4 [i_5]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned int) arr_7 [i_3])) : (var_5)))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2])) || (var_9)))))) : ((-(((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) / (((/* implicit */int) (_Bool)1))))))));
                            var_20 ^= 321349827U;
                            var_21 += ((/* implicit */int) (!((_Bool)1)));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_2])), ((~(((/* implicit */int) arr_15 [i_6 - 1] [i_6 - 1] [i_2 + 3] [i_3 + 3])))))))));
                            arr_20 [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))))))) * (((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (7574170188081948254ULL)))))));
                            var_24 = ((var_11) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_7 [i_2])) : (3329755101U)))))) : (((((/* implicit */_Bool) arr_17 [i_2 + 1])) ? (((/* implicit */long long int) ((383912766U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2])))))) : (((((/* implicit */_Bool) 4201718353U)) ? (arr_17 [i_2]) : (-263564491182234261LL))))));
                            var_25 = ((/* implicit */unsigned long long int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            arr_23 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2])) - (((((/* implicit */_Bool) arr_19 [i_2 - 3] [i_4] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) arr_19 [i_2 + 1] [i_4] [i_3 - 1]))))));
                        }
                        var_26 = ((/* implicit */unsigned int) arr_7 [i_3 - 1]);
                    }
                    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        arr_28 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3013010922U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 93248933U))))) : (((((/* implicit */_Bool) 383912741U)) ? (-897946980) : (((/* implicit */int) var_7))))));
                        arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((/* implicit */int) (unsigned char)103)) == (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */int) arr_19 [i_2] [i_4] [i_2 + 1])) + ((~(((/* implicit */int) (signed char)(-127 - 1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4])) ? (15513296475108737394ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_2])))))) ? (min(((-2147483647 - 1)), (arr_7 [i_2]))) : (((/* implicit */int) ((unsigned short) 1281956372U))))));
                        var_27 = ((/* implicit */_Bool) arr_4 [i_2 + 4]);
                    }
                    var_28 &= arr_22 [i_2] [i_2] [i_2] [i_2] [i_2];
                }
            } 
        } 
        arr_30 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_19 [i_2] [(_Bool)1] [i_2])) ? (212657531) : (((/* implicit */int) (short)-4042)))));
    }
}
