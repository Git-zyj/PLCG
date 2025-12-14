/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151631
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) max(((unsigned short)55938), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_10 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_4);
                            arr_11 [i_2] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((arr_8 [i_0] [i_0] [i_1] [i_1] [i_3]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))))));
                            arr_12 [i_0] [6U] [i_1] [1LL] [(short)12] [(signed char)2] = ((/* implicit */unsigned char) (+(var_9)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)56724);
                    arr_17 [i_4] [i_1] [i_1] [(unsigned short)16] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((unsigned int) (_Bool)1)))))));
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-6155802988816077978LL)))) ? (((arr_14 [i_1] [i_1] [i_4]) - (arr_15 [i_4] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((arr_7 [i_0] [17] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)15578)) : (((/* implicit */int) (_Bool)0))))))))));
                    arr_19 [i_1] = ((/* implicit */unsigned char) (-(var_7)));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_24 [(unsigned char)20] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_3 [i_5]))));
                    arr_25 [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [3LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) -2147483647)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))))));
                    arr_26 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_5] [i_1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : ((-9223372036854775807LL - 1LL))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (signed char i_8 = 4; i_8 < 17; i_8 += 4) 
                        {
                            {
                                arr_36 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (arr_5 [(signed char)7] [i_1] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))));
                                arr_37 [i_6] [i_6] [i_6] [i_6] = (~(-2147483646));
                                arr_38 [i_7] [i_8] [i_8] [i_7] [i_8] = ((/* implicit */unsigned int) ((unsigned short) arr_35 [i_0] [i_1] [i_6] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 4]));
                            }
                        } 
                    } 
                    arr_39 [i_1] = ((/* implicit */int) 15864041052621413859ULL);
                    arr_40 [i_6] [6] [2ULL] [2ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [9] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (-1737328986)));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                arr_46 [i_0] [i_1] [i_6] [i_9] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)0))))));
                                arr_47 [i_1] [(_Bool)1] [i_0] [16ULL] [(unsigned char)12] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_9] [i_1] [(unsigned char)7])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_5 [i_1] [i_6] [i_10])));
                                arr_48 [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) arr_20 [i_0] [i_1]);
                                arr_49 [(signed char)11] [i_1] [(signed char)11] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_3))) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned char) (_Bool)1))) - (1)))));
                                arr_50 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)191))));
                            }
                        } 
                    } 
                }
                arr_51 [i_1] [10] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0]))) == (((((/* implicit */_Bool) (unsigned char)129)) ? (var_3) : (var_8)))))));
            }
        } 
    } 
}
