/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12989
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 6; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1 + 4] [i_0]))))) * (((min((((/* implicit */long long int) arr_4 [i_0] [i_1 - 2])), (var_3))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_8))))))))));
                arr_5 [i_0] [i_0] [1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78)))))));
            }
        } 
    } 
    var_16 = ((var_4) - (var_2));
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74)))))) <= (((((/* implicit */long long int) 2)) / (((long long int) arr_8 [i_2 - 1]))))));
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_14 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_3]) : (((/* implicit */int) arr_10 [i_3])))))));
                }
            } 
        } 
    } 
}
