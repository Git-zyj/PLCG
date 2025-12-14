/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146950
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned char)255))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((-608401984842138162LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) arr_2 [i_0 - 2])))))));
                arr_6 [2LL] [2LL] |= ((/* implicit */long long int) var_15);
            }
        } 
    } 
}
