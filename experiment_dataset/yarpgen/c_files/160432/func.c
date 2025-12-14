/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160432
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (var_8)));
    var_16 = ((/* implicit */unsigned short) ((var_2) > (var_1)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) arr_7 [i_0 + 3] [i_0 - 1] [i_0 - 1]);
                                var_18 = ((/* implicit */unsigned short) (+(max((arr_12 [i_0] [(unsigned char)11] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 2]), (arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 2])))));
                            }
                        } 
                    } 
                } 
                var_19 = max(((~(((/* implicit */int) (unsigned short)511)))), (((((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0])) & (((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 3] [i_0] [i_0 - 2] [i_0 + 1] [(unsigned char)0])))));
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) arr_5 [8LL] [8LL] [i_0]);
                var_20 = ((12674099224227908906ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 3])) * (((/* implicit */int) var_14))))));
            }
        } 
    } 
    var_21 *= ((((/* implicit */_Bool) -1985215723)) ? (((((/* implicit */unsigned long long int) 2097151U)) + (min((((/* implicit */unsigned long long int) (short)-17068)), (var_0))))) : (var_6));
}
