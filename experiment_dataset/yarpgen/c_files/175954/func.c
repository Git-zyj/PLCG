/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175954
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
    var_17 = ((/* implicit */signed char) (short)2);
    var_18 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) max((max((arr_5 [i_0]), (((/* implicit */unsigned char) arr_0 [i_0 + 1] [i_1])))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0U)))))))), (max((((/* implicit */int) (short)2)), ((~(((/* implicit */int) (signed char)-113))))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min(((-(4488758709043918290LL))), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (unsigned char)14)), (5U))) & ((-(var_7))))))));
}
