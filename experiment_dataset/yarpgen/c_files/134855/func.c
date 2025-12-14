/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134855
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_8)), (3101684011U))), (((3101684009U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) ((3101684011U) * (((/* implicit */unsigned int) var_6))))) ? (((long long int) 1193283270U)) : (((((var_2) + (9223372036854775807LL))) >> (((3101684011U) - (3101684010U))))))) : (((/* implicit */long long int) ((int) (+(((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (1686191205))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 1])) + (((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [8])))))) : (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (+(var_6)));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) (+((+(var_6)))))))))));
    var_21 = ((/* implicit */signed char) var_15);
}
