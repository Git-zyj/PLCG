/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159818
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
    for (int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */_Bool) var_8);
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (+(((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (unsigned char)0))))) ? ((~(((/* implicit */int) (unsigned short)1024)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-121)), ((short)-707)))))))))));
                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_3 [i_1] [i_0 - 4] [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [3U] [i_0] [i_0]))))))))));
                arr_4 [i_1] [i_0 - 1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */long long int) var_10)) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_2 [i_1] [i_1]) : (arr_3 [i_0] [i_0 - 4] [i_1]))))) | (((/* implicit */long long int) var_2))));
                var_14 = ((/* implicit */unsigned short) -13LL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (~(var_1)));
    var_16 = ((/* implicit */int) var_0);
}
