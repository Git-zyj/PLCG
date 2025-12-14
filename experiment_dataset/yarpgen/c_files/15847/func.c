/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15847
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1]);
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((274177750U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)727))))) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) var_1)), (-736705333)))))) ? (var_13) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
                var_18 += ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_1]);
                var_19 -= ((/* implicit */unsigned char) ((unsigned short) min((-736705333), (-736705333))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_20 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)252)) ? ((+(arr_8 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))))), (((/* implicit */unsigned int) arr_9 [i_2]))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((int) 736705332))))) ? (((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) arr_7 [i_3])))) : (((/* implicit */int) ((((18446744073709551615ULL) | (arr_5 [i_2] [i_3]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (_Bool)0))))))))));
            }
        } 
    } 
}
