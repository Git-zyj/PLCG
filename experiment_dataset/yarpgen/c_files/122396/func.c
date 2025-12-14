/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122396
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) arr_0 [(unsigned char)13] [i_1]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_1 [i_1 - 2] [i_1])))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_16)))) ? ((~(18394002303980937185ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1184041150U)), (-69944763334504868LL))))))) ? (((/* implicit */int) ((_Bool) 1184041166U))) : (arr_4 [i_1 - 2])));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(var_9))))));
}
