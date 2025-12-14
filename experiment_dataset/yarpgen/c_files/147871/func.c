/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147871
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned char)0])) ? (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (arr_1 [i_1]))) : (((((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)40775))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24757))) / (5730592890466624697LL))) : (((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_7)))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min(((-(var_7))), (((arr_8 [i_3 + 3] [i_3 - 3] [i_3 + 1] [i_3 + 3]) - (((/* implicit */int) (unsigned char)46))))));
                                arr_13 [i_0] [i_1] [(short)7] = ((/* implicit */signed char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) != ((+(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) -1382366369))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_2);
}
