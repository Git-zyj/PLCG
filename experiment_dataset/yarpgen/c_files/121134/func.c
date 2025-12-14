/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121134
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_2 [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_0] [i_0])), (arr_2 [i_0]))))))), (arr_0 [i_0])));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_4] [i_3] [i_2])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_10 [i_4 - 2] [i_1] [i_2] [i_1] [i_0]))));
                                arr_12 [i_1] [i_0] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((arr_1 [i_2]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_4]))))), (min((arr_8 [i_0] [i_2] [i_3] [i_0]), (((/* implicit */long long int) arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_2])))))) != (((/* implicit */long long int) ((/* implicit */int) (short)10385)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) ((3032137757763730016ULL) < (((/* implicit */unsigned long long int) var_0)))))));
    var_19 ^= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) var_12)))))))));
    var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_9)))))))));
}
