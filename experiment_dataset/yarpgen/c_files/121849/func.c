/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121849
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
    for (signed char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 *= ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 4])))))) && (((/* implicit */_Bool) (((+(var_10))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-2628))))))));
                    arr_7 [i_1] = ((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) arr_2 [i_0 + 1] [i_1 + 1] [i_2])))))));
                    var_16 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)228))))))) ? (((unsigned int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                    arr_8 [i_2] [i_0] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8))))), (min(((signed char)-33), ((signed char)-19)))))), (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1127605931)) ? (max((((/* implicit */long long int) (_Bool)1)), ((~(var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_7)))))));
}
