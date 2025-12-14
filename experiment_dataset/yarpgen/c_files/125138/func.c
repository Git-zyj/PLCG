/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125138
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((long long int) max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0]))));
                arr_7 [i_0] = ((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0]);
                var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (_Bool)1))));
}
