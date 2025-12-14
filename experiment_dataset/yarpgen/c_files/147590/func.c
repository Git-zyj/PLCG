/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147590
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_9)))), (((1259758015U) < (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) != (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */unsigned int) ((short) 2U));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                arr_8 [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)12288)), (2U)))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 351290935U)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_5 [i_1 + 1] [i_0] [i_1 - 1])))));
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_14)) : (var_1))) * (13969807342964060010ULL))));
                arr_11 [i_1] [i_1] [i_1] |= max((((/* implicit */int) ((unsigned char) arr_3 [i_1 - 1] [i_1]))), (((int) arr_6 [i_1 - 4] [i_1] [i_1 - 1])));
            }
        } 
    } 
}
