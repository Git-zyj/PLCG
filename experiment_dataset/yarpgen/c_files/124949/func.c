/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124949
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)46), (((/* implicit */unsigned char) (_Bool)1)))))) : ((+(((((/* implicit */_Bool) arr_4 [9LL] [i_1])) ? (((/* implicit */long long int) 155789522)) : (var_15)))))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)61151)) != (((/* implicit */int) (short)-15740)))) ? (((/* implicit */int) (_Bool)1)) : (var_10)))) ? (((var_4) ? (arr_4 [i_1 - 3] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61146)))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((6345769450469634520ULL), (((/* implicit */unsigned long long int) 7U))))))));
                var_17 = ((/* implicit */short) var_4);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */short) var_5))))) ? (min((var_6), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)16659))))))) : ((-(-254921045)))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((unsigned char) (-(var_10))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)179)), (var_1)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_10)) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13))))))) ? ((~(((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))))));
}
