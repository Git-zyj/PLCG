/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163414
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
    var_15 *= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0]) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / ((-(arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1048560U)))))));
        var_17 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            for (unsigned char i_4 = 3; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_3] [i_3] [(short)16] = ((/* implicit */unsigned long long int) arr_8 [(short)8] [i_3]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4 - 3] [i_4 - 3] [i_6 + 1] [13] |= ((/* implicit */unsigned long long int) arr_20 [i_4 - 2] [i_3] [i_4 - 2] [(unsigned char)11] [i_6] [i_5 + 3]);
                                var_18 *= ((/* implicit */short) (~(((/* implicit */int) min((arr_8 [i_3 + 1] [i_5 + 3]), (arr_8 [i_3 + 1] [i_5 - 1]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) min((var_19), (((((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (-1536709158)))) ? (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (unsigned char)253)) : (-2069570420))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) * (((/* implicit */int) arr_5 [3ULL] [i_2]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_13))));
}
