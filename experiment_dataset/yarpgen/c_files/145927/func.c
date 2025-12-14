/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145927
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
    var_17 |= ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [(_Bool)1])))), (((((/* implicit */_Bool) 5396917429034319368LL)) ? (((/* implicit */int) (unsigned short)64286)) : (((/* implicit */int) (short)4112))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_14 [13U] [13U] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [(signed char)21] [i_0])))))));
                            var_18 = ((/* implicit */unsigned int) (~(-4415495381659619674LL)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((max((((/* implicit */long long int) (+(3145728U)))), ((~(arr_10 [i_1] [i_1] [i_0] [i_0 + 1]))))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (arr_3 [i_0 + 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)27368)))))));
                var_20 = ((/* implicit */unsigned int) min((max(((-(-4314817420241274018LL))), (((/* implicit */long long int) ((signed char) arr_2 [i_1] [i_1]))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) -4103896211988921916LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)64286)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))))));
                var_21 = ((/* implicit */unsigned short) 2048U);
            }
        } 
    } 
    var_22 *= ((/* implicit */short) var_12);
    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) >= (((/* implicit */int) var_2)))) ? (min((((/* implicit */long long int) ((unsigned int) (signed char)15))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))));
}
