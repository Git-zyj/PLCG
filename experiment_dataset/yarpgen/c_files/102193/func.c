/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102193
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
    var_14 = ((var_7) == ((-(((((/* implicit */_Bool) var_0)) ? (1152049250U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
    var_15 = ((/* implicit */unsigned short) ((((8985740231005647353ULL) - (((/* implicit */unsigned long long int) var_4)))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0)))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)252)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775793LL))) + (26LL)))));
                    var_18 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_13)))) << (((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), ((-(arr_1 [i_1]))))) - (12069ULL)))));
                    var_19 = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned long long int) var_12)) + (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) var_0))))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned short)39061))))), (min((arr_7 [i_1] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])))))))));
                    var_20 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) max(((unsigned short)26888), (((/* implicit */unsigned short) (unsigned char)0))))) >> (((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0] [i_1])) ? (arr_5 [i_1]) : (arr_0 [i_1] [i_1]))) - (1579851947328913996ULL))))));
                }
            } 
        } 
    } 
}
