/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130678
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
    var_15 = ((/* implicit */signed char) 0ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 6; i_1 += 4) 
        {
            {
                arr_8 [(unsigned char)0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5810))))) ? ((~(((/* implicit */int) arr_7 [i_0])))) : ((~(arr_0 [i_0] [i_1])))))));
                var_16 = arr_7 [i_0];
                arr_9 [i_0] [i_0] [i_0] = max((4ULL), (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? ((~(13ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [(_Bool)0] [i_1]))))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 18446744073709551603ULL))));
                arr_10 [i_0] [(unsigned short)0] = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_10);
}
