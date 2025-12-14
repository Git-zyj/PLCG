/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175521
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
    var_10 = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */unsigned long long int) var_9)) - (11635507761016363112ULL)))) | (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_8))) / (((/* implicit */int) ((signed char) var_3))))))));
    var_11 = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)1)))))) ^ (((((/* implicit */_Bool) 2605943344U)) ? (((/* implicit */unsigned int) var_9)) : (4225461203U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_1])), (((min((arr_1 [i_0]), (arr_1 [i_1]))) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) > (((/* implicit */int) (short)21908)))))))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_3 [i_0] [i_0 - 2]))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15817)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25366))) : (2457833137U)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((short) (unsigned short)0))), (((arr_1 [(_Bool)1]) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_1]))))))) : ((+(998834701U)))))));
                var_15 |= ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */int) arr_3 [i_0] [i_1])) | (((/* implicit */int) arr_3 [i_0] [(signed char)5])))) >> (((/* implicit */int) arr_3 [i_1] [i_0 + 1])))));
            }
        } 
    } 
    var_16 |= ((/* implicit */_Bool) ((var_9) & ((~(var_9)))));
    var_17 += ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_5)))));
}
