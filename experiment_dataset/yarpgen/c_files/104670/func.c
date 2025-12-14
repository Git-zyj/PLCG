/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104670
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (~(3454302302U)));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [(_Bool)1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    var_19 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))) % (var_7)));
                        arr_11 [5U] [i_0] [(unsigned char)8] [i_1] [i_2] [(unsigned char)2] = ((/* implicit */signed char) var_0);
                    }
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [(unsigned short)7] [i_1] [7U])) ^ (((/* implicit */int) var_5)))))));
                    var_22 = ((/* implicit */int) var_9);
                }
            } 
        } 
        var_23 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (unsigned char)247)))));
    }
    var_24 = ((/* implicit */unsigned short) var_4);
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min(((-(var_7))), (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) var_16)), ((~(((/* implicit */int) (unsigned short)65517)))))) : (((/* implicit */int) var_11))));
}
