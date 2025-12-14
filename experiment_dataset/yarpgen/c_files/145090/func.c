/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145090
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(var_13)));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0]))), (((((/* implicit */_Bool) (unsigned char)5)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) 1283470432U);
        arr_5 [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) var_0)) : (11834827891605129725ULL)))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) var_9);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_6 [i_1]))));
            arr_12 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (var_9) : (((/* implicit */unsigned int) (~(1169735485))))));
        }
        var_18 = ((/* implicit */long long int) arr_9 [i_1] [i_1]);
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
    }
    var_19 -= ((/* implicit */signed char) var_8);
}
