/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139269
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
    var_18 = var_12;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49734)) ? (((int) (unsigned short)49734)) : (((((/* implicit */_Bool) (unsigned short)15802)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)123))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (arr_2 [i_0] [i_1]))))) : (((unsigned long long int) (-(((/* implicit */int) (unsigned short)0)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_1 [i_0]))), ((-(((/* implicit */int) (unsigned char)248))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32181))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [1LL] [i_0]))))) : (((((/* implicit */_Bool) -7905519570422233932LL)) ? (arr_3 [i_0]) : (arr_3 [i_0])))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49734)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - ((~(((/* implicit */int) (short)32759)))))))));
                arr_7 [i_0] = max(((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)123))) + (-7905519570422233906LL))))), (((/* implicit */long long int) 1530776117)));
            }
        } 
    } 
}
