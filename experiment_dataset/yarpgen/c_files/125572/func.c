/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125572
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
    var_13 |= ((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
    var_14 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) < (var_5)))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned char)165))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : ((+(11378505818955051641ULL))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0 + 2] [i_1] [i_3] |= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)34))));
                                var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (var_11)))) ? (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [10ULL] [i_0 + 2])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_4] [i_0] [i_0 - 1] = ((/* implicit */signed char) (unsigned short)18793);
                                var_16 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)1))));
                                var_17 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)227)), (var_0)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [i_0]))))));
                            }
                        } 
                    } 
                    arr_13 [i_0 + 1] [i_0] [(unsigned short)5] = ((/* implicit */unsigned char) max((var_2), (((/* implicit */unsigned long long int) min((arr_1 [i_2]), (((/* implicit */unsigned int) var_4)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                arr_20 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_17 [i_6]))) ? (min((((/* implicit */unsigned long long int) arr_15 [i_5])), (arr_16 [i_5]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
            }
        } 
    } 
}
