/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157459
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                arr_8 [i_0] = arr_2 [i_0];
                arr_9 [i_0] [i_1 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) 4284644694U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) : (1195438595104539856ULL)))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1 + 1] [i_2] [i_3 + 2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 + 1]))) : (((unsigned long long int) ((unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-10486))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    var_11 = ((/* implicit */short) arr_10 [i_0]);
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_5]))));
                }
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((arr_0 [i_1 - 1]) ? (((((/* implicit */unsigned int) arr_18 [i_1 - 1] [i_1 - 1])) / (max((((/* implicit */unsigned int) var_0)), (arr_17 [i_0] [6LL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)4])))))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            {
                arr_24 [i_6] [i_6] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)190))));
                arr_25 [(_Bool)1] [i_6] [(unsigned char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1149203096)) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_7])) : (((/* implicit */int) arr_22 [i_6] [i_7] [i_7]))))) ? (min((867754396), (((/* implicit */int) (unsigned char)253)))) : (2147483647)));
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_14 &= ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)8)), (((((/* implicit */_Bool) arr_14 [i_8] [i_9 - 1] [4ULL] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_14 [i_8] [i_9 - 1] [(short)0] [i_9 + 1] [(short)0]))))));
                                arr_33 [i_7] [i_7] [i_8] [i_8] [(unsigned char)5] [i_9] = (short)-21074;
                            }
                        } 
                    } 
                } 
                arr_34 [i_7] [i_6] = ((/* implicit */unsigned char) ((((11287572810217060189ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (min((arr_31 [i_7] [(unsigned char)2] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
