/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111864
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)6)) || (var_14))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) min(((unsigned char)247), ((unsigned char)2))))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (((~(1280052796U))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) (unsigned char)246)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_20 = ((/* implicit */short) min((var_20), (var_5)));
                arr_7 [i_0] [i_1] [2LL] &= ((/* implicit */unsigned int) ((int) ((int) (unsigned char)248)));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max(((unsigned short)29667), (((/* implicit */unsigned short) (unsigned char)240)))))));
            }
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (unsigned short)28178);
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)239)))))));
        }
    }
    for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
    {
        arr_15 [i_4] = max(((+(((/* implicit */int) (unsigned char)8)))), (((/* implicit */int) var_8)));
        var_23 = ((/* implicit */unsigned short) 3014914500U);
    }
    var_24 = (unsigned short)31044;
}
