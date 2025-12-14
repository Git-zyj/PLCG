/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141764
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
    var_13 = ((/* implicit */unsigned long long int) var_7);
    var_14 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-82)) || (((/* implicit */_Bool) var_2)))))) : ((~(3251326U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1023)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)1223))))))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */unsigned long long int) var_8)) : (((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_8 [i_3] [i_2] [7LL] [i_0])) : (((/* implicit */int) var_11)))))));
                            arr_12 [1] = ((/* implicit */int) (~((+(arr_7 [i_1] [i_2] [i_3])))));
                            var_17 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_2] [i_2]);
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */_Bool) var_10);
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) 7ULL)))))) : ((~(((/* implicit */int) var_11))))));
}
