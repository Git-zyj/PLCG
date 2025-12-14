/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18091
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_19 &= ((/* implicit */short) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_1 + 2] [(short)10] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1 - 1] [(short)6] [i_1 + 2])))), (((((/* implicit */int) arr_3 [i_1 + 2] [(unsigned short)4] [i_1 + 2])) | (((/* implicit */int) arr_3 [i_1 + 1] [6] [i_1 - 1]))))));
                arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) (~(min((-2147483646), (((/* implicit */int) arr_2 [i_1]))))))) ? (((((/* implicit */int) arr_3 [i_1 + 2] [i_1] [i_1 + 1])) - (972946874))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_0 [i_1 + 3])))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) var_10)))) : (var_12));
                    var_21 = ((/* implicit */short) max((var_6), (((/* implicit */int) ((short) arr_6 [4] [i_1] [i_1 - 1] [i_1 - 1])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 7; i_3 += 2) 
                    {
                        var_22 = ((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3])) ? ((~((~(var_4))))) : (4194303));
                        arr_12 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */short) (+(arr_4 [i_1 + 2])));
                    }
                    arr_13 [i_1] [i_1] = ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0]);
                    var_23 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_13))))))));
                }
                for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    var_24 = ((/* implicit */short) ((-4194295) >= ((+(((/* implicit */int) var_5))))));
                    var_25 = (~(((((/* implicit */int) var_16)) - (((/* implicit */int) var_18)))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
    var_27 |= var_13;
}
