/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158263
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) max((max((((/* implicit */unsigned int) ((_Bool) var_7))), (max((((/* implicit */unsigned int) (unsigned char)35)), (arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((unsigned char) ((short) (short)-32435))))));
                arr_4 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((5458814067635722959ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6330)))))) ? (((arr_1 [i_0] [i_0]) | (((/* implicit */long long int) arr_3 [i_0] [12ULL] [12ULL])))) : (((/* implicit */long long int) ((unsigned int) -1916802888))))));
                var_17 = (-(((unsigned long long int) arr_3 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (unsigned char)91)), ((unsigned short)35279))), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_11)))))))) ? (max((var_3), (((unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_11)) ? (2898446064U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2209254345U)))))))));
    var_19 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (-67108864))), ((-(((/* implicit */int) var_4)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))));
}
