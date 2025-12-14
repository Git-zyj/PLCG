/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108623
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
    var_10 = ((/* implicit */unsigned char) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)173))));
    var_11 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((+(var_4))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) max((var_6), (((/* implicit */short) var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), ((~(arr_2 [i_0])))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((~(((/* implicit */int) var_2)))) : ((-(((((/* implicit */_Bool) (unsigned short)13843)) ? (((/* implicit */int) (short)30221)) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
