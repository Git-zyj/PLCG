/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146678
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-100))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)31)) < ((~(((/* implicit */int) (short)16384))))))) : (((/* implicit */int) ((signed char) (_Bool)1))))))));
                            var_11 += ((/* implicit */_Bool) ((short) (+(((/* implicit */int) max((arr_1 [i_0]), ((short)-1)))))));
                            arr_9 [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) (short)32760)))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned char) max(((+(3235869733U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)4432)))))));
                var_13 = ((/* implicit */long long int) arr_7 [(unsigned short)2] [5]);
            }
        } 
    } 
    var_14 = var_3;
}
