/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189123
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) max((((((/* implicit */int) (signed char)-64)) <= (((/* implicit */int) arr_0 [i_0 - 2])))), ((!(((/* implicit */_Bool) arr_3 [i_0 - 2]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_11 += ((/* implicit */signed char) ((((/* implicit */long long int) min((var_0), (((/* implicit */int) arr_1 [i_1 + 2]))))) + (((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1])))))));
            var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_0])) + (((/* implicit */int) (signed char)-74))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)76)) + (((/* implicit */int) (signed char)-84))))) : ((~(var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0 - 1] [i_0]), (((/* implicit */unsigned short) (signed char)117)))))) : (max((((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (var_3))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))))));
            var_13 = ((/* implicit */unsigned short) (((((+(((/* implicit */int) min((var_5), ((signed char)-114)))))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) ^ (var_9)))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (arr_6 [i_0 - 2] [i_0 - 1])))) || (((/* implicit */_Bool) (-(((((var_3) + (9223372036854775807LL))) << (((arr_7 [i_2] [i_0] [i_0]) - (8597663758359899349LL))))))))));
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) (+((-(520192ULL)))))))))));
            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0 - 2])) | (((/* implicit */int) arr_0 [i_0 - 2])))) ^ (((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) arr_1 [i_0 + 1]))))));
        }
        arr_9 [4LL] = (~(min(((~(((/* implicit */int) var_5)))), (((((/* implicit */int) (unsigned char)36)) | (((/* implicit */int) arr_6 [i_0] [i_0])))))));
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_17 = ((/* implicit */signed char) (-((~((~(((/* implicit */int) (unsigned char)36))))))));
            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) (signed char)63)))))))));
            var_19 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_6 [3ULL] [3ULL]))) - ((-(var_9)))))));
            arr_14 [i_0] [6LL] = ((/* implicit */signed char) (-(((((var_4) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_0]))))) ? (((/* implicit */int) ((var_3) == (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3])))))))));
            arr_15 [i_0] [i_3] |= (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0 - 1])), ((unsigned char)158))))) : (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(5U)))) | (max((arr_12 [i_4] [i_4]), (((/* implicit */unsigned long long int) (short)8230)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))), (max(((signed char)64), ((signed char)-69)))))))));
            arr_18 [i_0] [i_0 + 1] [i_0] &= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1]))))));
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (int i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_21 = (((~(arr_21 [i_0] [i_0] [i_0]))) & (((/* implicit */long long int) var_0)));
                            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)64)) & (((/* implicit */int) arr_8 [i_7] [i_0] [i_0])))) <= ((~(((/* implicit */int) (signed char)63))))));
                            arr_30 [i_8] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (var_6)))) - (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)90))) : (var_9)))));
                        }
                        for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_23 |= ((/* implicit */long long int) (!(((arr_16 [i_0 - 2] [i_7 + 1]) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_5])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_8)))))))));
                            arr_33 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned int) (((+((+(((/* implicit */int) arr_1 [i_0 - 2])))))) == (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))) < (max((((/* implicit */long long int) (signed char)-39)), (var_4))))))));
                            var_24 = ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-59)))) - (((/* implicit */int) ((arr_7 [i_0] [4LL] [i_6]) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [0LL]))))))))) ? ((~(((arr_29 [i_0] [i_5]) ? (((/* implicit */long long int) var_0)) : (var_3))))) : (max((((/* implicit */long long int) arr_25 [i_0 - 2] [i_6] [i_7 - 1] [i_0 - 2])), ((-(arr_21 [i_0] [i_6] [i_9]))))));
                            arr_34 [i_0] [i_5] [(short)5] [i_7] [i_9] [i_7] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-49)) & (((/* implicit */int) (unsigned short)20259))))), (min(((-(var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7] [i_0 - 1])) ? (arr_16 [i_5] [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5] [i_9]))))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_25 += ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)63185)) >= (((/* implicit */int) (unsigned char)36)))))));
                            var_26 += ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-99)))))) + (((((/* implicit */_Bool) var_2)) ? (arr_21 [i_0] [i_6] [i_0]) : (((/* implicit */long long int) var_7)))))) < ((((+(var_3))) / (((((/* implicit */_Bool) (unsigned char)9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_6])))))))));
                        }
                        var_27 = ((/* implicit */_Bool) min((((((var_0) / (((/* implicit */int) (signed char)-77)))) | (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)18)), (var_8)))))), ((-(((/* implicit */int) (signed char)-39))))));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)247)) | (((/* implicit */int) arr_22 [i_6] [i_6] [i_5]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0]))))))), (((((/* implicit */int) arr_31 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7])) == (((/* implicit */int) (signed char)-49)))))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)49)), (arr_12 [i_0] [i_0])))) ? (((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) arr_11 [i_5])))) : (((/* implicit */int) (signed char)4))))) - (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_5]))) - (var_4))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)49)) + (((/* implicit */int) (signed char)1)))))))));
        }
        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            var_30 += ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)15))))) * ((+(((arr_20 [i_0] [i_0] [i_11]) * (var_7)))))));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_3) & (var_4))), (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) var_6))))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)29753)) ? (((/* implicit */long long int) arr_20 [(signed char)7] [i_11] [i_0])) : (var_3))))))));
        }
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_13 = 2; i_13 < 23; i_13 += 3) 
        {
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_46 [i_12]))))));
            var_33 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_6))))));
            var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-64))));
        }
        var_35 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_12]))) <= (var_4))) && (((/* implicit */_Bool) arr_42 [i_12]))));
    }
    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-114))))) ? (((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (var_3)))) ? (((/* implicit */long long int) (~((-(1211516250U)))))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9))), (((((/* implicit */_Bool) var_5)) ? (var_9) : (var_9))))));
    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)64)) : (var_0))), ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4684)) ? (var_7) : (var_7)))))))));
}
