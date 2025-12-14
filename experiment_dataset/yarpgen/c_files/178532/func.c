/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178532
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
    var_16 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) >> (((((/* implicit */int) (unsigned char)207)) - (168)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((unsigned long long int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)212)))))));
                arr_4 [i_0] [(unsigned char)0] [4] = (-(((/* implicit */int) var_8)));
                arr_5 [i_0] [6] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 1] [(short)10])), (2644681027U))) >> (((((/* implicit */int) (unsigned char)39)) - (10)))));
            }
        } 
    } 
}
