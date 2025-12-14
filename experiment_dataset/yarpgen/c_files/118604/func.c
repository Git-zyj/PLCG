/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118604
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
    var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1591145669U)) || (((/* implicit */_Bool) var_15)))))))), (((/* implicit */long long int) var_10))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) 4294966272U)) ? ((~(4874886243180654612LL))) : (((4874886243180654612LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))));
                    arr_9 [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 + 1] [i_0])))))) : (arr_6 [i_0 - 2] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_21 = var_14;
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                arr_15 [i_4] = ((/* implicit */unsigned int) max((arr_13 [i_4]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_13 [i_4])))))));
                var_22 ^= ((/* implicit */unsigned int) (signed char)-125);
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) (+(arr_14 [i_4])))) ? (((arr_14 [i_3]) / (((/* implicit */long long int) 30U)))) : (((/* implicit */long long int) ((var_12) + (arr_10 [i_4]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
}
