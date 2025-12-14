/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169239
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
    var_17 = ((/* implicit */long long int) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_6)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((short) ((signed char) max((((/* implicit */unsigned short) var_13)), (var_6)))));
                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) min((min((arr_0 [i_1] [i_0 - 1]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_16))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((short) var_11))), (var_6))))))));
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) arr_3 [i_0 - 1]))))) ? (min((var_5), (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0 - 1])))))))) ? (arr_1 [i_0 + 2] [i_1 - 4]) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (!(var_4)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (((unsigned int) var_15))));
}
