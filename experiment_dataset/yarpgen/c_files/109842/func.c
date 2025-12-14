/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109842
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
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_1]))))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                arr_8 [i_0] [i_2] [i_0] [0U] = ((/* implicit */short) var_0);
                var_12 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [0]))))) >> (((max((((/* implicit */unsigned int) (short)-7166)), (725721766U))) - (4294960116U))))));
                arr_9 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (+(((int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_10))));
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_4)))));
            }
        }
        arr_14 [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (short)7166))))));
        var_15 = ((/* implicit */short) (-(min((((/* implicit */int) arr_11 [i_0] [i_0] [(short)8] [i_0])), (var_0)))));
        var_16 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)14041)) - (((/* implicit */int) (signed char)3)))) % (((/* implicit */int) ((_Bool) min((var_4), (((/* implicit */int) var_7))))))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (var_0) : ((-(var_2)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((var_9), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8))))))));
}
