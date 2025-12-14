/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116613
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
    var_13 -= ((/* implicit */unsigned short) ((short) max((max((((/* implicit */unsigned long long int) var_7)), (var_12))), (((/* implicit */unsigned long long int) var_11)))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)6819))))) == (max((((/* implicit */unsigned long long int) var_5)), (var_10))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) arr_1 [(unsigned short)13] [(short)0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                            {
                                var_15 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((((unsigned long long int) arr_7 [(unsigned short)12] [(short)16] [i_4] [i_4] [(unsigned short)12])), (arr_7 [i_0] [(short)2] [i_4] [i_4] [i_0]))))));
                                var_16 = ((/* implicit */short) var_9);
                                var_17 ^= ((/* implicit */unsigned long long int) arr_8 [(signed char)10] [i_1] [(short)18] [(short)4] [i_3] [i_4]);
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((min((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1 - 2] [12ULL] [12ULL] [i_4])), (arr_1 [i_2] [i_4]))), (((/* implicit */unsigned long long int) ((signed char) var_5))))) << (((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(signed char)2]))))) ? (arr_6 [i_4] [i_1 + 1]) : (max((((/* implicit */unsigned long long int) (signed char)-94)), (var_3))))) - (14895843595336926464ULL)))))));
                            }
                            for (short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [8ULL] [i_1] [8ULL] [i_5] [(unsigned short)2])) ? (14874695898708090633ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(short)18] [i_0] [i_0] [(short)3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1 + 1] [i_5] [i_1 + 1]))) : (arr_13 [(unsigned short)4] [(unsigned short)4] [i_5] [(signed char)0] [(unsigned short)4] [(short)8] [(short)8])))))));
                                var_20 -= min(((unsigned short)65535), (((/* implicit */unsigned short) arr_14 [(unsigned short)14] [i_1] [i_1 + 1] [i_1])));
                                var_21 ^= ((unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 - 3] [i_1 - 3] [(unsigned short)11] [i_3] [i_5]))));
                                var_22 = ((/* implicit */signed char) ((((arr_0 [i_1 - 2] [i_1 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (arr_0 [i_1 - 1] [i_1 - 1])))));
                                var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [(unsigned short)16] [i_2] [(signed char)16] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (min((((((/* implicit */_Bool) arr_2 [15ULL])) ? (arr_13 [i_2] [(short)8] [i_5] [i_3] [i_2] [(signed char)2] [(signed char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_11))))));
                            }
                            /* vectorizable */
                            for (short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                            {
                                var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1]))));
                                arr_17 [i_0] [(unsigned short)8] [i_2] [11ULL] [i_1] = ((/* implicit */short) var_12);
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                            {
                                arr_20 [i_3] [i_1] = (short)-1;
                                var_25 -= (unsigned short)39577;
                            }
                            var_26 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) (short)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)9121)))) : (var_12))));
                        }
                    } 
                } 
                arr_21 [(signed char)8] [(signed char)8] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) (+(arr_13 [i_0] [(unsigned short)4] [(signed char)12] [i_0] [i_1 - 3] [(short)0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (17054176336256119295ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47816)))))) ? (max((var_3), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 - 1] [i_1 - 1] [(short)4] [(short)2])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)5638)))))))));
            }
        } 
    } 
    var_27 -= ((/* implicit */unsigned long long int) var_5);
    var_28 = ((/* implicit */unsigned short) ((short) min((max((var_12), (var_3))), (((/* implicit */unsigned long long int) max(((unsigned short)15094), (((/* implicit */unsigned short) (signed char)64))))))));
}
