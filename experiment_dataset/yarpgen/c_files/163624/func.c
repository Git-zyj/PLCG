/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163624
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */short) (_Bool)1);
                arr_4 [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */_Bool) ((((_Bool) ((unsigned char) arr_10 [i_0] [i_1] [i_2] [i_3]))) ? (((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) ((unsigned char) (short)-18013)))));
                            var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) && (arr_8 [i_0 - 1] [i_0 + 1] [(_Bool)1]))), (((arr_8 [i_0] [i_0 - 1] [i_2]) || ((_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_3);
}
