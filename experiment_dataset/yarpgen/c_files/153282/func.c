/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153282
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
    var_19 = ((/* implicit */int) max((var_19), ((~((-(((/* implicit */int) ((unsigned char) var_16)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = var_11;
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((1330005720U), (91043687U)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_1] = ((unsigned long long int) (~(((/* implicit */int) var_3))));
                        var_21 = (~(arr_1 [i_3 - 1]));
                        arr_11 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2232294129U))) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
                        arr_13 [i_1] [i_3] = ((/* implicit */unsigned int) ((_Bool) 1330005720U));
                    }
                }
            } 
        } 
    } 
}
