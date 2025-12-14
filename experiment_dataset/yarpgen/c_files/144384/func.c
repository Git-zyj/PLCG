/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144384
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
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((_Bool) -1262000598))));
            var_21 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (1262000590) : (((/* implicit */int) var_3)))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_11))), (max((var_6), (((/* implicit */unsigned int) (short)28171))))))) ? (61678128U) : (min((((/* implicit */unsigned int) var_16)), (var_6))))))));
                        var_23 ^= ((/* implicit */int) var_16);
                        arr_9 [i_0] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)254)), ((short)-15509)))), (((unsigned int) -687131521))));
                        var_24 = ((((/* implicit */_Bool) ((min((var_16), (var_16))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_16)))))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_19)))))));
                        arr_10 [i_0] [(unsigned short)11] [i_1] [i_0] = -301850487;
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) ((_Bool) (unsigned short)35936));
        }
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 48777508U)) ? (((/* implicit */int) (_Bool)1)) : (-1262000598)))))));
    }
    var_27 = ((/* implicit */long long int) (~((-(-687131521)))));
    var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (unsigned char)179))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3797789887U)))))));
}
