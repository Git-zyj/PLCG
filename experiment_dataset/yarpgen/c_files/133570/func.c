/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133570
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
    var_10 = ((/* implicit */signed char) max((((/* implicit */long long int) (((~(680873583U))) >> (((var_9) - (397591006094345085LL)))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_1))))) ? (((-1493048344935080965LL) - (((/* implicit */long long int) 9U)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) - (((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) var_0))))) ? (140737486258176ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_0 + 1])))))));
            arr_4 [i_0 + 1] = ((/* implicit */unsigned char) ((((-8408825626985146758LL) - (var_9))) + ((+(var_0)))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                arr_11 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) arr_2 [i_0] [i_2] [i_2]);
                var_12 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0] [i_0]);
            }
            /* LoopSeq 2 */
            for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_13 = ((/* implicit */signed char) (unsigned char)1);
                    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_16 [i_0]), (max((var_9), (((/* implicit */long long int) arr_12 [i_0] [i_0]))))))) <= ((+(var_7)))));
                    var_15 = (+((~(arr_5 [i_5] [i_5]))));
                    var_16 = ((/* implicit */unsigned long long int) var_0);
                }
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) | (((var_2) * (arr_7 [i_0] [i_2] [i_4 - 1])))));
                arr_17 [i_0] [i_0 + 2] [i_0] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) <= (((var_3) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))), (arr_14 [i_0] [i_2])));
                var_18 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) | (((((/* implicit */int) arr_12 [i_4 + 1] [i_2])) ^ (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1]))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) | (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_4]))))) + (arr_7 [i_4 + 1] [i_0 + 2] [i_4 + 1])))));
            }
            for (int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                arr_22 [i_0] [i_2] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)58)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_14 [i_0] [i_0 - 1])))) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_14 [i_0] [i_0 - 1]))))));
                arr_23 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) + (arr_20 [i_0] [i_0 - 2] [i_0] [i_0])));
                arr_24 [i_0 - 2] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)197)) << (((/* implicit */int) var_3))))), ((+(var_4))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0])))));
            }
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1])))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (var_9)))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)101)) != (((/* implicit */int) arr_0 [i_0] [i_2])))))) <= (max((var_7), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
        }
        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0]))) : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
    }
    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (long long int i_9 = 3; i_9 < 9; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_41 [i_7] [(signed char)7] [(_Bool)1] [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_7 + 2] [i_9 + 1] [i_10] [i_11])) < (((/* implicit */int) arr_15 [i_7 + 1] [i_7 + 1] [i_9] [i_11])))))) + ((~(var_0)))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7085880258950591530LL)))))));
                                var_25 += ((/* implicit */short) (signed char)7);
                                arr_42 [i_9] [i_7] [10LL] [i_10] [i_11] = ((/* implicit */_Bool) arr_7 [i_9 - 3] [i_9] [i_9]);
                                arr_43 [i_7] [i_9] [i_11] = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    var_26 = (~(((((/* implicit */int) (signed char)14)) >> (((((/* implicit */int) arr_14 [i_9] [i_8])) - (41))))));
                }
            } 
        } 
        arr_44 [i_7] = ((/* implicit */unsigned char) 288228177128456192LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_12 = 2; i_12 < 8; i_12 += 2) 
        {
            arr_47 [i_7] [i_7 + 1] [i_7] = ((/* implicit */long long int) ((((arr_5 [i_7] [i_12]) >> (((/* implicit */int) (unsigned char)59)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [(unsigned char)12] [(unsigned char)12])))));
            var_27 = ((/* implicit */unsigned long long int) (-(arr_37 [i_7 + 2] [i_12] [i_12 - 1] [i_7 + 2])));
        }
        arr_48 [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_36 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 2]) < (((/* implicit */unsigned long long int) ((1347522771) | (((/* implicit */int) var_6))))))))));
    }
    var_28 = ((/* implicit */unsigned long long int) var_6);
    var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2132567328U)) & (var_4)));
}
