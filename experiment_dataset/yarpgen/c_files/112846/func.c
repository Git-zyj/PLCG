/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112846
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0 + 4] = ((/* implicit */short) max((4424384284649527025ULL), (((/* implicit */unsigned long long int) 1))));
        arr_3 [i_0 + 4] [i_0 + 3] = ((/* implicit */int) var_5);
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) var_13)) + (((/* implicit */int) (signed char)-58)))) : (((/* implicit */int) (short)16384))))) || (((/* implicit */_Bool) var_6))));
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)15215)) && (((/* implicit */_Bool) (unsigned short)53341)))) ? (((((((/* implicit */_Bool) 4424384284649527043ULL)) && (((/* implicit */_Bool) var_19)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)59726)), (14022359789060024572ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */long long int) var_1)), (((long long int) (-2147483647 - 1))))));
                arr_12 [i_2 - 3] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_2 + 1] [i_1]);
            }
        } 
    } 
}
