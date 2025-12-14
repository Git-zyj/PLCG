/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148400
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (17093630732491298030ULL) : (((/* implicit */unsigned long long int) 3436010051U)))), (((/* implicit */unsigned long long int) var_13))))) ? (((((/* implicit */_Bool) 3436010054U)) ? (max((3436010052U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)124))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) 3226933959U)) : (var_5)))) ? (((/* implicit */int) var_11)) : (var_7)))) : (max((max((((/* implicit */unsigned int) (unsigned char)5)), (858957253U))), (3436010023U)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_21 = max((((/* implicit */unsigned short) (short)-28839)), (min((((unsigned short) 3436010066U)), (((/* implicit */unsigned short) var_9)))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) max(((unsigned short)123), (((/* implicit */unsigned short) (unsigned char)21)))))) ? (((/* implicit */int) max((arr_7 [i_1 - 2] [i_1 - 1]), (((/* implicit */short) ((arr_0 [(unsigned char)2] [i_1 + 1]) || (var_9))))))) : ((~(((/* implicit */int) ((short) var_8))))))))));
                }
            } 
        } 
    } 
}
