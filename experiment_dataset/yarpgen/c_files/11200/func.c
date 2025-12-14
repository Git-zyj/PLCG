/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11200
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
    var_10 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [(unsigned char)16] [(unsigned char)16])), ((unsigned char)39)))) / (((/* implicit */int) var_1))))) != (arr_2 [i_0] [i_0] [i_1])));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)116))))))))) ? (295438329) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 584928438U)), ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2])), ((((+(arr_2 [i_0] [22LL] [i_0]))) - (((/* implicit */unsigned long long int) 3541511982U))))));
                            var_14 = ((long long int) max((((/* implicit */int) arr_0 [i_0] [i_2])), (arr_4 [i_3] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((unsigned char) var_0));
    var_16 = var_6;
}
