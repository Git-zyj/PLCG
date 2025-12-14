/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145416
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
    var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_12)))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)43396)))))));
    var_17 += ((/* implicit */short) ((long long int) max((0), (((/* implicit */int) (unsigned short)36831)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */short) ((unsigned char) ((unsigned short) (+(((/* implicit */int) (unsigned short)58362))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_19 = ((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 1]);
                    arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) || ((_Bool)1))) ? (max((((/* implicit */long long int) (unsigned short)43396)), (-8267606342805214107LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-30081))))))) && (((/* implicit */_Bool) max((2145386496U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-23068))))))))));
                    arr_10 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1])))))));
                }
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0 - 1]))))))));
                var_21 = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_3 [i_0 - 1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((546415727) + (((/* implicit */int) (_Bool)1))));
}
