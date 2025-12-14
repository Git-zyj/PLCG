/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11934
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
    var_17 = ((/* implicit */unsigned int) ((signed char) var_0));
    var_18 = ((/* implicit */short) ((((var_8) >= (((/* implicit */long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_9)) > (var_16)))), (((unsigned char) var_8))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] = arr_4 [i_0] [i_0];
                    var_19 = ((/* implicit */int) arr_0 [i_0]);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(max((((/* implicit */unsigned int) var_2)), (arr_5 [i_0]))))) : (((/* implicit */unsigned int) ((max((((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_0])), (arr_4 [i_1] [(short)3]))) | (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])))))));
                    var_21 *= ((/* implicit */signed char) ((((((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_10)) ? (1062649826816579748LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (max((((/* implicit */unsigned int) arr_2 [i_1] [i_1])), (arr_0 [i_2]))) : (((((/* implicit */_Bool) (unsigned short)22109)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_7 [6LL] [i_1 + 1] [i_2] [i_0])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((unsigned char) (+(max((((/* implicit */int) var_9)), (var_13))))));
}
