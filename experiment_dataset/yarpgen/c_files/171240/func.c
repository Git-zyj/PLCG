/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171240
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) 21ULL);
                arr_4 [i_0] [i_0] [11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((int) arr_3 [i_0]))) : (((18446744073709551595ULL) & (arr_2 [i_0] [i_0] [i_1])))))) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) arr_3 [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((18446744073709551569ULL), (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */long long int) (short)6522)))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_5))) : (16ULL)));
                            arr_10 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_2] [i_2] [i_0]);
                            arr_11 [i_0] [i_0] = ((/* implicit */long long int) var_12);
                            arr_12 [i_0 + 1] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned long long int) arr_1 [i_3 + 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_17);
}
