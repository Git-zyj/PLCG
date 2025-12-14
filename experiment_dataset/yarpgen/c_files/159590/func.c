/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159590
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (402653184U)))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (2049111175436725500ULL))))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) ((((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_9))))) != (((/* implicit */int) min(((_Bool)0), (var_6)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) min((((var_9) ? (15489202221036052148ULL) : (17137782496579190516ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(15890341455995411319ULL)))) ? (max((max((2957541852673499471ULL), (((/* implicit */unsigned long long int) var_0)))), (max((((/* implicit */unsigned long long int) -120868540)), (arr_2 [i_0] [i_0] [i_0]))))) : (((unsigned long long int) (_Bool)1))));
                var_18 ^= ((/* implicit */unsigned int) (-((+(arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 3])))));
                var_19 += ((/* implicit */unsigned char) max((min((((((/* implicit */int) var_1)) * (((/* implicit */int) var_6)))), (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_13))))))), (((/* implicit */int) ((_Bool) arr_3 [i_1 + 1])))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (arr_2 [i_1 - 1] [i_1] [i_1 - 2])))) ? ((-((-(((/* implicit */int) var_8)))))) : ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) != (2957541852673499478ULL))))))));
            }
        } 
    } 
}
