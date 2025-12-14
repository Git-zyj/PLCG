/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140744
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-76))) && ((!(((/* implicit */_Bool) arr_0 [i_0 + 4])))))))));
                var_19 = ((/* implicit */unsigned short) (-(((min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0] [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76)))))));
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_0 + 1] [i_0 - 1])) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0 + 4] [(unsigned char)14])))) + (((unsigned long long int) arr_5 [i_0 + 4] [i_0 + 1] [i_0 + 1]))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((arr_5 [i_0] [i_1] [(unsigned char)6]) - (10429074240209024555ULL)))));
            }
        } 
    } 
    var_22 &= ((/* implicit */int) (+(var_9)));
}
