/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154694
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
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51273)) - (((/* implicit */int) (short)-3667))))) ? (2389698065U) : (min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (725833078U)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) arr_2 [i_1 - 1] [i_1] [(unsigned short)4])), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)(-127 - 1)))))))));
                var_18 += ((/* implicit */signed char) ((((((/* implicit */int) (signed char)102)) | (arr_0 [i_1 - 1]))) + (((/* implicit */int) (short)3666))));
                var_19 = ((/* implicit */signed char) (unsigned short)10448);
            }
        } 
    } 
}
