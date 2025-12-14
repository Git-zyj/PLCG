/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18652
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_5);
                var_15 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) != (((unsigned long long int) var_6)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (var_0)))) : (((arr_1 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                arr_8 [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_1])))) && (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])))) || (((/* implicit */_Bool) arr_0 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                arr_14 [i_2 + 2] [i_2] = ((((/* implicit */int) arr_11 [i_2 + 1])) > ((-(((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 1])))));
                /* LoopSeq 2 */
                for (signed char i_4 = 2; i_4 < 24; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_24 [i_4 + 1] [i_2] = ((/* implicit */unsigned int) arr_16 [i_6] [i_5] [i_4] [i_2 - 1]);
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) max(((short)-32746), (((/* implicit */short) (unsigned char)182))))), (arr_23 [i_2] [i_3] [i_4] [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 22; i_8 += 3) 
                        {
                            {
                                arr_29 [i_2] [i_7] [i_4 - 1] [i_3] [i_2] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_10))))));
                                arr_30 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_11 [i_8 - 1])))));
                                arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2]))))) > (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_2])) & (((/* implicit */int) var_10)))))))) > (((/* implicit */int) (signed char)-1))));
                            }
                        } 
                    } 
                }
                for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_35 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((long long int) (unsigned char)56)))) + (((/* implicit */int) ((short) max((arr_13 [i_2]), (((/* implicit */int) arr_11 [i_3]))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 23; i_11 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-103)) ? (274123414U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_11 + 1] [i_3] [i_2] [i_10])))));
                                var_18 = ((/* implicit */short) arr_26 [i_2 - 1] [i_10] [i_11]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
