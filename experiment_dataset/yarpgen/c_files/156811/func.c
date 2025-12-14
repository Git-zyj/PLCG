/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156811
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_4 [i_0] [i_1] [i_0]) || (arr_4 [i_0] [i_1] [i_0]))))));
                arr_5 [i_1] [i_1] = ((((/* implicit */int) var_9)) <= (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_1)))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((short) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_3 [i_0]))))))));
                var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) ((unsigned short) (short)4095))) : (((/* implicit */int) (signed char)-21))))), (((((/* implicit */_Bool) arr_2 [7U])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (arr_0 [i_0] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) max((var_9), (arr_3 [i_1])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 108086391056891904ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (492525722)));
}
