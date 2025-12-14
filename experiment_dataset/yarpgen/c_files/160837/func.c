/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160837
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
    var_14 |= ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (short)0)) % (((((/* implicit */int) var_9)) + (((/* implicit */int) var_13)))))) : (((/* implicit */int) var_6)));
    var_15 = ((((/* implicit */int) var_9)) < (((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_7))))) * (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)16032)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = min(((unsigned short)16024), ((unsigned short)255));
                    arr_7 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) max((arr_5 [i_1] [i_1] [i_1] [i_0]), (((/* implicit */int) var_13))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((1853367078) ^ (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (var_11)))) != (((/* implicit */int) var_10))))) != (((((((/* implicit */int) (unsigned short)40150)) ^ (((/* implicit */int) (short)2)))) >> (((/* implicit */int) min((var_3), ((_Bool)0))))))));
    var_18 = ((/* implicit */int) (unsigned char)166);
}
