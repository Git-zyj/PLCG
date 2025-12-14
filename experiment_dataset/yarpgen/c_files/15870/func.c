/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15870
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [6] = ((/* implicit */int) arr_3 [i_1]);
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (!(var_10)));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~((-(601864565))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_3] [i_4 + 4] [11ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_2] [i_5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) min(((unsigned short)25306), (arr_11 [16ULL] [16ULL])))), (arr_17 [i_2] [i_3] [i_4] [i_4] [i_5])))));
                            var_18 = max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (arr_9 [i_5]));
                            arr_20 [i_2] [i_2] = ((/* implicit */long long int) max((((unsigned int) min((((/* implicit */long long int) 601864569)), (arr_12 [i_3] [i_2])))), (((/* implicit */unsigned int) ((min((0ULL), (((/* implicit */unsigned long long int) arr_15 [(unsigned char)4] [i_3] [(unsigned char)4])))) > (((/* implicit */unsigned long long int) arr_9 [i_3])))))));
                            arr_21 [(short)5] [(short)5] [10] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((arr_15 [i_4 + 4] [i_4 + 3] [i_4 + 1]) + (2147483647))) << (((((arr_17 [(unsigned short)16] [i_4] [i_4 + 4] [i_4 + 3] [i_4 - 1]) + (205310523264027512LL))) - (1LL)))))), (((arr_17 [(short)10] [i_4] [i_4 + 2] [i_4 + 4] [i_4 + 4]) ^ (arr_17 [5] [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    arr_24 [i_2] [i_2] = (-(max((((/* implicit */int) arr_14 [i_2] [i_6])), (arr_22 [i_2] [i_3] [i_6]))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) arr_11 [i_6] [4]);
                                var_20 = ((/* implicit */_Bool) (~(((unsigned int) ((((/* implicit */int) arr_25 [(short)8] [i_3] [7])) <= (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = (~((~((((_Bool)1) ? (((/* implicit */unsigned int) -601864575)) : (var_12))))));
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_37 [i_9])))))))) < ((-((~(var_2))))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                            {
                                var_23 = ((/* implicit */signed char) ((unsigned int) (-(var_16))));
                                var_24 += (-((+(((/* implicit */int) (unsigned char)237)))));
                            }
                            for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 2) 
                            {
                                arr_48 [i_9] [i_10] [i_11] [9U] [i_10] = var_14;
                                var_25 ^= ((/* implicit */int) max((((/* implicit */long long int) min((arr_38 [i_14 - 1] [i_9] [i_14 + 1] [0ULL]), (arr_38 [i_14 - 3] [i_11] [i_14 + 2] [18U])))), (min(((-(-8311621851728281963LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11]))) / (arr_46 [i_14] [i_12] [i_9] [i_10] [6LL])))))));
                            }
                        }
                    } 
                } 
                arr_49 [i_9] [i_10] [i_10] = (+(((/* implicit */int) (unsigned short)3584)));
                arr_50 [i_10] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(var_13)))), (((((/* implicit */_Bool) ((int) var_2))) ? (arr_35 [15U] [(unsigned char)4] [(short)19]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_40 [i_9] [i_10]))))))));
                arr_51 [i_9] [i_10] = (~((~(((/* implicit */int) ((_Bool) arr_35 [4] [i_10] [(short)11]))))));
                /* LoopNest 3 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        for (short i_17 = 1; i_17 < 18; i_17 += 1) 
                        {
                            {
                                arr_59 [i_9] [i_9] [i_15] [i_16] [i_10] = ((/* implicit */unsigned int) var_16);
                                arr_60 [(signed char)7] [i_10] [i_15] [i_10] [(unsigned short)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_58 [i_9] [i_9] [i_9] [i_9])) < (var_6))))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_34 [i_17 - 1])) >> (((var_5) - (760256922U))))) >= (((((/* implicit */int) var_9)) >> (((5642483427634380236LL) - (5642483427634380223LL)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_10] [i_10] [i_10] [i_17])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_57 [i_9] [i_10] [i_9] [i_16] [i_17 + 1]))))) || (((/* implicit */_Bool) min((arr_53 [(unsigned short)19] [i_15 + 1]), (var_13)))))))));
                                arr_61 [i_10] [i_10] = ((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_9] [i_10] [i_16] [i_17]))) : (arr_56 [i_9] [i_10] [i_10] [i_15]))), (((/* implicit */long long int) ((_Bool) var_5))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 165210434U)), (5597116879637697319LL)))) ? (((/* implicit */int) arr_57 [i_15 + 1] [i_15 + 1] [i_17 + 1] [i_17 + 1] [(unsigned short)15])) : (((/* implicit */int) ((short) arr_47 [(unsigned short)9] [i_16] [i_15] [i_16] [i_15])))))));
                                arr_62 [i_16] [i_16] [i_16] [i_10] [(short)16] [i_16] [i_16] = ((/* implicit */long long int) ((((int) arr_40 [i_15 + 1] [i_17 - 1])) <= ((~(((/* implicit */int) arr_40 [i_15 + 1] [i_17 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
