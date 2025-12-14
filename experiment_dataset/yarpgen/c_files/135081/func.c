/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135081
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
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) max((((((/* implicit */long long int) (~(((/* implicit */int) var_12))))) & (min((((/* implicit */long long int) var_15)), (var_13))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (min((((/* implicit */unsigned int) var_7)), (2514288275U))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))));
                                var_19 = ((/* implicit */int) ((var_13) == (((/* implicit */long long int) ((/* implicit */int) ((1780679018U) == (((/* implicit */unsigned int) var_9))))))));
                            }
                            var_20 = ((/* implicit */unsigned long long int) (~(max((9223372036854775797LL), (((/* implicit */long long int) 2514288268U))))));
                            var_21 = ((/* implicit */unsigned short) (((-((+(((/* implicit */int) var_10)))))) * ((+(((/* implicit */int) ((13847375769248707713ULL) < (((/* implicit */unsigned long long int) 1780679018U)))))))));
                            arr_15 [i_1] [i_1] [i_1] [i_3] = ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (1780679020U))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)239))))) : (max((((/* implicit */long long int) (short)-1254)), (1164480574143459480LL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((3216593954284998277ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4599368304460843902ULL)) ? (1164480574143459472LL) : (var_11))), (((/* implicit */long long int) max((var_4), (((/* implicit */int) var_16))))))))));
}
