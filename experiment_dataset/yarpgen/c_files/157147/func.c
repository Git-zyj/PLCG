/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157147
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_10)))))))) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_2)) ? (848753989) : (((/* implicit */int) var_3)))))) : ((~(((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 -= ((/* implicit */int) ((unsigned short) (~(168248004))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((int) (unsigned char)128))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned short)49095)));
                    var_15 = ((((/* implicit */_Bool) (+(-786376963)))) ? (((((/* implicit */_Bool) var_1)) ? (166735196) : (1596134108))) : (((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) (unsigned short)4690)) : (arr_10 [i_0]))));
                }
            } 
        } 
    }
}
