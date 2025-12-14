/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176591
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) (short)1))))) ? ((((_Bool)1) ? (1640407558U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_2])), (var_6)))))))) | (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))) ? (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_7))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (arr_2 [i_0] [i_1] [i_0]))))))))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (-(((((/* implicit */_Bool) ((var_0) ? (3663954026U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((631013268U) ^ (4077122403U))))))))));
                    arr_9 [(unsigned short)9] [i_0] [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (631013269U)))) ? (max((478840447267937271ULL), (((/* implicit */unsigned long long int) 1147381424U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 631013269U))))))))) ? ((-((+(((/* implicit */int) var_7)))))) : ((-(((((/* implicit */_Bool) 631013269U)) ? (((/* implicit */int) var_7)) : (var_10)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (max((1048575ULL), (((/* implicit */unsigned long long int) 4294967280U)))) : (max((8716255217993512299ULL), (((/* implicit */unsigned long long int) var_11))))))));
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((max((var_10), (((/* implicit */int) var_7)))), ((-(((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (631013272U)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (1223983637559555281LL)))))));
    var_17 = ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_7)), (0U)))))) ? (((((/* implicit */_Bool) max((-5805491687479198759LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_12)) ? (631013277U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_3)) - (((/* implicit */int) var_7))))))));
}
