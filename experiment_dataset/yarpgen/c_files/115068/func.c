/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115068
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
    var_17 ^= ((/* implicit */unsigned char) ((int) 8588535188597987008LL));
    var_18 = var_10;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max(((+(min((2016987683), (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2])))))), (((/* implicit */int) max((arr_6 [i_2 + 1] [i_2] [i_0] [(_Bool)1]), (arr_6 [i_2 - 1] [i_2] [i_0] [(short)6]))))));
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_0] [i_2]))))), (((((/* implicit */_Bool) 2016987670)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                }
            } 
        } 
    } 
}
