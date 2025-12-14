/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127859
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
    var_16 = ((/* implicit */unsigned char) ((max((max((var_0), (((/* implicit */long long int) (unsigned char)73)))), (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))) + (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (short)13504)))), ((-(((/* implicit */int) arr_0 [i_1]))))));
                arr_6 [i_0] [i_0] [7LL] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_3 [i_0] [i_0])), ((-(((/* implicit */int) max(((unsigned short)54917), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 - 2]))) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 3])))))));
                            arr_12 [i_2] [i_3] [i_3] [i_3] = var_2;
                        }
                    } 
                } 
            }
        } 
    } 
}
