/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152072
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
    var_16 = ((/* implicit */unsigned char) min((((var_10) + (((/* implicit */long long int) ((unsigned int) var_11))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)254))))), ((-(var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (!(((/* implicit */_Bool) (short)2565))))));
                var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)248)))) + (arr_3 [i_1] [i_0]))), (((/* implicit */long long int) arr_1 [i_1]))));
                arr_4 [15ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (arr_2 [i_0] [i_1]))) / (min((15268442904297791509ULL), (((/* implicit */unsigned long long int) var_11))))))) ? (((long long int) (-(((/* implicit */int) arr_0 [i_1] [i_0 + 1]))))) : (((/* implicit */long long int) ((int) var_3)))));
                var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_2)) >= (3178301169411760107ULL))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (13941709138434876513ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4505034935274675103ULL)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)0)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
    var_21 = ((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_0))));
}
