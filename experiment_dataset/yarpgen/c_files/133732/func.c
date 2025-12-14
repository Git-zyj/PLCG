/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133732
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
    var_11 = var_4;
    var_12 &= var_2;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 |= (short)19041;
        var_14 = var_2;
        var_15 = ((/* implicit */short) ((((/* implicit */int) (short)26508)) > (((/* implicit */int) (short)-4336))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 -= var_7;
                    arr_6 [i_1] [(short)10] = ((/* implicit */short) (+(((/* implicit */int) (short)-20042))));
                }
            } 
        } 
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1682)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)60))))) || (((/* implicit */_Bool) max(((short)12528), (var_6))))));
    }
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_2), (var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)16128)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)30684)) >= (((/* implicit */int) (short)60))))) <= (((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32767)))))))));
}
