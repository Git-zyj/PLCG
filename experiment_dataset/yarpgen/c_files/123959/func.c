/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123959
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
    var_20 = ((/* implicit */short) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1 - 1] [i_2] [20LL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) <= (-1LL)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (arr_4 [i_0] [i_2])));
                            var_21 = ((/* implicit */short) ((_Bool) ((unsigned short) (unsigned short)2047)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_0])))))) >= (((var_0) ? (var_14) : (((/* implicit */long long int) var_3)))))) ? ((-(arr_1 [i_1 - 1] [i_0 + 1]))) : (((/* implicit */long long int) ((int) arr_6 [i_0] [i_0])))));
            }
        } 
    } 
}
