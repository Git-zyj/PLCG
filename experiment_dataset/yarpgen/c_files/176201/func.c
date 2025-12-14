/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176201
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_11))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_2] [i_2] [(unsigned short)1]) : (((/* implicit */int) arr_3 [i_1] [(unsigned short)8] [i_4 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -7827107648360716691LL)))) : (((9223372036854775800LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-25235))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2706505289391258567LL)) ? (917068974) : (((/* implicit */int) (short)-9575)))))));
                                var_18 -= ((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_2 - 1] [i_3]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [(_Bool)1]);
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */_Bool) 4U);
}
