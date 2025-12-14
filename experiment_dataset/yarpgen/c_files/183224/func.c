/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183224
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_2] [(unsigned short)8] [i_2] [(_Bool)0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)134))))));
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(5792125140621632821LL))), (((/* implicit */long long int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)94)))))))) : (((/* implicit */int) (signed char)48))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 *= ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) (signed char)-51)) ? (3765265890U) : (529701388U)))))));
}
