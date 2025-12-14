/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107072
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) max((1073741823U), (((/* implicit */unsigned int) (unsigned char)116))));
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_14 [(_Bool)1] = ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)62)), (arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 2] [i_2 - 1] [i_3 - 2]))) : (max((var_6), (((/* implicit */unsigned long long int) var_4))))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_2] [(unsigned short)19] = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_0])), (var_11)))));
                            /* LoopSeq 1 */
                            for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                            {
                                var_13 -= ((/* implicit */long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned char)153)))));
                                arr_19 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) ((unsigned int) var_1));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_4);
}
