/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17474
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
    var_16 += (signed char)36;
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)109)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 3])))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-55), ((signed char)-123)))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 - 1] [(signed char)10])) : (((/* implicit */int) max(((signed char)21), ((signed char)-2)))))) : (min((((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-127)))), (((/* implicit */int) min(((signed char)18), ((signed char)32))))))));
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) arr_2 [(signed char)12]))) ? (((/* implicit */int) arr_5 [i_0 + 3])) : (((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0]), (arr_5 [i_1])))))) % (((((/* implicit */int) (signed char)125)) * (((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 2]))))));
                }
            }
        } 
    } 
    var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_10)))));
}
