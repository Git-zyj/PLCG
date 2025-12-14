/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185279
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_7)))) : (((/* implicit */int) ((unsigned short) (unsigned short)3840))))))));
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min((1137272680), (((/* implicit */int) (unsigned short)41617)))))));
    var_12 |= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_2])), (arr_6 [i_0])))))), ((-(((/* implicit */int) arr_1 [i_0]))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_0] [i_2])))))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_4))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_5 [i_0])))) <= (min((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_10 [22LL] [22LL] [22LL] [i_3])))), (((((/* implicit */_Bool) 2782857868003592970LL)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_7)))))))))));
                        var_16 = ((/* implicit */int) max((var_16), (max((max((((/* implicit */int) arr_5 [i_1 + 3])), (arr_0 [i_0 + 2]))), (((/* implicit */int) ((signed char) (_Bool)1)))))));
                        var_17 -= ((/* implicit */long long int) max((arr_2 [(_Bool)1] [i_3]), (((/* implicit */int) ((unsigned char) var_2)))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 23; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((int) ((unsigned short) arr_10 [(unsigned char)8] [(unsigned char)8] [i_4] [(unsigned char)20]))))));
                            arr_16 [i_0] [i_1] [i_2] [i_4 - 1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [7] [i_0] [i_0]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 - 1]))) <= (var_2)));
                            var_20 = ((/* implicit */signed char) var_7);
                        }
                        var_21 = ((/* implicit */unsigned short) min((var_21), (arr_13 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1])));
                    }
                    var_22 += ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0 + 1] [22] [i_2])))) / (arr_17 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2 - 1] [(unsigned char)0]))), (((/* implicit */long long int) (+(var_1))))));
                }
                for (signed char i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)18] [(unsigned char)18] [i_1 + 2])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_7 - 1] [i_7 - 1])))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_20 [i_7] [16] [i_7 + 1]))) <= ((-(arr_8 [(signed char)22] [22] [i_7] [(unsigned char)0]))))))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((unsigned short) min((arr_7 [(unsigned short)16]), (arr_7 [(unsigned char)18])))), (((/* implicit */unsigned short) ((unsigned char) (+(var_8))))))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) ((max((((/* implicit */long long int) arr_2 [(unsigned short)2] [i_1])), (var_2))) <= (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 - 3] [(unsigned char)18] [i_0 + 2] [i_0 + 1])))))) <= (((/* implicit */int) arr_10 [4LL] [i_1] [(unsigned char)16] [i_1]))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (_Bool)1))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    var_28 = ((/* implicit */int) min((var_28), ((+((+((+(arr_8 [(unsigned short)4] [(unsigned short)4] [i_8] [(unsigned short)4])))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 1; i_9 < 23; i_9 += 3) 
                {
                    arr_29 [i_0] = ((/* implicit */signed char) (!(var_5)));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_29 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                                arr_35 [i_11] [i_10] [18LL] [i_9] [18LL] [(unsigned short)2] [(unsigned short)2] |= ((/* implicit */int) (unsigned char)227);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(arr_31 [i_0 + 1] [(_Bool)1] [i_9 - 1]))))));
                    var_31 = ((/* implicit */int) var_5);
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((_Bool) 2782857868003592970LL)))));
                }
            }
        } 
    } 
    var_33 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-72)) <= (((/* implicit */int) (signed char)-36))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)19)), ((unsigned short)61683))))));
}
