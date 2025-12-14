/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18229
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
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) var_13)), (min((((((/* implicit */_Bool) var_12)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (-(var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (arr_3 [i_4 + 3]) : (((/* implicit */int) (short)32427))))) ? (min((arr_3 [i_4 + 2]), (arr_3 [i_4 + 2]))) : (min((arr_3 [i_4 + 3]), (arr_3 [i_4 - 1])))));
                                var_16 = ((/* implicit */unsigned int) ((_Bool) var_1));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((unsigned long long int) (short)(-32767 - 1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_2])))))));
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */short) arr_12 [4LL] [4LL] [i_2] [i_0] [i_1])), ((short)-32432))), (min((((/* implicit */short) (unsigned char)5)), (var_8))))))) : (arr_1 [i_0])));
                }
            } 
        } 
    } 
}
