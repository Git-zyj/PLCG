/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105815
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
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)35609)) ? (((int) var_5)) : (((/* implicit */int) var_9)))) | ((+(((/* implicit */int) var_7))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */_Bool) min((((int) ((unsigned char) arr_1 [i_1] [i_2 + 3]))), ((+(max((arr_5 [i_0] [i_0] [i_2]), (((/* implicit */int) arr_7 [i_1]))))))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 4])) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 4]))))))))));
                    var_17 = ((/* implicit */short) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [2ULL] [2ULL] [i_0] [2ULL] = ((/* implicit */int) (((!(var_7))) && (((/* implicit */_Bool) arr_8 [7] [i_1] [i_1] [(unsigned char)7]))));
                                var_18 = ((/* implicit */short) arr_7 [i_2]);
                                var_19 += ((/* implicit */int) (+(((arr_1 [i_0 - 1] [i_0 - 1]) / (arr_1 [i_0 + 3] [i_0 - 1])))));
                            }
                        } 
                    } 
                    var_20 = arr_12 [i_0] [i_0] [i_0 - 1] [i_2 + 2] [17U];
                }
            } 
        } 
        arr_16 [3ULL] [(unsigned short)9] = ((/* implicit */unsigned int) (short)(-32767 - 1));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */signed char) (~(arr_5 [i_5] [i_5] [i_5 + 1])));
        var_21 = ((/* implicit */unsigned int) (~(((var_12) | (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [(_Bool)1] [(unsigned char)3]))))));
    }
}
