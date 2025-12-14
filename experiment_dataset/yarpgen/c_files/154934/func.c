/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154934
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((unsigned int) ((short) 2039728991U))))));
                var_12 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)59))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_8))) + (((/* implicit */int) arr_5 [i_2]))))) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_5 [i_2])) >> (((((/* implicit */int) var_4)) - (27973))))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (((-821360065) - (((/* implicit */int) var_0))))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) arr_2 [i_2] [i_2]);
    }
    var_14 = ((/* implicit */unsigned char) max((max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9)))), (((/* implicit */int) var_3))));
}
