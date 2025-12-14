/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175445
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), ((-(var_6)))));
    var_13 = var_2;
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_14 -= ((/* implicit */signed char) var_1);
        arr_2 [(_Bool)1] |= ((/* implicit */long long int) var_5);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)25030)) ? (((/* implicit */int) ((var_2) != (arr_3 [i_0])))) : (arr_0 [i_0])))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((int) var_1))) >= (((((/* implicit */_Bool) 1219743264U)) ? (-7166862388766115208LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))))));
                    arr_7 [i_0] [i_1] [3LL] [i_1] = ((/* implicit */short) var_1);
                    var_17 = ((/* implicit */_Bool) 3075224014U);
                }
            } 
        } 
    }
}
