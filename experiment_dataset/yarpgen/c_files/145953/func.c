/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145953
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [i_1 + 1])), (arr_2 [i_0])))) ? (((arr_3 [i_1] [i_1 + 1]) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) var_6)))) : (((int) var_14)))) : (((/* implicit */int) min((arr_3 [i_1 + 1] [i_1 + 1]), (arr_3 [i_1 + 1] [i_1 + 1]))))));
                var_18 *= ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_9);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((-9165752776073272908LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8581)))))) / (((((/* implicit */int) var_14)) << (((var_9) - (1399133120)))))))) ? (var_8) : ((~(((/* implicit */int) var_14))))));
}
