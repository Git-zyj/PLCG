/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132560
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] |= ((/* implicit */int) max((max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((arr_1 [i_0] [12U]) > (((/* implicit */long long int) arr_0 [i_0] [i_1 - 1])))))));
                    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) arr_4 [20U]))));
                    var_11 ^= ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) : (3528535264U))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_7 [(unsigned char)21] [(_Bool)1] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)21670)) << (((((-1793501231) + (1793501248))) - (9)))))) ? (((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_9)))))))) : (((/* implicit */int) (_Bool)1)));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)112)) >= (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
