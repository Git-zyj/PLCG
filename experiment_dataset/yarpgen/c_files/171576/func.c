/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171576
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
    var_15 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [16U])) == (((/* implicit */int) var_4))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_3);
                    var_17 = ((/* implicit */int) var_6);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_0 - 1] [i_2 + 1] [i_0] [i_0] [i_4])) % (((/* implicit */int) max((((36028762659225600ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 2] [i_2] [i_3 - 2] [i_2 - 2]))))), (((((/* implicit */int) arr_1 [i_1] [i_0])) != (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_0] [(unsigned short)21] [i_0] [(unsigned short)21])))))))));
                                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (short)32256)) == (515338753))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0]))))) != (((/* implicit */int) ((unsigned short) arr_15 [i_3 - 2] [i_1] [i_2] [i_4] [i_1] [(short)2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
