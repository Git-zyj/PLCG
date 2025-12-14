/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125863
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */int) ((_Bool) (unsigned short)65535));
                    var_21 ^= ((/* implicit */long long int) min((((-1955763966) * (-1))), (((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
    {
        var_22 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_8 [(_Bool)1] [10LL]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) arr_9 [i_3])))), (((((_Bool) var_4)) || (((/* implicit */_Bool) arr_8 [i_3] [(_Bool)1]))))));
        var_23 += ((((/* implicit */_Bool) ((long long int) -1))) ? (min((7), (((/* implicit */int) arr_9 [i_3 - 1])))) : ((-(((/* implicit */int) (_Bool)1)))));
        var_24 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_9 [i_3 - 1])))))));
        var_25 += ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_19)))), (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_2))))))));
    }
}
