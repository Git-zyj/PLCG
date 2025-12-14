/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154342
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(arr_2 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [21LL])))))))) ? (max((arr_3 [i_1 - 4] [i_1 + 2]), (arr_3 [i_1 - 3] [i_1 - 2]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) & (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_2 [(unsigned char)20]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))));
                var_11 |= ((/* implicit */short) min((((/* implicit */long long int) var_8)), (((long long int) max((var_6), (((/* implicit */int) (short)-32741)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((long long int) var_10)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_2))))))))));
}
