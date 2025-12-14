/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170205
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((min((4264487419770874499LL), (((/* implicit */long long int) arr_4 [i_2 - 2] [i_2 - 3] [i_1 + 1])))) >= (((/* implicit */long long int) ((unsigned int) 2685788621U))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) max((13381129379931371613ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2494064091U)) ? (((/* implicit */long long int) 3228220758U)) : (260046848LL)))))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_9))));
                    }
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 - 1] [i_2 + 1] [i_2] [i_2 - 3] [i_2 + 1])) || (((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9963)) || (((/* implicit */_Bool) max((11680501570727272472ULL), (((/* implicit */unsigned long long int) var_2)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    arr_10 [i_0] |= ((/* implicit */long long int) 13381129379931371613ULL);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((short) var_2))))) ? (max((((((/* implicit */_Bool) var_13)) ? (1609178665U) : (var_16))), (((/* implicit */unsigned int) ((var_0) > (3312193599633060168ULL)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    var_25 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16491254314699373323ULL)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (((((/* implicit */_Bool) var_11)) ? (10034529756368173511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) var_1)));
    var_26 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41715))) : (10034529756368173483ULL))) * (((/* implicit */unsigned long long int) ((long long int) -5206363035460616777LL))))), ((+(0ULL)))));
}
