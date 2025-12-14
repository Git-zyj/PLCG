/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151857
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
    var_18 += ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) (unsigned short)30485))))), (min((var_0), (((/* implicit */unsigned long long int) 1362787774U)))))));
    var_19 += (~((-(((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))))));
    var_20 = ((/* implicit */long long int) ((unsigned short) (short)23218));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 2] = max((((unsigned int) (+(830963131U)))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3448795568U))))));
                var_21 += ((/* implicit */int) ((((/* implicit */_Bool) min(((~(2283155637155442148ULL))), (((/* implicit */unsigned long long int) ((int) (unsigned char)103)))))) ? (min((((((/* implicit */_Bool) -2014212398)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [0] [i_1 - 1]))) : (var_7))), (((/* implicit */unsigned int) ((unsigned short) var_13))))) : ((-(min((104596041U), (arr_2 [i_1] [i_0])))))));
                var_22 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) 1811176260)), (16185967367807620909ULL))), (((unsigned long long int) ((((/* implicit */_Bool) 528302314U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_14)))))));
}
