/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118556
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
    var_18 += ((/* implicit */unsigned int) (signed char)-118);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) var_1);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((_Bool) arr_2 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */int) (signed char)-119)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (var_3))))))));
                    arr_6 [7U] [i_0] [7U] [7U] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (arr_3 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) < (((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_13)))))))), (((int) var_8))));
                }
                var_21 = ((/* implicit */int) var_1);
            }
        } 
    } 
}
