/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167871
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
    var_14 = ((/* implicit */short) min((min((((/* implicit */long long int) (-(3221225472U)))), (var_11))), (((/* implicit */long long int) var_4))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)158))))) ? (((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((/* implicit */int) arr_0 [i_0])) - (106))))) : (((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (short)5))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8192))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) == (((/* implicit */int) ((-6909664297182687654LL) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))) <= (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)32)), (2654404942U)))) ? (((/* implicit */int) min((var_10), (var_0)))) : (((((/* implicit */_Bool) 6917529027641081856LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-14749)))))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_17 = min((var_5), (arr_1 [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((short) (unsigned short)20478)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_1]), (var_1)))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) != (((/* implicit */int) (unsigned char)5)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))) - (3144470374U)));
        var_21 = ((/* implicit */unsigned short) arr_5 [i_1]);
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_10 [20U] [i_1] [i_2] = ((/* implicit */unsigned char) var_9);
            var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [8U] [i_2] [i_1]))) | (((((-7668260982818289343LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))));
        }
        for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) max(((unsigned short)45058), ((unsigned short)42140))))));
            arr_14 [i_1] [i_3] = ((/* implicit */short) (unsigned char)2);
        }
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_23 = ((unsigned char) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-1))))), (arr_6 [(unsigned short)4])));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned char i_7 = 2; i_7 < 11; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) arr_5 [i_5]);
                            var_25 = arr_4 [i_7 - 2];
                            var_26 = ((/* implicit */unsigned int) arr_7 [i_4] [i_6] [i_8]);
                            var_27 = ((/* implicit */unsigned short) ((3144470374U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))));
                        }
                        for (long long int i_9 = 4; i_9 < 11; i_9 += 4) 
                        {
                            arr_30 [i_4] [i_5] [i_5] [i_6] [i_7 - 1] [i_7] [i_9 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((max((-7073808367890122535LL), (((/* implicit */long long int) (unsigned char)224)))) < (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))));
                            arr_31 [i_5] = ((/* implicit */unsigned char) 4294967288U);
                            arr_32 [i_4] [i_5] [i_5] [i_7] [i_7 + 1] [i_9 + 1] [i_4] = ((/* implicit */long long int) arr_29 [i_4] [i_4] [i_6] [i_6] [i_7 - 2] [i_7 - 1] [i_9 + 1]);
                        }
                        var_28 = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_22 [i_7 - 1])), (1126021903U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)17)) >= (((/* implicit */int) arr_7 [i_7 - 2] [i_7 - 1] [i_7 + 1]))))))));
                        var_29 *= ((/* implicit */short) min((((/* implicit */int) arr_3 [(short)13])), (((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */int) (short)14758)) : (((/* implicit */int) min(((short)14773), (arr_4 [17LL]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 3; i_10 < 10; i_10 += 2) 
                        {
                            arr_35 [i_4] [i_4] [(unsigned char)6] [8LL] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_4] [i_5] [i_4] [(unsigned char)0] [i_7 + 1] [i_10 + 1] [i_10])) * (((/* implicit */int) (unsigned char)251))))) / (((((/* implicit */_Bool) 3221225484U)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))))))) + (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_4] [i_6] [i_6])) : (((/* implicit */int) (short)-8183))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8189))) : (((4294967288U) << (0U))))) : ((~(((1073741828U) & (3221225486U)))))));
                        }
                        var_31 = ((/* implicit */unsigned char) -23LL);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            arr_40 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_6 [(unsigned char)2])) < (((/* implicit */int) var_0))))));
            arr_41 [i_4] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-8177)) ? (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))));
        }
        arr_42 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)112))) ? (max((((/* implicit */unsigned int) var_1)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) arr_17 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) (unsigned short)62644)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2296579718U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62642)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned short)2910))))))) : (((((arr_37 [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [9U] [i_4] [i_4]))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    }
}
