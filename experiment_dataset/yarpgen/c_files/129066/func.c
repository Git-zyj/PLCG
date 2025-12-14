/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129066
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
    var_18 = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_15)))), (((/* implicit */int) var_11))));
    var_19 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
    var_20 = ((/* implicit */unsigned long long int) var_8);
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)60959)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (unsigned short)21643))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_2)))))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)60952)) > (((/* implicit */int) (unsigned char)28)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((int) ((((((/* implicit */_Bool) 503316480U)) ? (((/* implicit */int) (unsigned short)4581)) : (((/* implicit */int) (unsigned short)4581)))) | ((-(((/* implicit */int) (signed char)-87)))))));
        var_23 = ((/* implicit */int) (~(var_8)));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (int i_3 = 2; i_3 < 8; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned short) arr_0 [(unsigned char)6]);
                            var_24 = ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_13 [(unsigned char)3] [i_1] [i_1] [i_1 + 2])));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1 + 1] [i_2] [(_Bool)1] [i_2] [i_2])) ? (((/* implicit */long long int) ((unsigned int) var_4))) : (-9223372036854775788LL))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? ((~(((/* implicit */int) (signed char)-87)))) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) || (((/* implicit */_Bool) ((signed char) 3791650813U)))));
                        }
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_17))));
                        arr_18 [i_1] [i_2] [i_2] [i_3] [(signed char)2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? ((~(((/* implicit */int) var_13)))) : (var_4)))) ? (min(((+(((/* implicit */int) var_16)))), (((/* implicit */int) (signed char)-87)))) : (((/* implicit */int) ((unsigned char) var_11))));
                        var_29 = ((/* implicit */int) max((((/* implicit */signed char) var_15)), ((signed char)-87)));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3 + 3] [i_4 + 1]))))) ? (((/* implicit */int) ((11363365021018957189ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_14))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [8ULL])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            arr_22 [i_1] [i_6] = ((/* implicit */_Bool) min((1048575LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? ((-(1903206720U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_13))))))))));
            /* LoopNest 3 */
            for (short i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            arr_32 [6U] [i_1] [i_7] = (~(((/* implicit */int) (signed char)-83)));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) max((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1]))) : (arr_24 [i_6]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)162)) >> (((/* implicit */int) (_Bool)1))))))), (((arr_10 [i_9] [i_7 - 1] [i_1 - 1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_1]))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 2; i_12 < 7; i_12 += 3) 
                        {
                            var_32 &= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_23 [i_6] [i_10] [6])), (arr_3 [i_1 + 2]))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_6] [i_6]))) > (564575753U))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1903206732U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_6] [i_11] [i_12])))))))))));
                            var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((3791650809U), (((/* implicit */unsigned int) (signed char)34))))) ? (((/* implicit */int) ((unsigned char) arr_26 [i_12 + 4] [i_11] [i_11] [i_1 + 1]))) : (((/* implicit */int) var_13))));
                            arr_43 [i_1] [i_11] [i_10] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_10 [i_1] [i_1 + 2] [i_12] [i_12 + 1]) == (arr_10 [i_1] [i_1 + 2] [i_10] [i_10])))) / (((/* implicit */int) ((_Bool) 3791650797U)))));
                            var_34 |= ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) var_12))))) < (((/* implicit */int) ((short) max((63U), (((/* implicit */unsigned int) arr_6 [(signed char)6] [(signed char)6])))))));
                        }
                        var_35 = ((/* implicit */signed char) 2972621189U);
                        var_36 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) % (max((((/* implicit */long long int) arr_37 [(short)10])), (max((((/* implicit */long long int) arr_12 [0LL] [0LL] [i_10] [i_10] [0LL] [i_10])), (5057679666696950578LL)))))));
                        arr_44 [i_1] [9U] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) ((((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)512))))) && (((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [(signed char)9] [2U])))))));
                    }
                } 
            } 
        }
    }
}
