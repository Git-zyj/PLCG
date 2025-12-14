/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158126
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            {
                var_13 = arr_3 [i_0];
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned long long int) arr_0 [6U] [i_1 + 3]);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_5 [i_0] [i_1 + 1] [i_2] [i_1 + 3]))) * (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2] [i_1 - 2]))));
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_11 [i_4] [6U] [i_2 - 1] [i_1 - 2] [i_1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (((var_12) >> (((((/* implicit */int) var_1)) - (61)))))))) | (((/* implicit */int) var_2))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_4))));
    var_19 = ((/* implicit */unsigned long long int) var_10);
    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) (-(2101793615U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? ((((_Bool)1) ? (8062740823189620310ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))))))));
}
