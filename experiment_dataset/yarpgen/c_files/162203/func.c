/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162203
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)56)) != (((/* implicit */int) (signed char)-72))));
    var_20 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_17))));
                var_22 -= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-53)) + (2147483647))) >> ((((((_Bool)1) ? (arr_3 [i_0 - 4]) : (((/* implicit */int) arr_1 [i_0 + 2])))) - (1398786457)))));
                arr_4 [(_Bool)1] [i_0 - 4] = ((/* implicit */unsigned char) var_1);
                arr_5 [i_0] [i_1] [(signed char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_2 [i_1 + 1] [i_1])))) <= (-736446475)));
                var_23 ^= ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
}
