/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127391
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) 0U);
                var_11 = ((/* implicit */unsigned int) min((var_11), ((+(((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) : (arr_0 [i_1])))))));
                arr_5 [11U] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (short)-7443))))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (var_9)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) (-(5147358087448732871LL))));
                var_12 *= ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_2)) : (((long long int) 14280808583505459378ULL)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (~(4294967272U)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 2ULL)) ? (var_0) : (var_2))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) != (((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
}
