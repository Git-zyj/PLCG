/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171759
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) var_11);
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned char) var_3)), ((unsigned char)0))));
            var_16 = ((/* implicit */short) var_11);
            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
            var_18 = ((/* implicit */unsigned int) arr_2 [i_1]);
        }
        var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0 + 3])))) ? (max((((/* implicit */unsigned int) var_10)), (arr_0 [i_0 - 4]))) : (min((arr_0 [i_0 - 3]), (((/* implicit */unsigned int) var_2))))));
    }
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max(((unsigned char)0), (((/* implicit */unsigned char) var_12)))))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((409816067U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (signed char)-70))))) : (((/* implicit */int) (short)0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) % (var_5)))));
    var_22 = ((/* implicit */short) var_2);
}
