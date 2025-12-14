/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112335
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
    var_20 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (short)32764)))))) ? (((/* implicit */int) max(((unsigned char)157), (((/* implicit */unsigned char) (_Bool)1))))) : ((~(var_12))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) max((min((805306368U), (((/* implicit */unsigned int) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)15))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 3])) : (((/* implicit */int) arr_5 [i_0] [i_0 - 3])))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((signed char) max((arr_2 [i_0 - 3] [i_0 - 3]), (((/* implicit */long long int) arr_5 [i_0] [i_0 - 2])))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) 0ULL))) : (((((/* implicit */int) arr_1 [i_0 - 2] [i_1])) / (((/* implicit */int) arr_3 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_22 -= ((/* implicit */_Bool) max((min((arr_11 [i_1] [10LL] [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31914)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_0])), (max((((/* implicit */unsigned int) (unsigned char)163)), (var_18))))))));
                                arr_13 [i_0] [i_0 + 1] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1]))))), (min((((/* implicit */long long int) max(((signed char)-16), ((signed char)15)))), (max((((/* implicit */long long int) (short)-4)), (var_3)))))));
                                var_23 = max((8191U), (((/* implicit */unsigned int) (_Bool)1)));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_0 + 1])))))));
                }
            } 
        } 
    } 
}
