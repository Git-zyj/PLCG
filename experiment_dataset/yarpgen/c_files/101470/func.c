/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101470
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
    var_15 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
        var_17 = var_4;
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((((/* implicit */_Bool) min((var_12), (8820506394232045425ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : ((-(873335320472897341ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : ((+(arr_4 [(_Bool)1])))))) ? ((+(arr_3 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) min((min((arr_5 [i_1]), (((/* implicit */int) (signed char)112)))), (((/* implicit */int) ((_Bool) arr_5 [17ULL]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) max(((~(arr_5 [i_1]))), (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-102)) + (2147483647))) << (((((/* implicit */int) var_2)) - (70)))))) ? (((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_7 [i_1])) - (107))))) : (((/* implicit */int) min((((/* implicit */signed char) arr_8 [i_1] [i_1])), ((signed char)-113))))))));
            var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
        }
        var_21 = min((((/* implicit */unsigned long long int) max((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_1])))), (arr_3 [i_1] [i_1]));
        var_22 = ((/* implicit */unsigned long long int) ((min((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_1]))) ? (((arr_8 [i_1] [i_1]) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_8 [(unsigned char)15] [(unsigned char)15])))) : (((/* implicit */int) min((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_1]))))));
    }
    var_23 *= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_15 [i_5] = ((/* implicit */unsigned char) ((arr_10 [i_5 + 1] [i_5 + 2]) << (((arr_13 [i_5 - 1] [i_5]) - (10211129930358084148ULL)))));
                    var_24 = ((/* implicit */unsigned char) arr_12 [i_5 + 2]);
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_0))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */signed char) arr_10 [i_7] [i_7]);
                                arr_21 [i_3] [i_4] [i_6] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_5 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (var_1) : (((((/* implicit */_Bool) 12693560025913594043ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))) : (1449471867078609753ULL)))));
        /* LoopSeq 1 */
        for (int i_8 = 2; i_8 < 15; i_8 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_13 [i_8 - 1] [i_8 + 2])));
            arr_24 [i_3] [(signed char)1] [i_8] = ((/* implicit */signed char) 12693560025913594022ULL);
        }
    }
    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) arr_0 [i_9] [i_9]);
        var_30 ^= ((/* implicit */_Bool) min((min((((/* implicit */int) (signed char)-7)), (((((/* implicit */_Bool) arr_7 [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))), (((arr_20 [i_9] [i_9]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))));
    }
    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 3) 
    {
        arr_29 [i_10] |= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_18 [i_10 - 3] [i_10 - 1] [8ULL] [i_10] [i_10 + 4])), (min((((/* implicit */unsigned long long int) -1527504041)), (581337438144646337ULL))))), (((/* implicit */unsigned long long int) var_8))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (min((min((arr_10 [i_10] [11ULL]), (arr_13 [8] [i_10 + 4]))), (((/* implicit */unsigned long long int) ((unsigned char) ((signed char) 11130833449337492589ULL))))))));
            var_32 = max((((unsigned long long int) max((((/* implicit */unsigned long long int) (signed char)-112)), (arr_33 [(_Bool)1] [i_10] [(_Bool)1])))), (((/* implicit */unsigned long long int) var_9)));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            var_33 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10 + 1] [10ULL]))) | (17528223239634272582ULL));
            arr_37 [i_10] [i_10 + 3] [i_12] = ((/* implicit */unsigned long long int) var_9);
            arr_38 [i_10 + 4] [i_12] [i_10] = (+(((unsigned long long int) (signed char)-112)));
        }
        arr_39 [15ULL] = ((/* implicit */signed char) (((_Bool)1) ? ((~((-(((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) arr_25 [i_10 - 3])) ? ((~(var_14))) : (((/* implicit */int) arr_27 [i_10 - 3]))))));
        var_34 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_12 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10 + 3] [13ULL])))))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) arr_1 [i_10])))))));
    }
}
