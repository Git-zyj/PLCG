/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131481
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
    var_16 = (~(var_4));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)37467))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((var_10) - (1657083712)))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [15U])) ? (((/* implicit */int) var_3)) : (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_4 [i_1]))))));
                var_19 = ((/* implicit */unsigned long long int) ((unsigned short) 1809361595952160017ULL));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                            {
                                arr_14 [4U] [i_1] [i_2] [i_3] [i_4] [i_1] [i_3] = ((/* implicit */long long int) var_8);
                                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_9)))))) | (((((/* implicit */unsigned int) (+(var_15)))) / ((~(1701732504U)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_18 [i_0 - 1] [(signed char)20] [i_2] [i_2] [i_5] &= ((/* implicit */signed char) ((unsigned short) ((short) var_1)));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1])) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_3 [i_0] [11U]))));
                                var_22 = ((/* implicit */signed char) ((int) arr_13 [i_0]));
                            }
                            arr_19 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28622))) != (16637382477757391594ULL))))) : (((long long int) arr_16 [i_2]))))) ? (arr_13 [i_0 + 1]) : (((/* implicit */unsigned int) var_15))));
                            arr_20 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) ((arr_2 [i_0 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) / (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 16637382477757391581ULL)) ? (1809361595952160018ULL) : (((/* implicit */unsigned long long int) -709870715))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) var_7);
                                var_24 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_10))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 18; i_7 += 4) 
                {
                    arr_27 [(short)5] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
                    arr_28 [i_0] [i_1] [i_7 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_1] [i_7])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (arr_26 [i_0] [i_0 + 1] [i_0 - 1] [i_7 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_7]))))));
                    var_27 = ((/* implicit */long long int) var_9);
                }
                /* vectorizable */
                for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    var_28 = ((/* implicit */short) ((unsigned short) var_15));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) var_7);
                                arr_36 [i_0 + 1] [i_1] [i_8 + 2] [i_9] [i_10] [i_10] [i_1] &= ((var_14) >> (((((/* implicit */int) ((unsigned short) arr_24 [i_10] [i_1] [i_0]))) - (37686))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
}
