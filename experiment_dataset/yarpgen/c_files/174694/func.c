/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174694
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] [(signed char)20] [i_0] = ((/* implicit */unsigned char) arr_0 [i_1]);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)8)) | (((/* implicit */int) (unsigned char)64)))) | ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1])))))) | (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1339695398)))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_0 [i_0 + 2]))))))));
                arr_8 [8U] = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_8);
    var_14 |= ((/* implicit */signed char) (_Bool)0);
}
