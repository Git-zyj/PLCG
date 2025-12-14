/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113912
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
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((((/* implicit */int) arr_4 [i_0 + 3] [i_0 - 3])) == ((+(((/* implicit */int) var_13)))));
                var_14 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) arr_0 [i_1])) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 3]))) + ((-(arr_3 [i_0])))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_15 -= ((/* implicit */signed char) max((-1273666736), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_11 [i_2] [i_2])))));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) var_6);
        arr_15 [i_3] = ((/* implicit */_Bool) min((764083818), (-1)));
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_7))));
    var_18 = ((/* implicit */int) ((var_13) ? (((/* implicit */long long int) 117440512)) : (var_0)));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (signed char)60))));
}
