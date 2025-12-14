/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130806
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
    var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) ((_Bool) var_12))));
    var_16 = ((/* implicit */short) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2966391556U))))), (((unsigned int) var_2)))), (((((/* implicit */_Bool) max((var_3), (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)121))))) : (var_12)))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */int) ((_Bool) var_3))) : ((~(((/* implicit */int) (unsigned short)511))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] [i_0] = ((unsigned char) (unsigned short)65024);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [8LL] = (~(((((/* implicit */_Bool) arr_7 [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31635))) : (-1012783325434095857LL))));
                        }
                    } 
                } 
            } 
            var_18 ^= ((/* implicit */unsigned char) ((short) arr_1 [i_1]));
            var_19 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (2110375202U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            arr_17 [i_0] [i_5] = ((/* implicit */_Bool) (-(arr_3 [i_5] [i_0])));
            /* LoopSeq 2 */
            for (signed char i_6 = 3; i_6 < 8; i_6 += 4) 
            {
                var_20 = ((/* implicit */long long int) ((unsigned short) arr_6 [i_5] [i_5] [i_0 + 4] [i_6 - 2]));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) (unsigned short)31635)) : (((/* implicit */int) (unsigned short)65522))))) ? (((2184592094U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (arr_3 [i_0] [i_0])))))));
                    var_22 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((arr_9 [i_0 + 4] [i_0] [i_0 + 1] [i_0]) >> (((arr_9 [i_0 + 4] [i_0 + 4] [i_0 + 1] [i_0]) - (3124911007U)))))) : (((/* implicit */_Bool) ((arr_9 [i_0 + 4] [i_0] [i_0 + 1] [i_0]) >> (((((arr_9 [i_0 + 4] [i_0 + 4] [i_0 + 1] [i_0]) - (3124911007U))) - (2561799360U))))));
                    arr_22 [i_0 + 4] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_11 [i_0] [i_5] [i_0 + 2] [i_7] [i_6 - 1]) ? (((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1] [i_0 - 1] [i_7] [i_6 + 3])) : (((/* implicit */int) var_3))));
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_0 + 4] [i_0 + 4]))));
                }
                var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) arr_10 [i_6 + 3] [i_6 + 3] [i_0] [i_5] [i_0 + 2])) : (((/* implicit */int) (unsigned short)65025))))) > ((-(arr_18 [i_5])))));
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                arr_27 [i_0] [9ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_5] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_8] [i_0] [i_0 + 1] [i_0]))) : (arr_25 [i_8] [i_5] [i_0])));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0]))) : (((/* implicit */int) arr_23 [i_8] [i_0] [i_0] [i_0]))));
            }
            arr_28 [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_19 [i_0 + 1] [i_0 + 4] [i_0 + 4] [i_0]) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) < (arr_1 [i_0]))))));
        }
        arr_29 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) - (arr_19 [i_0] [i_0 + 4] [i_0] [i_0]))) % (((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 4]))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))) > (arr_24 [i_0 - 1])));
    }
    for (unsigned int i_9 = 1; i_9 < 19; i_9 += 1) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned short) ((long long int) arr_31 [i_9] [i_9]));
        arr_34 [i_9] [17ULL] = ((/* implicit */unsigned int) ((long long int) (short)-29114));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (unsigned char i_11 = 1; i_11 < 19; i_11 += 1) 
            {
                {
                    arr_40 [i_9 + 2] [i_10] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_38 [i_10] [i_11])) << (((((/* implicit */int) arr_35 [i_9 - 1])) - (39577))))) + (((((/* implicit */_Bool) arr_38 [i_9] [i_10])) ? (((/* implicit */int) arr_35 [i_9 - 1])) : (((/* implicit */int) arr_35 [i_9 - 1]))))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)48843)), (((var_14) ? (((/* implicit */int) arr_35 [(unsigned short)14])) : (((/* implicit */int) arr_39 [i_9] [i_10]))))))) ? (13244183746677180851ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_9] [i_10]))))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 3) 
                    {
                        arr_45 [i_9] [i_9] [i_11] [i_11] = ((/* implicit */long long int) arr_35 [i_9]);
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_9 + 1] [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_11 + 1] [i_11 - 1])) ? (max((18446744073709551613ULL), (((/* implicit */unsigned long long int) arr_35 [i_9])))) : (((unsigned long long int) (_Bool)1)))))));
                    }
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_9 + 2]))))) ? (((((/* implicit */_Bool) arr_35 [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9 + 2]))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_35 [i_9 - 1]), (arr_35 [i_9 + 2])))))));
                    var_30 = (i_11 % 2 == 0) ? (((/* implicit */long long int) (-(((((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (arr_32 [i_9] [i_10])))) >> (((((/* implicit */int) arr_41 [i_9 + 2] [i_9 + 2] [i_11])) - (49701)))))))) : (((/* implicit */long long int) (-(((((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (arr_32 [i_9] [i_10])))) >> (((((((/* implicit */int) arr_41 [i_9 + 2] [i_9 + 2] [i_11])) - (49701))) + (35871))))))));
                }
            } 
        } 
        var_31 &= ((unsigned long long int) (short)19607);
    }
    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) + (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3371037292U)))))) : ((~((+(var_13)))))));
}
