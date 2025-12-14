/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134282
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_1] [4U] [i_0] [4U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 1])) && (((/* implicit */_Bool) ((short) (short)32744))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) (signed char)121))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */int) (signed char)121)) >= (((/* implicit */int) (unsigned char)58)))))));
                    var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned char)155))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [11])))))));
                    var_16 *= ((/* implicit */signed char) arr_2 [i_0 - 2]);
                    arr_11 [(signed char)24] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_1 - 1] [(signed char)2]) : (arr_10 [i_1] [i_1])))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (arr_7 [i_0 - 1] [i_1 + 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                }
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_17 ^= ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [(signed char)18]))))), (((((/* implicit */_Bool) (signed char)-74)) ? (((var_11) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [16U]))))) : (((/* implicit */long long int) ((((arr_12 [20] [i_4]) + (2147483647))) << (((((/* implicit */int) (unsigned char)14)) - (13))))))))));
                    var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28)))))) | (((((/* implicit */_Bool) (unsigned short)27241)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))))));
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [(signed char)21] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) : (var_5)))) ? (((long long int) arr_0 [i_4])) : (((/* implicit */long long int) (~(arr_10 [i_1] [i_1])))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [12]) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [7] [i_4])) : (((/* implicit */int) (unsigned char)157))))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) arr_12 [i_1] [i_4])) : (4205964346U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)6)), (var_0))))))))));
                }
                for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) arr_3 [i_1]);
                    arr_17 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_2 [(short)19]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1 + 1])))))))) ? (arr_10 [i_0 - 2] [i_1]) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) % (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_5])))) << (((((arr_2 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (arr_16 [i_0 + 1] [i_0 + 1] [i_5]))) - (9LL))))))));
                }
                /* LoopSeq 4 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_21 *= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])))))) == (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (arr_15 [(signed char)18] [i_1] [i_6]))))))));
                    arr_20 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((arr_10 [i_1] [i_1]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_6] [i_1 + 2]))));
                    arr_21 [i_0] [i_1 + 2] [i_6] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) var_10))));
                    arr_22 [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_7)))))) : ((~(((/* implicit */int) var_1))))));
                    var_22 = ((/* implicit */unsigned char) ((((arr_16 [i_6] [i_1] [(unsigned char)16]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3]))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_12 [i_1] [(_Bool)1]) : (arr_12 [i_1] [i_6]))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 &= ((/* implicit */signed char) arr_9 [i_0] [i_1]);
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (unsigned char)255))));
                    var_25 = ((/* implicit */int) arr_6 [i_0] [i_1] [i_7] [i_1]);
                }
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_26 -= (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_14 [i_8])) ? (((/* implicit */int) arr_23 [17] [i_1] [i_1] [(unsigned char)12])) : (((/* implicit */int) var_8)))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_8])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (short)-18414)) : (((/* implicit */int) (!(((/* implicit */_Bool) -849916640)))))))))))));
                    arr_29 [i_1] [(unsigned char)19] = ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [(_Bool)1] [(_Bool)1] [i_8] [i_8]))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (((~(((arr_19 [i_0 - 1] [i_8]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) * (((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)127)))) : (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */unsigned int) var_9)) : (2831382722U))))))))));
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (((~(((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) <= (arr_19 [i_9] [i_1 - 1]))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)6)) / (((/* implicit */int) var_2)))))))))))));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_9 [i_0] [i_0]))));
                    var_31 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_30 [i_9]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) arr_15 [i_1] [i_11] [21LL]);
                                var_33 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                                arr_38 [i_1] [i_1 + 2] [i_9] [0] [i_11] [i_11] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned int) min((var_34), (min((2831382722U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)71)))))))));
                }
                var_35 = (((!(((/* implicit */_Bool) arr_28 [i_1] [i_1 + 1] [i_1 + 2])))) ? (((((((/* implicit */int) (signed char)-13)) + (2147483647))) << (((((arr_28 [i_1] [i_1 - 1] [i_1 - 1]) + (299158207))) - (9))))) : (arr_28 [i_1] [i_1 + 1] [i_1 + 2]));
                var_36 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)18415)) <= (((/* implicit */int) (signed char)37)))))) + (((((/* implicit */_Bool) arr_30 [24U])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0])))))))) ? (((var_5) + (((((/* implicit */_Bool) arr_24 [i_1 + 2] [i_1 - 1] [i_1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [(signed char)10] [24LL] [i_0] [8] [8] [i_0]))) : (arr_19 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)98)) & (((/* implicit */int) (signed char)127))))));
            }
        } 
    } 
    var_37 &= ((/* implicit */int) ((((/* implicit */int) (!(var_7)))) > (((/* implicit */int) var_0))));
}
