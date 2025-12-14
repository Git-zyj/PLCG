/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127596
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) max((((unsigned int) (unsigned short)65532)), (((/* implicit */unsigned int) (((((_Bool)1) ? (var_4) : (((/* implicit */int) var_8)))) < (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max(((unsigned short)15036), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (arr_4 [i_1] [i_0] [i_0]) : (min((var_10), (((/* implicit */unsigned int) (unsigned short)28825)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_6)))))))) + (max((min((((/* implicit */unsigned long long int) var_4)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)119))))))))))));
    var_15 += ((unsigned char) (signed char)63);
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_1))));
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_8)))))))), (min((((var_5) << (((((/* implicit */int) var_1)) - (4799))))), (((/* implicit */unsigned long long int) (~(var_9))))))));
}
