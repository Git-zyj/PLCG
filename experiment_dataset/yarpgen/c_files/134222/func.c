/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134222
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
    var_16 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)0)), (1289197308U)))) ? (((/* implicit */unsigned int) var_15)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (1545511289)))) ? (max((((/* implicit */unsigned int) var_10)), (var_8))) : (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(short)20] = 3005769971U;
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_17 *= ((/* implicit */short) max((3005770014U), ((~(((((/* implicit */_Bool) (unsigned short)34670)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30866))) : (3005769988U)))))));
                        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)34670))) ? (((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (min((1289197308U), (1289197308U))) : (((/* implicit */unsigned int) 1545511289)))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)13501)) : (var_5)))) * (min((var_9), (((/* implicit */unsigned int) (unsigned short)0))))))));
                        var_19 = ((/* implicit */short) var_0);
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1306363791))))), (4125521768U));
    }
    var_20 = (+(-1545511266));
    var_21 = var_2;
}
