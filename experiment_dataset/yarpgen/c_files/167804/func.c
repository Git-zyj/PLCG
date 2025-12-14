/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167804
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1303749415)) ? (min((((/* implicit */unsigned long long int) var_11)), (var_13))) : (((((/* implicit */_Bool) min((-1303749398), (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (min((var_5), (((/* implicit */unsigned long long int) -1303749415))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((1303749420) >= (-1303749418)))), (var_9))))) < (min((((/* implicit */unsigned int) arr_0 [i_1 - 3])), (((((/* implicit */unsigned int) 1303749420)) - (2502837476U)))))));
                arr_4 [i_1] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (min((((/* implicit */int) (short)-20372)), (-1303749420)))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (306243930774760647LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32757)))))) ? (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) var_4)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [7]))))))) : (max((((/* implicit */long long int) ((var_1) > (((/* implicit */unsigned long long int) var_4))))), (var_0)))));
                var_17 &= ((/* implicit */unsigned char) min((((/* implicit */int) ((33554424) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_1] [(unsigned char)3] [(unsigned char)3]))))))), ((~(((/* implicit */int) (_Bool)1))))));
                var_18 *= ((/* implicit */signed char) (~(((((/* implicit */int) arr_0 [i_0 - 2])) & (((/* implicit */int) var_12))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((3287047574U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
}
