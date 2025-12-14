/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154937
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
    var_14 -= ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((short) var_7));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))) : ((~(2644839377U)))));
            arr_6 [(unsigned short)24] [(unsigned short)24] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1650127919U)) ? (((/* implicit */int) max(((unsigned short)27388), (((/* implicit */unsigned short) var_10))))) : ((~(((/* implicit */int) var_9)))))) >= (((/* implicit */int) ((_Bool) arr_0 [i_1])))));
        }
        for (int i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) 812530751);
            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2644839375U)))))));
            var_17 = (-(((min((var_3), (((/* implicit */unsigned int) var_4)))) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))));
            var_18 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-64)) & (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_10)) ? (var_3) : (var_12)))))));
        }
        arr_10 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_19 = ((unsigned short) arr_1 [i_3]);
        var_20 = (~(((/* implicit */int) (unsigned short)27384)));
    }
    var_21 = (~(((int) (_Bool)1)));
}
