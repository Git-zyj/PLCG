/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145931
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_5 [i_1 + 4] [12LL])))) ? (((3681300582U) << (((((/* implicit */int) var_9)) + (31268))))) : (max((arr_5 [i_1 + 1] [i_1]), (((/* implicit */unsigned int) (short)32767))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((unsigned char) 613666706U));
                            arr_11 [i_3] = ((/* implicit */unsigned int) ((int) arr_7 [i_2 - 1] [i_1 - 1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            arr_19 [i_5] = ((/* implicit */short) min(((+(((/* implicit */int) arr_14 [i_1 + 3] [i_4] [i_1 + 3] [i_5])))), (((((/* implicit */int) arr_14 [i_1 + 3] [i_4] [i_1 + 3] [i_1 + 3])) - (((/* implicit */int) arr_14 [i_1 + 3] [i_1 + 3] [i_4] [i_5]))))));
                            arr_20 [i_0] [(signed char)7] [(signed char)7] [i_5] = max((((int) 613666713U)), (((/* implicit */int) ((short) var_5))));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) 3681300582U)) || (((/* implicit */_Bool) 613666719U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_11);
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))) + (4294967295U)));
}
