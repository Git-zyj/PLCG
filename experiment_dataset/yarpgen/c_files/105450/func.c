/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105450
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
    var_15 = ((/* implicit */int) 1223356482U);
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [(short)2] [i_0 - 2] [(short)2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(short)14]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-32123)) || (((/* implicit */_Bool) arr_2 [16U] [16U] [16U]))))) : (((((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) * (((/* implicit */int) (unsigned short)47374))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > ((-(((/* implicit */int) arr_1 [(signed char)8]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((!(arr_3 [(_Bool)1]))))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) var_10);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) (-(-7LL)));
                            arr_14 [i_1 + 1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) (signed char)127)))))) + (min((arr_8 [i_2] [i_1 + 1]), (arr_8 [i_2 - 2] [i_1 + 1])))));
                            arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5474)) / (((/* implicit */int) (short)-31834))))) ? (min((18446744073709551610ULL), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_0] [i_1] [i_1 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1] [i_0] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1] [i_0] [i_1 + 1] [i_1 - 1])))))));
                            arr_16 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */short) arr_12 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_2 - 1] [i_3])), ((short)-1)));
                            arr_17 [i_0 - 2] [4] [4] [i_0 - 2] [i_3 + 1] [(unsigned char)0] = ((/* implicit */unsigned short) arr_11 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
