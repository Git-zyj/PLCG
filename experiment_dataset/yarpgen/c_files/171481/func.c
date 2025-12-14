/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171481
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
    var_12 = ((/* implicit */unsigned int) var_2);
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((arr_7 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))) % ((~(((/* implicit */int) var_8)))))) < (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                    var_15 = ((/* implicit */unsigned int) var_11);
                }
            } 
        } 
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)-105))));
    }
}
