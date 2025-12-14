/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133667
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))) ? (min((var_0), (((/* implicit */unsigned long long int) ((var_12) + (var_12)))))) : (((/* implicit */unsigned long long int) var_1))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned long long int) var_12)))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (4ULL))), ((!(((/* implicit */_Bool) var_2))))))) >> (((/* implicit */int) ((1227301451U) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 3] [i_0 - 1]);
        var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 3] [i_0 + 1]))) / (var_8)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_18 = ((/* implicit */int) arr_3 [i_1]);
        arr_7 [9LL] [i_1] = ((/* implicit */unsigned char) ((((arr_4 [15U]) << (((var_4) - (8461895032180846394ULL))))) / (((/* implicit */long long int) arr_5 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (min((((/* implicit */unsigned long long int) arr_4 [7ULL])), (arr_9 [i_2]))))) - (((/* implicit */unsigned long long int) arr_8 [i_2]))));
        arr_11 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((+(arr_6 [i_2] [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((arr_6 [i_2] [i_2]), (((/* implicit */long long int) arr_5 [i_2]))))) != (max((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (504403158265495552ULL))), (((/* implicit */unsigned long long int) ((arr_4 [i_2]) >= (((/* implicit */long long int) arr_5 [i_2]))))))))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_2] [3ULL] [i_4] [i_5] [i_2] = ((/* implicit */_Bool) min((max((max((arr_15 [i_2]), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_4] [i_6])))), (((/* implicit */unsigned long long int) arr_19 [i_2] [i_4] [i_5] [i_5] [i_6] [i_2] [i_6 + 2])))), (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_6 [(_Bool)1] [i_3]))));
                            arr_22 [i_2] [12LL] [i_4] [12ULL] [12ULL] [i_5] &= min((((/* implicit */unsigned long long int) ((arr_19 [i_6] [i_6] [i_6 + 2] [(short)2] [i_6] [(unsigned short)0] [i_6 - 3]) > (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (min((arr_13 [i_2] [10] [i_6 - 1]), (arr_13 [i_2] [i_3] [i_6 - 3]))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */long long int) (-(arr_5 [i_6])))) : ((-(arr_19 [i_2] [(signed char)8] [i_3] [i_3] [(_Bool)1] [i_2] [i_3])))))) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) arr_20 [i_2]))));
                        }
                        for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) min((14922937893054595740ULL), (((18446744073709551615ULL) % (arr_9 [i_4])))))) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_2] [i_2])))) : (max((min((((/* implicit */unsigned long long int) arr_20 [i_2])), (14922937893054595740ULL))), (((((/* implicit */unsigned long long int) var_6)) & (arr_17 [i_2] [i_3] [0U] [i_4] [i_5] [(signed char)10]))))))))));
                            arr_26 [i_2] [i_3] [2ULL] [10LL] [2ULL] [i_4] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((((arr_25 [i_2]) - (((/* implicit */long long int) arr_3 [i_4])))) + (9223372036854775807LL))) >> (((((((arr_25 [i_2]) + (9223372036854775807LL))) >> (((var_1) - (359572607))))) - (5884151719LL)))))) ? (max((arr_9 [(short)0]), (((/* implicit */unsigned long long int) arr_19 [i_4] [i_2] [(unsigned short)2] [i_5] [i_7 - 4] [i_2] [i_7 - 1])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)22611)), ((+(((/* implicit */int) (_Bool)1)))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((((arr_25 [i_2]) - (((/* implicit */long long int) arr_3 [i_4])))) + (9223372036854775807LL))) >> (((((((((arr_25 [i_2]) + (9223372036854775807LL))) >> (((var_1) - (359572607))))) - (5884151719LL))) + (2534379866LL)))))) ? (max((arr_9 [(short)0]), (((/* implicit */unsigned long long int) arr_19 [i_4] [i_2] [(unsigned short)2] [i_5] [i_7 - 4] [i_2] [i_7 - 1])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)22611)), ((+(((/* implicit */int) (_Bool)1))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_8 - 2] [i_8] [i_8 + 2] [i_8] [i_8] [i_2] [i_8]))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((var_8) <= (arr_19 [i_8] [i_8] [i_4] [i_2] [i_8 + 1] [(_Bool)1] [i_5]))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_3] [i_8 - 2] [(short)10] [i_2] [i_5] [i_5])) - (((/* implicit */int) arr_28 [i_2] [i_8 - 3] [4] [(unsigned char)6] [10U] [(short)6])))))));
                            var_26 = ((/* implicit */int) arr_14 [i_2]);
                        }
                        var_27 = (-(((((/* implicit */_Bool) (+(arr_6 [i_5] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((6028604410241084396ULL), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_5])))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)8])), (arr_25 [i_2])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_14 [i_2])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_3 [(signed char)6])))))) : (((arr_15 [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2] [(_Bool)0] [i_2])))))));
    }
    var_29 = max((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) (signed char)-18))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_10)));
}
