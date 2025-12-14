/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157816
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
    var_18 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (((+(((/* implicit */int) var_15)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (unsigned char)175))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)178)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1] [4LL])), (((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26042))))) : (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
}
