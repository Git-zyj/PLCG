/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108590
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */signed char) var_13)), (var_9)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) * (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) == (((((/* implicit */_Bool) (unsigned short)7832)) ? (((/* implicit */int) (unsigned short)5727)) : (((/* implicit */int) (unsigned short)8977)))))))));
                arr_4 [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */int) (unsigned char)212)) & (((/* implicit */int) var_8)))) == (((/* implicit */int) ((unsigned char) var_14)))))) > (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)112)))) != (((/* implicit */int) var_7)))))));
                var_18 = ((/* implicit */int) ((max((arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_2 [i_1] [i_1 + 1] [i_1 + 1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)19))))) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)40078)))) : (((/* implicit */int) ((signed char) (unsigned short)8977))))))));
                var_19 = ((/* implicit */unsigned int) min(((-(8388974950873098838LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (_Bool)1))))))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1LL)) ? (4161536) : (((/* implicit */int) (short)255))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned char) ((long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)7832)) : (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_5)))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56558))) > (65536U))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_9))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) > (var_5))))));
}
