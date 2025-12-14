/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149783
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (1806837016U)))) ? (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))) ? (2527428913U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
        arr_2 [i_0] = ((/* implicit */signed char) var_18);
        var_21 ^= ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)106)))), (((((/* implicit */_Bool) max((-1810851795503833119LL), (-6078164171938164060LL)))) ? (((/* implicit */int) (unsigned char)20)) : (2014616209)))));
        var_22 ^= ((/* implicit */unsigned short) arr_0 [i_0] [(unsigned char)7]);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned int i_3 = 4; i_3 < 19; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) <= (var_5))) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) ((-1907491510) >= (((/* implicit */int) (_Bool)1))))))) : (var_3)));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) 154100676)), (min((((/* implicit */long long int) var_3)), (-2104170381335039430LL)))))) ? (5429151376688504987LL) : (((/* implicit */long long int) 1673955610U))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)93))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) 1907491515)) : (2104170381335039459LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) >> (((((/* implicit */int) var_1)) - (144)))))) : (((((/* implicit */_Bool) 2104170381335039446LL)) ? (4895701820171313849LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)11] [(unsigned char)11] [i_1] [i_1])))))))));
    }
    var_26 = ((/* implicit */signed char) (-(2104170381335039434LL)));
}
