/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189465
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
    var_17 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) -2012111278)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6)))))) : (839668692646674834LL)))));
    var_18 |= ((/* implicit */_Bool) (+((+(((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) ((_Bool) ((short) (_Bool)0)));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(min((((/* implicit */int) (_Bool)1)), (1928306494)))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_4 [i_1]);
        var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)17374)))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_5 - 1] [14LL] [i_4] [i_2]))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((arr_13 [i_5 - 1] [i_3 - 2] [i_3 + 2] [i_3 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 2]))))))));
                    }
                } 
            } 
            arr_16 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */int) arr_9 [i_2] [i_2])) / (((/* implicit */int) arr_11 [i_2] [i_3]))))));
        }
        var_24 &= (~(((/* implicit */int) (unsigned short)47413)));
    }
}
