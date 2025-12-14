/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121252
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
    var_16 = max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) -8935189266551965320LL)) ? (-8935189266551965320LL) : (-7756166814187264698LL))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) arr_2 [i_0] [i_0] [i_2 - 1]))) >= ((~(((3929546179378116288LL) << (((3929546179378116288LL) - (3929546179378116288LL)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            var_18 &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) -8935189266551965319LL))))) ? (((18446744073709551608ULL) >> (((((/* implicit */int) var_5)) - (76))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_0])))))));
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)0)), ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 1]))))));
                        }
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((var_1) ? (447108739) : (var_13))))), ((~(((/* implicit */int) var_7)))))))));
                        var_21 *= ((/* implicit */signed char) var_9);
                    }
                    arr_13 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_12 [i_2 + 1] [7LL] [i_2 + 1] [i_2 - 1]) == (((((/* implicit */_Bool) var_5)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) >= (((/* implicit */int) arr_10 [i_2] [i_2] [i_1] [i_2] [i_2]))));
                    var_22 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)127))))), (((((/* implicit */_Bool) 16568709222536457202ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (9223372036854775807LL)))));
                    var_23 = ((/* implicit */unsigned short) ((-128LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-105)))));
                }
            } 
        } 
    } 
}
