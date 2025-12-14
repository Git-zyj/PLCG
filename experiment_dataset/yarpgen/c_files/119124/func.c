/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119124
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((short) var_6))))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((min(((-(((/* implicit */int) (short)32764)))), ((~(((/* implicit */int) (short)32760)))))), (((int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) var_0)))))));
                        arr_14 [i_1] [(unsigned short)11] [i_3] [i_1] = ((/* implicit */short) ((_Bool) ((var_2) / (var_5))));
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_19 [(unsigned short)2] [i_3] [i_3] [i_3] &= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)52670)), (((((/* implicit */_Bool) var_8)) ? (arr_17 [i_3] [18U] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2 - 1])))))))) ? (arr_13 [(signed char)14] [(unsigned char)11] [i_1 - 1] [19ULL] [16LL] [i_1 - 1]) : (((/* implicit */int) var_3)));
                        var_15 = ((/* implicit */signed char) arr_17 [i_5] [i_2] [i_3] [i_3]);
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((int) arr_12 [i_1 - 3] [i_1 - 3] [i_3] [i_3] [i_5]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 1829261756U)) : (arr_18 [i_2] [i_2] [i_2]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((_Bool) (signed char)(-127 - 1)));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) / (((((/* implicit */_Bool) (unsigned char)253)) ? (var_4) : (((/* implicit */int) var_10))))))) ^ (min((((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33981)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_2 - 2] [i_1] [i_1] [5ULL] [i_3]))) : (4294967295U))))))));
                            var_20 = ((unsigned long long int) max((((((/* implicit */int) var_9)) / (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            arr_24 [i_1] [i_7] [i_3] [i_6] [i_7] = ((/* implicit */long long int) arr_16 [i_1] [i_1 + 2]);
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_2 - 4] [i_2]))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (arr_10 [i_2 - 2] [(unsigned char)4] [(unsigned char)2]))) : (((/* implicit */unsigned long long int) max((3938838566U), (min((var_6), (((/* implicit */unsigned int) var_9)))))))));
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)32764)) ? (15179070567429603632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) 1829261752U))), (var_6)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (signed char)-28))))), ((~(17607629670613394468ULL)))))));
                    }
                    var_22 = ((/* implicit */unsigned short) var_5);
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) var_7)), ((short)18526)))), (((((/* implicit */_Bool) arr_4 [(unsigned short)7] [i_3])) ? (var_5) : (((/* implicit */int) var_10))))))) ? ((-(arr_17 [i_2] [i_1 - 2] [(short)14] [(unsigned short)8]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_11))))))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1]))))))))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((signed char) ((unsigned char) min((((/* implicit */long long int) (unsigned short)37808)), (arr_4 [i_1 + 1] [i_2 - 1]))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) var_9))))))) ? (((var_0) ? ((-(((/* implicit */int) arr_20 [(short)0] [(short)0] [(short)0] [19U] [19U] [i_9])))) : (((/* implicit */int) max((arr_26 [i_9] [i_9] [i_9] [i_9] [i_1] [i_1]), (var_9)))))) : (var_5)));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_26 [(signed char)20] [9LL] [i_1] [i_1] [i_1] [i_1]))))) & ((~(min((var_5), (arr_29 [i_1] [i_1] [i_1])))))));
        }
        arr_32 [12LL] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)4095), (((/* implicit */unsigned short) var_0))))), ((((_Bool)1) ? (var_4) : (((/* implicit */int) arr_25 [i_1 - 3])))))))));
        var_28 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_10)), (var_6))) | (((/* implicit */unsigned int) (~(var_2))))));
    }
    for (long long int i_10 = 2; i_10 < 11; i_10 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) var_0);
        arr_35 [i_10] |= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((min((var_3), (var_3))), (((/* implicit */unsigned char) arr_12 [(unsigned char)0] [i_10] [(signed char)14] [(signed char)14] [i_10]))))) : (((/* implicit */int) (unsigned short)0))));
        var_30 = ((/* implicit */int) (!(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) var_3))))) < (var_6)))));
        var_31 = ((/* implicit */int) var_11);
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_16 [i_10] [i_10 + 1])) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_22 [(short)16] [(short)16] [i_10] [i_10] [17U] [(short)16])))) : (arr_3 [i_10 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))))))))));
    }
    for (unsigned char i_11 = 2; i_11 < 22; i_11 += 2) 
    {
        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_36 [i_11 + 2] [i_11 - 1])) : (((/* implicit */int) arr_36 [i_11 + 2] [i_11 - 1])))))));
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) min((arr_36 [i_11] [i_11 - 1]), (arr_36 [i_11] [i_11 + 3])))))))));
        var_35 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_11] [i_11])) || (((/* implicit */_Bool) arr_36 [i_11] [i_11])))))))));
        var_36 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((arr_37 [i_11] [i_11]), (arr_37 [i_11] [i_11 - 2])))) ? (((/* implicit */int) arr_36 [i_11 + 1] [i_11 + 2])) : (((/* implicit */int) arr_37 [i_11] [i_11]))))));
    }
    var_37 = ((/* implicit */unsigned long long int) var_7);
}
