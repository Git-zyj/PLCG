/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102435
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
    var_19 = (!(((/* implicit */_Bool) 2693637679U)));
    var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_16)), (var_10)))))))) < (1085302720819125464ULL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0 + 2])), ((short)10134)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) & (min((((/* implicit */long long int) var_8)), (2164639547152807766LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(short)12]))) + (arr_5 [i_0 - 1] [i_0 - 1])))));
                var_21 = ((/* implicit */int) arr_4 [(short)7] [i_1] [i_1]);
                var_22 = ((/* implicit */unsigned char) ((((arr_5 [i_0 - 1] [i_0 + 4]) - (arr_5 [i_0] [i_0 + 4]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 + 4]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_0) / (((/* implicit */int) (unsigned char)161)))) * (((/* implicit */int) ((short) (unsigned char)161)))))) ? (-2164639547152807767LL) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)158))))))))));
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2164639547152807766LL)) ? (var_2) : (((/* implicit */int) (_Bool)1))))) % (var_5))))));
}
