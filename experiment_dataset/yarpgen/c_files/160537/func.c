/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160537
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
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((875138865U) << (((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (2313103033U)))) : (((/* implicit */int) var_10))))));
                var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_0 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0 - 3] [i_0 + 1]), (arr_0 [i_0 - 2] [i_0 - 3]))))) : (875138863U)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)3231)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)195)))))))));
                            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-((+(var_13)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = min((((/* implicit */long long int) (~((~(((/* implicit */int) var_11))))))), (-1862854232017759624LL));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)10)) != ((-(((/* implicit */int) var_0))))));
    var_22 -= ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (875138865U)))) ? (max((875138865U), (((/* implicit */unsigned int) var_10)))) : (((unsigned int) var_9)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))));
}
