/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124102
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_2))) >> (((/* implicit */int) ((signed char) 1ULL)))));
    var_18 -= ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) (unsigned short)49152);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_20 = var_16;
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_11 [i_0] [8LL] [i_0] [i_0]))) - (((/* implicit */int) var_8))))) ? ((-(((((/* implicit */int) (unsigned char)8)) - (((/* implicit */int) arr_8 [i_0] [i_0] [i_2 + 1])))))) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (!(arr_11 [i_0] [i_1 + 1] [i_0] [i_3]))))))));
                        arr_14 [i_0] [i_2] [i_1 + 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned char)2])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)245)), ((-(((/* implicit */int) (_Bool)0))))))) : (var_1)));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (var_8)))))) ? (((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) var_14)) - (1))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((arr_0 [i_0]) || (var_14)))), (var_15)))))));
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? ((-(var_9))) : (((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
    }
}
