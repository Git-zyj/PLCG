/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144116
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
    var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */int) var_11)) * (((((var_6) / (((/* implicit */int) var_0)))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_6)))))))));
    var_13 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)32163)) - (174433751)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)19)) == (((-1109500514) - (((/* implicit */int) (short)-32164))))));
                    arr_6 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) | (((/* implicit */int) arr_1 [i_2]))));
                    var_15 &= ((/* implicit */unsigned char) ((((arr_2 [i_0] [i_2]) && (arr_5 [i_0] [i_0] [i_2]))) && (((((/* implicit */int) arr_2 [i_0] [i_2])) < (arr_4 [i_2] [i_0] [i_0])))));
                    arr_7 [i_0] [i_1] [(short)18] = ((((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) & (((/* implicit */int) arr_5 [(unsigned short)14] [i_1] [i_0])));
                }
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) || (arr_2 [i_0] [i_0])))) > (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) != (((/* implicit */int) arr_1 [i_1])))))))) | (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)49731)) != (((/* implicit */int) (short)32163))))) >= (((/* implicit */int) (!(arr_2 [i_0] [i_0]))))))))))));
                arr_8 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_1] [i_0])) + (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))))) > (min((((/* implicit */int) arr_1 [0])), (((arr_4 [i_1] [i_1] [i_0]) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_9 [i_3 - 2] [i_3 - 1] [i_3 - 2]) && (arr_9 [i_3 + 1] [(short)8] [i_3 + 1])))) >> (((((/* implicit */int) arr_9 [i_0] [i_3 + 1] [i_3 + 1])) * (((/* implicit */int) arr_9 [i_3] [i_3 + 1] [i_3 + 1]))))));
                    var_18 = arr_10 [i_1] [i_0];
                }
            }
        } 
    } 
}
