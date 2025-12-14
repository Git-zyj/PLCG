/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106693
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
    var_17 = ((/* implicit */unsigned int) ((unsigned short) var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_1 + 2] [(_Bool)0] [(_Bool)0])) << (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0]))))) / (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (short)-2178)) : (((/* implicit */int) arr_2 [i_0] [i_1 - 2] [(_Bool)1])))));
                var_19 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (signed char)113)) >= (((/* implicit */int) (signed char)-113)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((-1922253421) & (((/* implicit */int) (unsigned char)37))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_1 [i_0]))));
                            arr_12 [i_0] = ((/* implicit */long long int) max(((signed char)112), (((/* implicit */signed char) min(((_Bool)1), ((_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
