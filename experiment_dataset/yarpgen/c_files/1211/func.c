/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1211
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (3525140103724414727LL) : (arr_2 [i_0 - 1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((+(arr_0 [i_0 - 1] [i_1]))))), (max((((/* implicit */unsigned long long int) arr_1 [i_1 - 2] [i_1 - 1])), (arr_0 [i_0 - 3] [i_0 - 3])))));
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((_Bool) arr_2 [i_1 - 2] [i_1 - 1]))), (2188717210U)));
                arr_7 [i_0] = ((/* implicit */signed char) (~(arr_2 [i_0] [i_1])));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (unsigned short)6145);
}
