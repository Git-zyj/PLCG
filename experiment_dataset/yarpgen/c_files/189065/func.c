/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189065
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = (~((-(((/* implicit */int) arr_0 [i_0 - 2])))));
        arr_3 [i_0] [i_0] &= ((unsigned short) max((arr_1 [i_0 - 3]), (arr_0 [i_0 - 4])));
    }
    var_18 &= ((/* implicit */unsigned char) var_5);
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_20 += ((/* implicit */int) var_16);
        var_21 &= ((/* implicit */unsigned int) (+(((unsigned long long int) arr_0 [i_1]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((short) ((short) var_8)));
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_22 |= ((/* implicit */short) var_4);
                                var_23 = ((/* implicit */short) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_16 [i_6 - 1] [i_3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 4) 
                    {
                        for (long long int i_8 = 4; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_29 [i_2] [i_4] [i_2] [i_7] &= arr_10 [i_2];
                                arr_30 [i_2] [i_2] [i_4] [i_7 + 1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        arr_33 [i_9] [i_3 - 1] &= ((/* implicit */int) ((((((/* implicit */int) var_17)) == (((/* implicit */int) var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 - 1] [i_3 + 1]))) : (arr_19 [i_3])));
                        arr_34 [i_9] [(unsigned char)2] [(unsigned char)2] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_14)))) >= (32U)));
                        var_24 = var_13;
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 2) 
                    {
                        for (long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_37 [i_2] [(unsigned short)12] [i_2] [i_4] [i_11]))));
                                var_26 = ((/* implicit */signed char) var_16);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_2]))) | (var_7))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_12 = 2; i_12 < 13; i_12 += 4) 
        {
            var_28 = ((/* implicit */int) ((((arr_19 [i_2]) + (9223372036854775807LL))) << (((/* implicit */int) var_5))));
            var_29 = ((/* implicit */short) (~(var_4)));
            arr_42 [i_12] [i_12] |= ((/* implicit */unsigned int) arr_13 [i_2] [i_12 + 1]);
        }
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_41 [i_2])) > (arr_8 [i_2])));
        arr_43 [12U] [i_2] |= ((/* implicit */unsigned long long int) arr_41 [(short)4]);
    }
    for (unsigned short i_13 = 2; i_13 < 18; i_13 += 2) 
    {
        arr_46 [i_13] [i_13] = ((/* implicit */int) var_0);
        arr_47 [i_13] = ((/* implicit */unsigned long long int) ((((int) arr_44 [i_13 + 1])) >> ((((-(10527758413516038900ULL))) - (7918985660193512693ULL)))));
        var_31 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (max((var_10), (((/* implicit */int) arr_44 [i_13 - 2])))) : (((var_10) + (((/* implicit */int) ((short) arr_44 [i_13 + 1])))))));
        var_32 = ((/* implicit */int) var_6);
    }
}
