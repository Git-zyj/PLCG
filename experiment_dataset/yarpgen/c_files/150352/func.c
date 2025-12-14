/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150352
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
    var_14 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [6LL] = ((/* implicit */short) (+((-(((/* implicit */int) var_4))))));
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_2] [i_0 - 1] [i_0 - 1]) : (arr_3 [i_1] [i_0 - 3] [i_0 - 3])))) * (((long long int) arr_1 [i_2] [i_0 - 2]))));
                    arr_11 [i_2] [4U] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [(_Bool)1] [i_0 - 4])))) >> (0U)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) 1261835200)) : (4503599626846208ULL)))) ? (var_12) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)2))))))))));
}
