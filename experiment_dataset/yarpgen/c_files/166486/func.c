/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166486
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
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 += ((/* implicit */int) ((unsigned char) var_7));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (unsigned short)63009;
        var_20 = ((/* implicit */_Bool) var_10);
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) var_16);
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */int) var_0);
                                arr_20 [i_2] [i_2 + 1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) (short)1041);
                                arr_21 [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) == (((int) arr_4 [i_1])))) || (((/* implicit */_Bool) ((unsigned char) -1086977684)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) max((var_5), (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)-13), (((/* implicit */short) arr_18 [i_1] [i_2] [i_2 - 3] [i_2 - 3] [i_3]))))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) % (((/* implicit */int) arr_23 [i_6] [i_6])))) != (((((/* implicit */int) var_1)) >> (((var_3) + (1107033081)))))));
        var_24 = arr_22 [i_6];
        var_25 = ((/* implicit */int) arr_22 [i_6]);
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) (((+(((((/* implicit */long long int) ((/* implicit */int) (short)-5065))) + (var_9))))) + (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    }
}
