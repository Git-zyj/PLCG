/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17775
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_16 = ((((((/* implicit */unsigned long long int) ((long long int) 6ULL))) / (18446744073709551608ULL))) & (max((var_13), (arr_3 [i_2] [i_2] [i_2 + 1]))));
                        var_17 = ((/* implicit */unsigned short) ((10100462053084535318ULL) | (4565039666239587408ULL)));
                        var_18 = ((/* implicit */short) ((unsigned long long int) max(((unsigned char)255), (((/* implicit */unsigned char) var_1)))));
                        var_19 = ((/* implicit */signed char) min((max((16322267907490623588ULL), (8515012948509088826ULL))), (max((arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 2]), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) min((max((max((var_3), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) (unsigned short)384))))))), (max((((/* implicit */unsigned long long int) var_10)), (5ULL)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_5 = 2; i_5 < 7; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 + 1] [i_2 - 2]))) - (10100462053084535314ULL)));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -6995266723095211753LL)) != (arr_12 [i_0] [i_5 + 2] [i_2 - 1] [i_0] [i_0])));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned char)3] [i_0 + 3])) || (((/* implicit */_Bool) 11ULL))));
                            arr_17 [i_0] [(unsigned char)8] [i_2] [i_4] [i_4] [i_5] &= ((/* implicit */long long int) ((arr_14 [i_1] [i_5 - 2] [i_2] [i_4] [(unsigned short)6]) | (((/* implicit */int) ((16322267907490623593ULL) > (2124476166218928026ULL))))));
                            var_23 *= ((/* implicit */short) ((unsigned char) arr_8 [i_0] [i_0] [i_0] [1ULL] [i_0 + 3]));
                        }
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 7; i_6 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((unsigned char) 4565039666239587407ULL));
                            arr_21 [i_0 + 3] [2ULL] [i_2] [0ULL] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) arr_3 [i_0] [i_1] [i_4])));
                            var_25 = ((long long int) var_15);
                            var_26 = ((/* implicit */signed char) ((unsigned char) arr_13 [i_2 - 1] [i_2] [i_2] [i_4] [i_2]));
                        }
                        for (short i_7 = 2; i_7 < 7; i_7 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744073709551605ULL), (var_8)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 13881704407469964188ULL)))) != (max((1384779580290398684ULL), (18446744073709551579ULL)))))));
                            var_28 = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned long long int) arr_23 [i_0 + 3] [i_0] [i_0] [i_7 + 2] [i_0] [i_7 - 2])), (((unsigned long long int) arr_15 [i_0] [i_0] [i_2 - 2] [i_4] [4ULL])))));
                        }
                    }
                    var_29 = ((/* implicit */unsigned short) ((signed char) ((max((2124476166218928028ULL), (((/* implicit */unsigned long long int) (unsigned char)244)))) == (((/* implicit */unsigned long long int) 536346624U)))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_15))) - (((/* implicit */int) ((12849443310500976367ULL) > (((/* implicit */unsigned long long int) var_10)))))))) != (((min((18446744073709551600ULL), (var_3))) + (var_8)))));
}
