/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14608
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)15] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? ((+(((/* implicit */int) (unsigned short)30596)))) : (((/* implicit */int) ((_Bool) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2]))) : (((arr_1 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))))))) : (arr_1 [i_0]));
                arr_6 [i_0] [i_0 - 2] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((1592304095) >> (((((/* implicit */int) (short)-1)) + (6))))) > (((/* implicit */int) arr_0 [i_1])))))));
                arr_7 [i_0] [i_1 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 1592304095)) : (((5169486070583641524LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_10);
    var_13 = ((/* implicit */unsigned char) ((unsigned short) var_10));
    var_14 = ((/* implicit */unsigned long long int) var_0);
}
