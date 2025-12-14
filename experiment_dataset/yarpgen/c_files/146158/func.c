/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146158
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (var_9) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((signed char) var_2))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1048064ULL)) || (((/* implicit */_Bool) (+(min((arr_5 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */long long int) var_18)))))))));
                            var_20 = ((/* implicit */unsigned long long int) (!(min((min((var_14), (arr_6 [i_0] [(_Bool)1]))), (arr_9 [i_2] [i_2])))));
                            arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_5 [i_0] [i_1] [i_2] [i_3])))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1] [i_0]);
                var_21 = ((/* implicit */short) (!(((_Bool) (-(574208952489738240ULL))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_21 [i_6] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (arr_20 [i_4] [i_4] [i_6] [i_4]) : (((((((/* implicit */_Bool) (short)-32762)) && (((/* implicit */_Bool) 574208952489738240ULL)))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))));
                    arr_22 [i_4] = ((/* implicit */short) ((signed char) min((((signed char) (signed char)103)), (((/* implicit */signed char) arr_4 [i_5 + 1] [i_5 + 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        for (short i_8 = 3; i_8 < 13; i_8 += 3) 
        {
            {
                arr_28 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_29 [i_7 + 1] [i_7] [i_7] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) var_1)) : (max((((/* implicit */int) (_Bool)1)), (-2147483646)))))));
                var_22 = ((/* implicit */signed char) var_0);
            }
        } 
    } 
}
