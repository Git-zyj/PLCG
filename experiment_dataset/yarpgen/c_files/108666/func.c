/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108666
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1596494557)) ? (var_3) : (((/* implicit */int) var_12))))), (var_5))) << (((((max((((/* implicit */unsigned long long int) var_8)), (var_13))) ^ (((unsigned long long int) (_Bool)1)))) - (18446744073709551575ULL))))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_5))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_10)))), (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) -1596494561))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (max((((min((((/* implicit */int) var_11)), (var_3))) ^ (((((/* implicit */int) arr_5 [i_2] [i_1 - 1] [i_2] [i_0 + 1])) << (((arr_4 [i_0]) - (1738376560))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_1] [i_2])), (var_12)))))))))));
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 1]))))), (arr_4 [i_0 - 1])));
                    arr_6 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (((unsigned long long int) -1596494561))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((max((((/* implicit */int) (_Bool)1)), (127))) ^ (((/* implicit */int) arr_7 [i_4] [i_4] [10U] [i_4] [i_4])))))));
                                arr_15 [i_4] [i_4] [i_2] [i_4] [(short)10] |= ((/* implicit */signed char) arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
