/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180725
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
    var_12 = ((/* implicit */unsigned long long int) -954476879);
    var_13 = ((/* implicit */unsigned long long int) ((((_Bool) var_5)) && (((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_7)))))) : (((long long int) 954476901)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((short) arr_1 [i_0] [i_0]));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((short) 802509215U)))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_2] = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned int) arr_7 [i_3 + 3] [i_1 + 1])), (((arr_2 [i_1]) ? (802509227U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [19]))))))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_15 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_4]))))), (((((/* implicit */int) (signed char)-9)) - (((/* implicit */int) (signed char)12)))))));
                    /* LoopSeq 4 */
                    for (int i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (signed char)21)))));
                        arr_19 [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_18 [i_5 + 2] [i_3 - 2]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_4] [i_2] [i_1])), (arr_8 [(_Bool)1] [i_1] [i_3] [(short)2])))) ? (((/* implicit */unsigned long long int) 802509215U)) : (max((((/* implicit */unsigned long long int) -1LL)), (1384380977003068049ULL)))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_3 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_6 [i_1 + 1]) : (((/* implicit */int) ((802509208U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))))))));
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) 802509198U))));
                        var_19 = ((/* implicit */unsigned char) ((arr_9 [i_1] [i_3 + 3] [i_6] [i_6]) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [i_2] [i_6]))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_1] [i_2] [i_3] [i_1] [i_6]))) ? ((~(((/* implicit */int) arr_7 [i_1] [i_3])))) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_3 + 2] [i_4] [i_6]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-9))));
                        arr_25 [(short)15] [i_1] [i_4] = var_2;
                        var_22 = ((/* implicit */unsigned long long int) ((arr_22 [i_1] [16ULL] [i_1 + 1] [i_3 + 3] [i_3 + 2]) && (arr_22 [i_1 + 1] [i_1] [i_1 + 1] [i_3 - 2] [i_3 + 1])));
                        arr_26 [i_1 - 1] [i_1] [i_2] [i_3] [i_4] [(signed char)9] = ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) var_1)));
                    }
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_23 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_29 [i_4] [i_3 - 2] [i_1 + 1])) ? (((/* implicit */int) ((unsigned short) arr_13 [i_8] [i_8] [i_8] [i_4]))) : (((/* implicit */int) ((((/* implicit */_Bool) 802509208U)) && (((/* implicit */_Bool) arr_27 [i_8] [i_3] [i_4] [(short)0]))))))) & (((/* implicit */int) ((signed char) arr_4 [i_1] [i_8])))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_2] [i_2] [i_2]), (-343374905370768301LL)))) ? ((((~(((/* implicit */int) var_7)))) & (max((1354724453), (var_2))))) : (((int) (~(1132129902))))));
                    }
                    var_25 = ((/* implicit */signed char) min(((-(1354724453))), (((((/* implicit */int) arr_7 [i_1 + 1] [i_2])) * (arr_6 [i_3 - 2])))));
                    var_26 = ((/* implicit */int) 3492458081U);
                    arr_30 [13] [i_1] = ((/* implicit */unsigned char) (signed char)29);
                }
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((int) ((arr_4 [i_3 - 2] [i_1 + 1]) << (((arr_4 [i_3 - 2] [i_1 + 1]) - (1421793770U)))))))));
                arr_31 [i_1] [i_2] [i_3 + 2] = ((/* implicit */long long int) ((unsigned long long int) arr_23 [(short)0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_3 + 2]));
            }
            var_28 -= ((/* implicit */short) max((954476878), (954476882)));
            var_29 = ((/* implicit */unsigned char) min((3718857866230118853ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (-1785046109) : (((/* implicit */int) (_Bool)0)))))));
            var_30 = ((/* implicit */short) max((arr_8 [i_1] [i_1] [i_1] [i_2]), (3492458081U)));
        }
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_21 [i_1] [i_1] [i_1] [14U] [(unsigned char)2]), (arr_16 [16] [i_1] [14] [16] [i_1])))) <= (((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) arr_22 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])) : (arr_6 [i_1 - 1]))))))));
        arr_32 [i_1] = ((/* implicit */signed char) ((long long int) arr_16 [i_1] [(short)18] [i_1] [i_1] [i_1 + 1]));
    }
    for (unsigned int i_9 = 2; i_9 < 19; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) max((((unsigned short) ((((/* implicit */_Bool) -954476892)) ? (var_3) : (((/* implicit */int) arr_16 [i_9] [10] [i_9] [i_9] [i_10]))))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (1384380977003068054ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (3492458078U)))))))));
            var_33 += ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_9 [i_9] [(unsigned char)12] [i_9] [(unsigned short)16])), (arr_24 [i_9] [i_10] [i_10] [i_10] [i_10]))), (((/* implicit */unsigned long long int) arr_18 [i_9 + 1] [i_9 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_9] [i_9] [i_9]))) : (((((((/* implicit */_Bool) 1354724470)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (4294967295U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_9 + 1] [i_10])))))))));
        }
        for (int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            var_34 = ((/* implicit */long long int) (~(((int) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9] [(unsigned char)8] [18] [i_11]))) : (802509205U))))));
            arr_40 [(short)18] = ((/* implicit */unsigned long long int) max((arr_14 [i_9]), (((/* implicit */unsigned int) arr_23 [i_9 + 1] [i_9] [i_11] [i_9] [i_11] [i_11] [i_11]))));
        }
        arr_41 [i_9] = ((/* implicit */_Bool) ((unsigned int) min(((+(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (880173869) : (((/* implicit */int) (short)-29346))))))));
    }
}
