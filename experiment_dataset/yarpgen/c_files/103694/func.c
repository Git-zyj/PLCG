/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103694
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
    var_16 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((int) arr_2 [i_0]))));
            var_18 = ((/* implicit */unsigned long long int) var_4);
        }
        for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) var_7);
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 2] [i_0])))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) (unsigned short)49958)) : (arr_4 [i_2 + 3] [i_2 + 3])));
                arr_10 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((_Bool) arr_0 [i_2 + 3] [i_3]));
                var_22 ^= ((/* implicit */int) ((arr_6 [i_2 + 1] [i_2 - 1]) + (((/* implicit */unsigned int) arr_3 [i_0]))));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_13 [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_8 [i_0]))))));
            arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) -92334693)) ? (var_1) : (((/* implicit */unsigned long long int) -1119251532)))) : (var_9)));
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((arr_22 [i_0] [i_5] [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((var_14) ? (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */unsigned long long int) 6473342167550877742LL)) : (var_9))) : ((+(arr_17 [i_0] [i_6] [i_7]))))))));
                        arr_23 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */long long int) ((arr_4 [i_0] [i_0]) & (arr_4 [i_0] [i_6])));
                    }
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1119251506)))) ? (((((/* implicit */int) arr_15 [i_6] [(unsigned short)11])) * (((/* implicit */int) (short)-32529)))) : (((int) (unsigned short)62494))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1119251506)) ? ((-(var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_0] [i_5] [i_6] [(unsigned char)7])))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_6)))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        var_27 ^= (~(((((/* implicit */_Bool) var_13)) ? (arr_4 [i_6] [i_0]) : (((/* implicit */int) (signed char)85)))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((arr_6 [i_9 - 1] [i_9 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9 - 1]))))))));
                    }
                }
            } 
        } 
    }
}
