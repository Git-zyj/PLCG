/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154147
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6553)) ? (((/* implicit */int) (unsigned short)24426)) : (-1240292558)));
    var_13 = ((/* implicit */long long int) ((unsigned short) min((min((var_7), (var_7))), (((/* implicit */unsigned int) (+(var_3)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_3)) : (1498512152U)));
                var_14 = ((/* implicit */short) (~(((/* implicit */int) ((short) ((short) arr_3 [i_1 + 1] [(_Bool)1]))))));
                var_15 += ((/* implicit */unsigned long long int) max((min((arr_2 [i_1] [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) arr_0 [i_0 - 1])))), ((~(arr_2 [i_1] [i_1 - 2] [i_1 - 3])))));
            }
        } 
    } 
}
