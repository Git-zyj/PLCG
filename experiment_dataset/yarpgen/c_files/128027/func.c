/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128027
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] [15ULL] [15ULL] [i_1] [15ULL] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_12)))));
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)19)))))));
                            arr_13 [i_0] [(signed char)16] [i_3] [i_3] [i_1] [i_1] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)29)), (var_14)))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) arr_10 [i_0]))))));
                            arr_14 [i_0] [i_1] [i_1] [(_Bool)1] [i_2] [(_Bool)1] |= ((/* implicit */_Bool) arr_3 [i_2] [i_1]);
                            var_19 += ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [(_Bool)1]);
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)19))));
                var_20 = ((/* implicit */int) (-(max((var_9), (((/* implicit */long long int) arr_9 [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_11);
    var_22 = ((/* implicit */unsigned long long int) var_11);
}
