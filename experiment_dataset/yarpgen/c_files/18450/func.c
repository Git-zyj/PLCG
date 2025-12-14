/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18450
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) (unsigned short)22556))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 |= ((/* implicit */short) max((((var_16) / (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_1]))) : (arr_0 [(short)13] [i_2])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_0 [(short)9] [i_2])) : (5200213857965324602ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_2 [i_1] [i_1] [i_2]), (arr_2 [i_1] [i_2] [i_2])))) / (((/* implicit */int) max((arr_2 [i_1] [i_1] [i_2]), (arr_2 [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_11 [i_2] [7ULL] [i_2] [i_4 - 1] [i_3])) << (((((/* implicit */int) var_4)) - (20389))))) % (((/* implicit */int) ((short) arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_4 + 2] [(unsigned short)1])))));
                                var_24 = ((/* implicit */unsigned char) -1767097728);
                                var_25 &= ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3]))) : (var_3))))))));
                                var_26 = ((/* implicit */unsigned long long int) ((long long int) arr_12 [i_2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 - 1]));
                                arr_13 [12LL] |= min((((/* implicit */int) var_8)), (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5)))) % (((/* implicit */int) ((unsigned short) var_2))))));
                            }
                        } 
                    } 
                    var_27 = var_13;
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) -2030686347)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((var_17), (((/* implicit */signed char) var_8))))) : ((-(((/* implicit */int) var_7)))))))))));
}
