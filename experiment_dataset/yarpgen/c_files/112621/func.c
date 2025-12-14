/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112621
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
    var_13 = ((/* implicit */_Bool) 5252323757601496135ULL);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((((13194420316108055497ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (13194420316108055482ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_1);
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 3] [i_2 - 2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_3 - 1] [i_2 - 2]);
                                arr_15 [8ULL] [i_3 + 2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((int) arr_5 [i_4] [i_2] [i_1] [i_0]));
                                arr_16 [i_4] [i_4] [i_3] [i_2] [i_1] [0ULL] [0ULL] = (!(((/* implicit */_Bool) arr_10 [i_2 - 3] [i_3 - 1] [i_3 + 1] [(short)1] [i_3 + 1])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) arr_9 [i_0] [i_2] [i_0] [i_0] [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) * (var_2)));
                                arr_21 [(unsigned short)5] [i_5] [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) (+(5252323757601496097ULL)));
                                arr_22 [i_0] [i_1] [(_Bool)1] [i_5] [i_6] = ((/* implicit */unsigned short) ((_Bool) arr_6 [i_0] [i_1] [i_2 - 1]));
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_7 - 1] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) (-(((arr_18 [i_7 - 1] [i_7 - 1] [(unsigned char)2] [i_7 - 1] [i_7 - 1] [i_7 - 1]) >> (((arr_18 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]) - (2813061254U)))))));
                    arr_26 [i_0] = ((/* implicit */unsigned int) ((5252323757601496135ULL) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 7320785873587522815LL)) ? (arr_1 [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    var_18 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                }
                arr_28 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */long long int) 1455992080U)) : (((((/* implicit */_Bool) 713275460U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (-7320785873587522815LL)))));
            }
        } 
    } 
}
