/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178728
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
    var_17 = (unsigned short)11393;
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [4ULL])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)140)) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))))))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) (unsigned short)8191))))))));
                    arr_7 [i_2] [i_1 + 2] = ((/* implicit */unsigned char) (~(((unsigned int) ((((/* implicit */_Bool) var_4)) ? (5ULL) : (arr_0 [i_2]))))));
                }
            } 
        } 
    } 
}
