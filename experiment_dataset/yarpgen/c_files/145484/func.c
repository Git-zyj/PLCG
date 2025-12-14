/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145484
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
    var_18 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 14565400087179603911ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((((/* implicit */_Bool) 8631963207561493338ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) >> (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_19 ^= ((unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_0 [i_0] [(unsigned short)12]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_0))));
                        var_21 = ((/* implicit */unsigned long long int) (((-(arr_7 [i_0 + 3]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37)))));
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = arr_10 [i_0 - 1] [i_1] [i_4];
                        var_23 = ((/* implicit */short) var_16);
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_6])) < (((/* implicit */int) (unsigned char)11))))) + (((((/* implicit */int) (short)-1540)) ^ (((/* implicit */int) arr_3 [i_0 + 1] [i_6]))))));
                        var_25 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_6 [i_1 + 1] [i_0] [i_0] [i_0])))) ? (arr_6 [i_1 - 1] [i_0] [i_0] [6ULL]) : ((+(18304711673250701046ULL))));
                        arr_18 [i_0] [(unsigned short)13] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-1540))));
                        var_26 = ((/* implicit */unsigned char) var_1);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_6)))))))), (((unsigned short) var_13))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) < (((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_0 [12ULL] [12ULL])))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */int) var_11)) > (((/* implicit */int) var_11))))))) << (((arr_10 [i_4] [i_7] [i_8]) - (11401577883344839675ULL)))));
                            var_30 = ((/* implicit */unsigned char) var_10);
                            var_31 ^= ((/* implicit */short) var_1);
                            var_32 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15864))))) + (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) arr_8 [i_1 - 1] [i_0 + 2] [i_0 + 1])))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                        var_33 ^= ((/* implicit */short) ((arr_6 [i_0] [i_0] [(short)14] [i_9]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0 - 1]))));
                            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-1))));
                            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (-(((/* implicit */int) var_2)))))));
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (short)19486))));
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_21 [(short)0] [i_4] [i_11 + 1] [i_11] [i_11])) : (((/* implicit */int) var_5)))))));
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((arr_24 [(_Bool)1] [(unsigned short)15] [i_0]) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_1 + 1])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) (unsigned char)38)))));
                            var_40 -= ((/* implicit */unsigned short) ((_Bool) var_8));
                        }
                    }
                    var_41 = var_3;
                }
                var_42 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_16 [i_0 - 2] [(unsigned char)4] [(short)10] [i_0]), (((1627337548844496116ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1540)))))))) || (((/* implicit */_Bool) var_10))));
                var_43 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)7801)))) != ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
            }
        } 
    } 
}
