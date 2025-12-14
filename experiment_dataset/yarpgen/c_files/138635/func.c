/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138635
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 *= ((arr_0 [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21139))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) max(((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) var_0))));
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (unsigned short)11637))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (long long int i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((var_10), (min((((/* implicit */long long int) arr_9 [i_6] [i_7 - 1] [i_6] [i_6])), (((long long int) arr_11 [16LL])))))))));
                                var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1663878836933497080LL)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8]))) : (arr_1 [i_7 - 1] [i_7 - 1]))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (var_10))))) - (((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (min((var_8), (((/* implicit */long long int) (unsigned short)55809)))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)0] [i_4] [i_4])))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) arr_0 [i_5] [i_5]))))) - (((/* implicit */int) var_6))));
                                var_18 -= ((/* implicit */unsigned char) ((long long int) min((arr_11 [(unsigned char)10]), (arr_11 [(unsigned short)8]))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_9))))) ? (arr_1 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [15U] [i_5] [i_5] [i_4])))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)60423)))))))))));
                arr_26 [i_4] [i_4] = ((/* implicit */_Bool) arr_3 [i_4]);
            }
        } 
    } 
}
