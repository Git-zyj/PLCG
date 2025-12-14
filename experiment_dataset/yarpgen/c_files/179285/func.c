/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179285
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 = ((long long int) -1970897670689700978LL);
                    arr_9 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 0)) >= ((~(var_2))))) ? (((((((/* implicit */_Bool) arr_6 [i_1])) && ((_Bool)1))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_1] [(unsigned short)4]))) : (arr_1 [i_2 + 1]))) : (((/* implicit */int) ((((/* implicit */int) ((-1970897670689700997LL) <= (1970897670689700973LL)))) == (((/* implicit */int) min(((signed char)-5), (var_13)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) 1970897670689701001LL);
}
