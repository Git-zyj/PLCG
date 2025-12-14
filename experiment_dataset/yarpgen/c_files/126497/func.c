/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126497
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 1] [i_1] = ((/* implicit */long long int) ((unsigned short) (unsigned char)195));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_3 + 1]) ? ((~(((/* implicit */int) arr_8 [i_0])))) : (((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)0] [i_0 + 1]))))) && (arr_12 [i_0 - 1] [(_Bool)1] [i_2] [i_3] [i_4])));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_2] [1LL] [i_2 - 1])) ? (arr_11 [i_0] [i_1] [i_0] [(_Bool)1] [i_2 - 1]) : (arr_11 [i_0] [i_1] [i_0 + 1] [i_1] [i_2 - 4])));
                            }
                        } 
                    } 
                    var_20 = ((min((((((/* implicit */_Bool) 1574739440U)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1]))))), (((/* implicit */long long int) arr_11 [(_Bool)1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) + (((long long int) 922669244U)));
                    var_21 = ((/* implicit */short) ((arr_3 [i_0] [i_0]) ? (((/* implicit */long long int) 922669244U)) : (-18LL)));
                    var_22 = ((/* implicit */unsigned long long int) 1152921504606846975LL);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) -2LL);
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -2LL)))) : (var_8)));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (short)3190)) ? (((/* implicit */long long int) var_1)) : (-14LL))) : (((/* implicit */long long int) var_1))));
}
