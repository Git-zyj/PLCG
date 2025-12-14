/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115798
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [(signed char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_3 [i_0] [i_0] [i_0])))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (((~(2425918052347882146LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)80)) / (2147483647)));
                arr_6 [i_1] [i_0] = ((/* implicit */int) min((((7199806542249571837LL) << (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (2147483647)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))))));
                var_12 = ((/* implicit */unsigned char) min((min(((signed char)71), ((signed char)71))), (((/* implicit */signed char) ((arr_3 [i_1] [i_1] [i_0]) != (arr_3 [i_0] [i_0] [i_0]))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((signed char) ((var_11) % (max((var_2), (((/* implicit */long long int) (-2147483647 - 1))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */int) var_4)) * (((/* implicit */int) var_10)))), ((~(((var_0) << (((((var_7) + (8922713480128159034LL))) - (20LL)))))))));
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)17582))));
}
