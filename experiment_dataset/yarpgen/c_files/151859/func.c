/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151859
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)63899)) ? (((/* implicit */int) (short)12800)) : (((/* implicit */int) (short)126)))) | (((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 3] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_15 ^= ((/* implicit */signed char) (unsigned short)1523);
                                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                                arr_15 [i_2 - 1] [i_0] [i_2 - 1] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2]))))) ? (arr_5 [(_Bool)1] [i_1 + 1]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_1])) : (var_8)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6138594344243065525ULL)) || (((/* implicit */_Bool) (unsigned short)1523))))), (arr_4 [i_1 + 3] [i_1 + 2] [i_0] [i_1])))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 + 1]))) > (var_0)))), (var_0)));
                }
            } 
        } 
    } 
    var_17 = var_5;
}
