/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145002
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_7 [i_1])))))) ? (((/* implicit */unsigned long long int) (-(((var_1) >> (((((/* implicit */int) var_6)) + (155)))))))) : (((arr_6 [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (8733768176680975398LL) : (arr_1 [i_0])))) : (var_9)))));
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)222)), (arr_4 [i_0] [i_0] [i_1] [i_2]))))));
                    var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(max((var_0), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))), (min((arr_4 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */long long int) arr_0 [i_0]))))));
                    var_15 ^= ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_4 [i_2] [i_1] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))) : (arr_4 [i_0] [i_0] [i_2] [i_0]))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3] [i_3])) ? (arr_5 [(unsigned short)13] [i_1] [i_2] [i_3]) : (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)8] [i_0] [i_2])))))) : (arr_5 [i_0] [i_1] [13U] [i_3])));
                        var_17 = ((/* implicit */long long int) (((-(arr_11 [i_0] [i_0]))) <= (((arr_6 [i_0] [i_0] [1ULL] [i_3]) ? (min((arr_11 [i_0] [i_0]), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_13 [i_0] [i_0] [i_1] [i_2] [i_4]), (((/* implicit */short) var_8))))))))))));
                        var_19 = arr_10 [8] [i_1] [i_1] [i_1];
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_6 + 1] [i_5] [i_0]))));
                            arr_23 [i_5] = ((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1] [i_6 + 1]);
                            var_21 = ((/* implicit */unsigned long long int) arr_13 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 2]);
                            var_22 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [11U])) ? (((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2] [i_2])) : (var_12)))));
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_16 [i_0] [9ULL] [i_0] [i_5]) : (arr_16 [i_0] [i_1] [i_2] [i_5])));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_5])) & (((/* implicit */int) arr_0 [i_0])))))));
                        var_24 = ((/* implicit */unsigned short) (unsigned char)202);
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_25 &= ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                            var_27 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_7])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U))) >> (((arr_4 [i_0] [i_1] [i_2] [i_5]) + (1727987822996025648LL)))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_16 [i_1] [i_2] [i_5] [i_7]))));
                        }
                        for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (-5740985738410709935LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8])))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2148060945849163024ULL)) ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [(signed char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_28 [i_8] [(signed char)8] [i_2] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_5] [(unsigned short)0] [i_5] [i_5])))) : (((/* implicit */int) arr_27 [i_0] [7LL] [i_2] [7LL] [i_8] [i_8])))))));
                            var_32 = ((/* implicit */unsigned short) arr_5 [i_5] [i_5] [i_2] [i_1]);
                        }
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */_Bool) var_10);
    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_0))));
}
