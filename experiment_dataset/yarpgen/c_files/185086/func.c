/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185086
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
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (((int) max((15LL), (((/* implicit */long long int) (short)-32452)))))));
    var_20 = ((/* implicit */signed char) ((_Bool) ((((((/* implicit */int) (short)-32422)) * (((/* implicit */int) (short)-32452)))) * (((/* implicit */int) ((unsigned char) var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) 18446744073709551607ULL);
                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (signed char)8)) == (((/* implicit */int) arr_1 [i_0]))))) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0]))))))) == (min((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))), (((((/* implicit */int) arr_0 [(unsigned char)1] [i_0])) ^ (((/* implicit */int) (signed char)-64))))))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((signed char)85), (((/* implicit */signed char) (_Bool)0))))), (max((arr_4 [i_0 + 3] [i_0 + 3] [i_0 - 1]), (arr_4 [i_0 + 3] [i_0 + 3] [i_0 - 1]))))))));
            }
        } 
    } 
}
