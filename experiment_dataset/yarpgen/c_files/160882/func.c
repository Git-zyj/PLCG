/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160882
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (var_7)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_20 ^= ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 2] [i_3]);
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(_Bool)0] [i_2] [i_2 + 2] [i_1] [i_2 + 2] [i_2 - 4])) > (((/* implicit */int) arr_7 [i_2] [4U] [i_2 + 1] [i_1] [i_2 - 3] [i_2 + 2])))))));
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13891241762389843415ULL))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_2 [i_0] [i_3]);
                            var_24 ^= arr_0 [(unsigned char)4] [i_3];
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((short) arr_5 [i_0] [i_1] [i_0])))));
                            arr_12 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52648)))))));
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) 536866816);
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 2])) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 2])))))))));
                }
            } 
        } 
    } 
}
