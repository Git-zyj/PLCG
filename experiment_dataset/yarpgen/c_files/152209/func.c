/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152209
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min(((signed char)7), ((signed char)8))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */signed char) (-(((max((((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_1] [(short)3])), (var_11))) & (max((3345440064U), (((/* implicit */unsigned int) (signed char)59))))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_11)))) ? ((-(((/* implicit */int) (signed char)41)))) : (((/* implicit */int) var_7))))) == (((unsigned int) (-(((/* implicit */int) (signed char)-86)))))));
                            arr_11 [i_3] [i_1] = ((/* implicit */short) (+(max((var_10), (((/* implicit */unsigned long long int) max((-470353684488650524LL), (((/* implicit */long long int) 1602045603U)))))))));
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2])))))));
                            var_17 = ((/* implicit */int) var_9);
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) 2097151U);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    arr_20 [i_6] = ((/* implicit */unsigned long long int) (+((-(var_6)))));
                    var_20 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_16 [i_4] [i_5])) : (((/* implicit */int) max((var_2), (((/* implicit */short) (signed char)-73)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned int) max(((signed char)-11), ((signed char)64)));
                                var_22 = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
