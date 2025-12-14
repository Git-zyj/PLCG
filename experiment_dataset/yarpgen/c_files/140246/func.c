/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140246
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
    var_11 = min((var_8), (var_8));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_5 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) var_5))))), ((((+(((/* implicit */int) (unsigned short)33403)))) - (((((/* implicit */_Bool) arr_0 [2U])) ? (((/* implicit */int) (unsigned short)47438)) : (((/* implicit */int) var_7))))))));
                    var_13 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)55574))));
}
