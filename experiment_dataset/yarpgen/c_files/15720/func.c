/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15720
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((var_12) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38660))));
        arr_3 [(unsigned short)6] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-84)) <= (var_8))))) + (min((((/* implicit */long long int) (short)10420)), (arr_0 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */short) 1584029484U);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) var_6);
        arr_9 [i_1] = ((/* implicit */long long int) (signed char)42);
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        arr_12 [(_Bool)1] = ((/* implicit */int) max((min((min((((/* implicit */long long int) var_11)), (var_12))), (((/* implicit */long long int) (-(2710937811U)))))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)116)), (arr_11 [i_2 - 1]))))));
        arr_13 [i_2 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)50387)) || (((/* implicit */_Bool) arr_10 [i_2 - 1])))) ? (1584029459U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_11 [i_2]))))))));
    }
    var_18 = ((/* implicit */_Bool) ((unsigned int) 2710937798U));
}
