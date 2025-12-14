/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110379
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max(((short)-4103), (((/* implicit */short) (_Bool)1))));
                    var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) ((96597342U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))))))), (((long long int) var_8))));
                    arr_6 [0] [i_2] [0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9223372035781033984ULL) << (((var_10) - (2818737524U)))))) ? (((((/* implicit */_Bool) (short)240)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-249))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)642)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36305))) : (min((2994551094U), (8U)))));
                    var_16 &= ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) / (min((((/* implicit */long long int) var_10)), (var_1))))), (var_0)));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */short) var_2);
    var_18 = min((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_11)) : (36U))), (var_10))), (((unsigned int) ((((/* implicit */long long int) 980235115)) ^ (-7431385944971564250LL)))));
}
