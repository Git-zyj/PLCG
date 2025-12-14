/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167971
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 6; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */unsigned char) var_11)))), ((unsigned char)246)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9862))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9862))) : (((((/* implicit */_Bool) (unsigned short)9849)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)55671), (((/* implicit */unsigned short) min(((short)-16384), (((/* implicit */short) (_Bool)1)))))))))));
                    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_3)))) ? (max((var_3), (((/* implicit */long long int) (unsigned char)203)))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_2 + 3]))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (-((+(max((((/* implicit */long long int) 1748270884)), (499300356365693543LL)))))));
    var_17 ^= ((/* implicit */unsigned long long int) ((int) ((long long int) ((unsigned long long int) var_3))));
}
