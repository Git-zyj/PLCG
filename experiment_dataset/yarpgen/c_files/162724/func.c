/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162724
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)93)), (1569648749U)))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */unsigned long long int) (((-(arr_9 [i_0 - 1]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) || (((/* implicit */_Bool) 1733304919)))))));
                            arr_12 [i_0 - 1] [i_0 + 3] [19LL] [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1])) * (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1])))) * ((+(((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    arr_15 [12] |= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? ((~(arr_7 [i_4] [(unsigned short)24] [i_0]))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_1]))));
                    arr_16 [i_4] [i_1] [i_4] [i_0] = ((/* implicit */int) arr_3 [i_4] [i_0 + 2]);
                }
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_0 - 1] [i_1]) : (arr_9 [i_5 + 2])));
                    var_19 = (~(2725318540U));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) arr_19 [i_0 + 2] [i_5 + 1] [i_6 - 1] [i_6 + 4] [i_6 + 3] [i_6])))))));
                        var_21 = ((/* implicit */unsigned long long int) ((arr_0 [i_6 - 1] [i_0 + 2]) ^ (arr_0 [i_6 - 1] [i_0 + 2])));
                    }
                    var_22 = (+(((/* implicit */int) arr_6 [i_5 + 2])));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_2);
    var_24 |= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_7))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-29547))) % (3221225472U))));
    var_25 = ((/* implicit */unsigned short) 1073741823U);
    var_26 = ((/* implicit */short) (unsigned char)168);
}
