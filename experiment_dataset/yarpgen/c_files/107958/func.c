/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107958
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((int) var_2)))))) ? ((-(max((14241709398650647402ULL), (((/* implicit */unsigned long long int) var_7)))))) : (var_8)));
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (var_5)));
    var_12 = ((/* implicit */int) (unsigned short)65529);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 134217216ULL)) || (((/* implicit */_Bool) arr_2 [i_1 + 1] [0U])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (unsigned char)15)))) : (((((/* implicit */_Bool) (short)-12201)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)13))))))) : (((((/* implicit */_Bool) arr_5 [i_0] [(signed char)15] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)10] [14LL]))) : (2094565917U)))));
                    arr_9 [i_0] [i_1] [6LL] [i_2] &= (-(((((/* implicit */int) var_4)) << (((2093056) - (2093040))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63263))) % (var_1))) ^ (((((/* implicit */_Bool) arr_3 [i_2])) ? (1008806316530991104ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_2] [(unsigned char)0])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_2);
}
