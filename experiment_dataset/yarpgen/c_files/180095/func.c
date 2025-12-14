/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180095
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
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1))))));
    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_2)))) : ((+(var_12)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52159))) ^ (max(((+(var_4))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (var_10))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (~(max((((arr_1 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), ((~(((/* implicit */int) ((short) arr_6 [i_0] [i_1] [i_2] [6ULL])))))));
                                var_22 = ((/* implicit */long long int) max((var_22), (min((var_2), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [6ULL] [i_1] [i_2] [i_2] [i_4]))))), (max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_10))))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) (((~(arr_7 [i_0 - 2] [i_2] [i_1] [i_2]))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_1] [i_0])), ((~(arr_4 [(_Bool)1] [(short)5]))))))));
                }
            } 
        } 
    } 
}
