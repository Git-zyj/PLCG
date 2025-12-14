/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116870
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
    var_13 &= ((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)0)))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15021365971224741363ULL)) ? (min((67108832U), (var_12))) : (min((((/* implicit */unsigned int) -581074038)), (3137195870U)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)12509), ((short)0))))))) : (4294967295U)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */_Bool) arr_1 [18U]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0]))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_16 += ((/* implicit */unsigned short) (+(min((max((arr_3 [14U] [14U] [i_2]), (var_2))), (((((/* implicit */_Bool) -1012235381)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [16] [16]))) : (arr_0 [(signed char)2] [(signed char)2])))))));
                    var_17 = ((/* implicit */short) ((((_Bool) arr_4 [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) ((arr_11 [i_0] [i_4 - 2] [i_4 - 1]) ? (((/* implicit */int) arr_11 [i_0] [i_4 - 1] [i_4 + 3])) : (((/* implicit */int) arr_11 [i_0] [i_4 - 1] [i_4 - 2]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((arr_8 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_20 -= ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_4]));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 6);
                            var_21 = ((/* implicit */short) ((unsigned long long int) 2700130469U));
                        }
                        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_0] [i_4 + 2] [i_4] [i_4 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(short)11] [15U] [i_6 + 1] [15U] [i_4 + 1] [i_6 - 1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)8] [(short)8] [i_6 + 1] [6LL] [i_4 - 1] [i_1])))));
                            arr_19 [i_3] [i_4] [(short)16] [i_4] [i_0] = (+(((((/* implicit */_Bool) (short)-19347)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_13 [i_0] [i_1] [i_0] [i_6]))));
                        }
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_22 ^= ((/* implicit */int) ((((/* implicit */long long int) var_2)) + (590456727874061084LL)));
                            var_23 = ((/* implicit */_Bool) arr_6 [i_1] [i_0] [12U] [i_4 - 1]);
                            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4] [i_4 + 3] [i_3])) < (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4]))));
                            var_25 -= arr_16 [i_4 + 3] [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4];
                        }
                    }
                    var_26 ^= ((/* implicit */_Bool) var_2);
                    arr_22 [2ULL] |= ((/* implicit */short) ((((/* implicit */unsigned int) 1679168808)) <= ((~(1064166376U)))));
                }
                for (short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_28 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33551))) ^ (13355218788145367157ULL)))))) ? ((~(((arr_13 [i_0] [i_0] [i_0] [i_9]) & (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)65354)) ? (arr_12 [i_0]) : (arr_10 [i_8] [i_1] [0ULL]))))))));
                        arr_29 [i_0] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        arr_33 [i_0] [i_8] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2501852309U)))) : (((((14624771320229777940ULL) ^ (((/* implicit */unsigned long long int) var_4)))) ^ (min((arr_31 [i_0]), (arr_23 [i_0] [i_1] [i_0] [i_10])))))));
                        arr_34 [i_0] [i_0] [i_0] [(unsigned short)17] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_31 [i_8]) & (((/* implicit */unsigned long long int) arr_25 [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)188))) : (arr_31 [i_8]))))));
                    }
                    arr_35 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(min((arr_6 [i_0] [i_0] [i_1] [i_8]), (((/* implicit */int) var_7))))))) * (min(((~(-22LL))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_11)))))));
                    arr_36 [i_0] [i_0] [i_0] [i_0] = min((((arr_4 [i_0]) / (arr_4 [i_0]))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (max((12U), (((/* implicit */unsigned int) (short)-3341)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_11] [i_8] [i_8] [i_8] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)181))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_11])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) min(((~(arr_25 [i_0]))), (((/* implicit */int) max((var_7), (var_7)))))))));
                        var_28 = ((/* implicit */unsigned short) (((~(arr_37 [i_8] [i_1] [i_8] [i_11] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0])))));
                    }
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                {
                    arr_43 [i_0] [i_0] [i_12] &= ((/* implicit */unsigned long long int) ((388722932U) / (3522618835U)));
                    var_29 = ((/* implicit */short) ((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_12] [i_0]) || (((/* implicit */_Bool) (unsigned char)57)))) ? ((~(4294967278U))) : (arr_3 [i_0] [i_1] [i_12])));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            {
                arr_49 [i_13] [i_14] = (((!(((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) (unsigned short)65535)) - (65515)))))))) ? (min((((/* implicit */unsigned int) (unsigned short)65346)), (arr_39 [(_Bool)1] [i_13] [i_13] [(_Bool)1]))) : (17U));
                var_30 = ((/* implicit */short) var_3);
            }
        } 
    } 
}
