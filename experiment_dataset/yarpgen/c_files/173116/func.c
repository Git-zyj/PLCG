/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173116
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
    var_17 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))) - (var_14))) : (var_8))));
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_7)) ^ (var_3)))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))), (((var_2) << (((((unsigned int) var_0)) - (4294967190U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((unsigned long long int) arr_2 [i_1] [i_0]));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((2790599548U), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) : (arr_4 [i_0] [i_0] [12ULL])))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_6 [i_3]) >= (((/* implicit */int) (unsigned char)255))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) ? ((+(((/* implicit */int) ((unsigned char) var_4))))) : ((~(((/* implicit */int) arr_11 [i_3] [i_3] [i_4])))))))));
                    var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)5)) ? (67104768LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((unsigned long long int) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)0))))))))))));
}
