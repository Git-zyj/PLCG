/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10146
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_0))));
    var_17 |= ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)240)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)19585)))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_14)))) ? (((/* implicit */unsigned long long int) var_14)) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) <= (((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)12))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_0] [(short)13] [i_1])), (arr_3 [i_0] [i_1] [i_0])))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_9)))) ? (((((/* implicit */_Bool) 2932628124U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51270))) : (var_14))) : (((/* implicit */unsigned int) (+(arr_5 [(signed char)7] [i_0] [(_Bool)1]))))))));
                var_20 = ((/* implicit */int) var_6);
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) -1))));
                var_22 = ((/* implicit */unsigned char) max((((((unsigned long long int) (_Bool)1)) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0] [i_1])), (var_9)))))), (((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_0]), (((/* implicit */short) ((arr_4 [(unsigned short)18]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0])))))))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) var_10)))))));
            }
        } 
    } 
}
