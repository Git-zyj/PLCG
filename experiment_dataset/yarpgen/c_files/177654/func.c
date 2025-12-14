/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177654
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_1 [i_0] [(unsigned char)3])))) >= ((+(((/* implicit */int) ((short) arr_1 [i_0] [i_1 - 1])))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_2 [i_1 - 3] [i_1 - 2]))) >> ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [9U]))) <= (arr_2 [i_0] [i_0]))))))));
                var_16 &= ((/* implicit */unsigned short) ((signed char) (unsigned char)47));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_5 [i_2]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_6 [8U] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_2] [i_2]) || (((/* implicit */_Bool) arr_5 [i_2])))))) : ((-(arr_6 [i_2] [(unsigned short)12]))))))));
        arr_7 [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)32767)) - (((/* implicit */int) (unsigned short)11994))))));
    }
}
