/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102896
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
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) var_16))) : ((-(((/* implicit */int) var_12))))))));
    var_19 = ((/* implicit */short) (+(var_0)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [5] [i_1 - 2] [i_1]))))) | ((~(((/* implicit */int) arr_7 [i_1] [i_0] [i_1 - 1] [i_1]))))));
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((-8792515871582410592LL) <= (((/* implicit */long long int) arr_4 [i_0] [14]))))) - (((/* implicit */int) var_7)))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) 1144056505)))))) < ((~(var_3))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((max((((((/* implicit */long long int) ((/* implicit */int) var_11))) % (var_14))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) -1144056506))));
}
