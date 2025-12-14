/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112501
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((var_7) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)15))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
    var_12 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) (short)-4096))) : (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-16)))))));
                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (10012017197592022408ULL))))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))));
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) -1010931019485369208LL));
                var_15 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) < (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
}
