/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148127
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
    var_12 = ((/* implicit */short) var_9);
    var_13 &= (~(max((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31479))))), (((/* implicit */unsigned long long int) min((var_11), (var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)31479)))), (((/* implicit */int) max(((short)(-32767 - 1)), ((short)31479))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (arr_2 [i_1] [i_4 + 1]))))) >= (max((((/* implicit */int) var_0)), (1504454199))))))));
                                var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32760))))), ((~(arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)-17634)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [15] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) (unsigned short)0)))) : ((~(((/* implicit */int) (short)-31465))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((var_4), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))))));
}
