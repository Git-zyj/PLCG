/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163990
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
    var_12 &= ((/* implicit */unsigned short) (((+((+(var_5))))) + (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_13 = max((var_9), ((-((+(var_5))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_7 [i_2] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : (arr_6 [i_2] [i_1] [i_2] [i_2])));
                    var_14 = ((/* implicit */unsigned char) arr_7 [i_1] [i_0]);
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(2LL))))));
                }
            } 
        } 
        arr_9 [(signed char)0] = ((/* implicit */unsigned short) ((unsigned int) arr_7 [i_0] [i_0]));
        var_16 += ((((/* implicit */_Bool) -26LL)) ? (((/* implicit */long long int) arr_4 [i_0])) : (-7LL));
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned int) (~(2507725046845403663ULL)))))));
}
