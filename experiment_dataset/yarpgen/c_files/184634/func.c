/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184634
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
    var_17 = ((/* implicit */unsigned long long int) 8386098444309708071LL);
    var_18 += ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)20)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((var_8), (((/* implicit */unsigned long long int) var_3))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)236)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (var_15)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)26)) ? (((((/* implicit */unsigned long long int) 17025339U)) | (7500563724703044626ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)230))))))), (10946180349006506989ULL)));
                    arr_9 [i_2] [i_2] [i_2] [i_0 + 1] = ((/* implicit */unsigned char) arr_1 [i_2]);
                    var_21 *= ((/* implicit */_Bool) ((10946180349006506989ULL) % (((((/* implicit */_Bool) (signed char)58)) ? (7500563724703044627ULL) : (((/* implicit */unsigned long long int) 4277941957U))))));
                    arr_10 [i_0] [i_1] &= ((/* implicit */signed char) min(((-((+(arr_1 [i_0]))))), ((~(((arr_1 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)7])))))))));
                }
            } 
        } 
    } 
}
