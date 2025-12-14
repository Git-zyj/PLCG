/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163497
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) 9223372036854775807LL);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            arr_14 [i_1] [i_1 - 3] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (2957364254064400311LL)))) && (((/* implicit */_Bool) ((signed char) 9223372036854775807LL))));
                            arr_15 [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 9223372036854775788LL))) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775787LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        }
        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (_Bool)1)))));
    }
    for (short i_5 = 4; i_5 < 15; i_5 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) min((min((((2906981636531728670LL) * (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 2]))))), (max((-9223372036854775787LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) / (-9223372036854775787LL)))))));
        arr_19 [i_5 - 2] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) ((2906981636531728682LL) * (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5])))))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3322073819903468066LL)) ? (7361342672877908193LL) : (-3980961192355221383LL)));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_19 = arr_18 [i_5];
            var_20 |= ((/* implicit */unsigned int) ((unsigned short) (signed char)-96));
        }
    }
    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (6245598814012990257LL)));
}
