/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154001
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_11 [9U] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(var_8)));
                            arr_12 [i_0] [(unsigned short)4] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) min((((min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1])), (arr_6 [i_0] [i_1]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1])) ? (var_8) : (arr_2 [i_3])))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 6632588746222957289ULL)) ? (1247828037) : (-1247828038))) | (1247828045))))));
                            var_12 = ((/* implicit */unsigned char) ((long long int) -1247828054));
                            var_13 ^= ((/* implicit */signed char) arr_8 [i_0] [i_0 + 1] [i_1] [(short)11] [i_1] [i_1]);
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_3 [i_0] [i_0 - 1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
}
