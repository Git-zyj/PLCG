/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157602
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
    var_18 = ((/* implicit */_Bool) min((min((((/* implicit */int) ((_Bool) var_5))), (var_4))), (((/* implicit */int) var_6))));
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -941639488)) ? (-941639513) : (((/* implicit */int) (_Bool)1))))) : (var_5))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((var_0) ? (((/* implicit */int) var_12)) : (var_7))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(941639513)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) var_1)), (var_5)))))));
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((((/* implicit */int) arr_3 [13U] [i_1])) & (((/* implicit */int) var_9))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 2716872000U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)11] [i_0]))) : (var_14))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_16)) - (((/* implicit */int) (short)9664))))))));
                    arr_8 [i_0] [i_0] [13ULL] [i_0] = ((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_1] [i_0]);
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -941639527))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3546391530U)) ? (((/* implicit */unsigned int) var_2)) : (3546391516U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */int) var_15)))))))) ? (((((/* implicit */int) (!(var_0)))) & (((((/* implicit */_Bool) (short)-9139)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)248)))))) : (((((/* implicit */_Bool) var_4)) ? ((((_Bool)0) ? (-941639520) : (((/* implicit */int) (signed char)-94)))) : (((var_0) ? (((/* implicit */int) var_13)) : (var_2)))))));
}
