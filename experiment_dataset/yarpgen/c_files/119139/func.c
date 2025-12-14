/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119139
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
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 += (!(((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)0)) >> (((var_18) - (617655403U))))), (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) arr_4 [i_0] [(short)10] [i_0])) : (((/* implicit */int) var_11))))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) ((short) ((unsigned char) 3584U)))) >= (((/* implicit */int) ((unsigned short) (signed char)1))))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned short)11863)) << (((/* implicit */int) (signed char)1)))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (signed char)27))))))));
                }
            } 
        } 
    } 
    var_23 *= var_8;
}
