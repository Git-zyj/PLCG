/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151019
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned short) ((max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) max((409816911U), (((/* implicit */unsigned int) arr_5 [i_0])))))));
                var_19 = ((/* implicit */unsigned int) max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)102)), (arr_1 [i_0] [i_0]))))));
                arr_6 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (18386491603151133692ULL))))))) & (((((/* implicit */int) var_10)) / (((/* implicit */int) var_13))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned short) var_13)))))))) == (max((((((/* implicit */_Bool) var_6)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) ((unsigned int) var_14))))))))));
}
