/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124983
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((unsigned int) ((signed char) arr_8 [i_0] [i_1] [i_1] [i_2])));
                    arr_10 [i_0] [i_1] [(_Bool)1] = ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_2])))) ? ((-(var_18))) : (((/* implicit */int) var_19))))) : (((long long int) arr_5 [i_0] [i_0] [i_2]))));
                }
            } 
        } 
    } 
    var_22 = (-(((((/* implicit */int) var_6)) * (((/* implicit */int) var_14)))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (max(((~(((/* implicit */int) (signed char)39)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                var_24 *= ((/* implicit */signed char) ((short) min(((+(var_0))), (((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) (short)0))))))));
                var_25 *= ((/* implicit */unsigned char) max((((arr_12 [i_3] [i_4]) >> (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_19)))))), (((/* implicit */long long int) ((signed char) var_17)))));
                var_26 -= ((/* implicit */unsigned int) -470744612975375548LL);
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (arr_12 [i_3] [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (short)5949))))) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_12 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-30)))))))))));
            }
        } 
    } 
}
