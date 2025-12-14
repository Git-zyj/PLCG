/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100390
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
    var_17 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-14554)) + (2147483647))) << (((/* implicit */int) (_Bool)0))))) ? (((long long int) arr_6 [i_1] [i_1])) : (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0] [i_1])), (arr_1 [(_Bool)0] [(_Bool)0]))))));
                arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_0])) >= (((/* implicit */int) arr_5 [i_0] [i_1]))))) >= (((int) arr_3 [i_0]))));
                arr_8 [i_1] = ((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), ((((_Bool)1) ? (652342943) : (((((/* implicit */_Bool) 1048575)) ? (((/* implicit */int) (short)-30155)) : (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) ((short) arr_3 [i_0]))) : (((/* implicit */int) ((_Bool) arr_3 [i_2])))));
                    arr_12 [i_1] [i_1] [17U] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)13235)))))) >= (((int) ((long long int) arr_5 [i_0] [i_0])))));
                }
                arr_13 [i_1] = ((((/* implicit */int) (short)2047)) > (((/* implicit */int) (short)-28218)));
            }
        } 
    } 
}
