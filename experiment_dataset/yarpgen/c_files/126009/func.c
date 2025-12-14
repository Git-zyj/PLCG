/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126009
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
    var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)21)) ? (2147483647) : (((/* implicit */int) (unsigned short)18489))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) > (var_11))))) : (max((((/* implicit */long long int) 533258165)), (3664061010266558872LL)))))))));
    var_13 = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) (signed char)117))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)4))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (_Bool)1);
                            var_16 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0]);
                            var_17 &= ((/* implicit */unsigned long long int) ((unsigned char) arr_2 [(signed char)14]));
                            var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0 + 1] [i_1] [i_0])) ? ((~(((/* implicit */int) (signed char)4)))) : ((~(((/* implicit */int) (unsigned short)37616))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
