/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107451
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_2] [i_1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [(unsigned char)10] [11U])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [(_Bool)1]))))) : (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_13))))))) ? (min((max((((/* implicit */unsigned long long int) 979747986378679497LL)), (var_10))), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3711932981U)) ? ((+(3711932978U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-27798))))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(min((var_3), (((/* implicit */long long int) min((var_12), (arr_1 [i_2])))))))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max(((-(((int) 3711932981U)))), (((/* implicit */int) arr_6 [i_1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_12 [(unsigned char)6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_2 [i_3] [i_3])))));
        var_18 = (~(((3711932981U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))))));
    }
}
