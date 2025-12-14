/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158616
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
    var_14 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 *= ((((/* implicit */int) ((arr_0 [(unsigned short)5] [i_1]) >= (((((/* implicit */_Bool) arr_3 [i_0] [15LL] [(unsigned char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (arr_0 [i_0 - 2] [i_0])))))) / (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 2]))));
                var_16 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-11818)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5130493978922992329LL)));
                var_18 = ((arr_0 [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0 - 1])) << (((arr_3 [i_0 - 2] [i_0 - 2] [i_1]) - (810750245))))) >> (((((((/* implicit */int) arr_1 [i_0 + 1])) | (arr_3 [i_1] [i_1] [i_0]))) - (810750238)))))));
            }
        } 
    } 
}
