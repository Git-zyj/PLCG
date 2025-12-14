/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156738
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (((~(var_2))) < (min(((-(6825192668171277279LL))), (((/* implicit */long long int) (short)-4)))))))));
                    arr_8 [i_0] [i_1 + 1] [i_2] [i_2] &= ((/* implicit */int) (-((+(((var_14) + (((/* implicit */unsigned long long int) var_4))))))));
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_4 [i_0])))) + (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)-4))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [8] [i_0] [i_3] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) max(((short)19), ((short)-4))))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((arr_10 [i_0] [i_1] [i_1] [i_0] [i_3]) | (((/* implicit */long long int) ((-232043119) ^ (var_4)))))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)96)))) ? (max((var_12), (((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_1 + 2])))) : (232043119)))))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) - (((((/* implicit */long long int) var_0)) - (var_9)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) - (var_13))) + ((+(1980430199)))))) : ((+(8U)))));
    var_19 = ((/* implicit */unsigned char) (~((-(var_12)))));
}
