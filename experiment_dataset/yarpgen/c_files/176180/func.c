/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176180
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
    var_11 |= ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */unsigned long long int) var_7)) : (var_8))))), (((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned short)30885)) <= (((/* implicit */int) arr_5 [i_2] [6LL] [(signed char)1])))))))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (-(((int) (short)27995)))))));
                    arr_7 [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-47))))), (((max((((/* implicit */unsigned int) (unsigned char)176)), (2403613457U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)10379)))))))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)113))))))) ? (((long long int) ((((/* implicit */int) arr_3 [i_2] [i_0] [i_0])) / (arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) max((var_3), (max((((/* implicit */short) var_1)), (var_5))))))))))));
                    var_15 = ((/* implicit */short) max((((/* implicit */int) max((((unsigned short) (unsigned short)55152)), (((/* implicit */unsigned short) (signed char)89))))), (((-778420268) / (268435455)))));
                }
            } 
        } 
    } 
}
