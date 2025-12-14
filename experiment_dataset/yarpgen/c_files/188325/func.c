/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188325
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
    var_18 += ((/* implicit */int) var_7);
    var_19 += var_0;
    var_20 = ((/* implicit */unsigned short) ((long long int) ((var_15) == (((/* implicit */int) min(((unsigned short)58563), (var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((1851126358) + (((/* implicit */int) arr_0 [(unsigned short)7]))))) || (((/* implicit */_Bool) arr_0 [7])))) ? (((unsigned int) arr_1 [i_1 - 1] [i_1])) : (((/* implicit */unsigned int) ((((-316841988) <= (((/* implicit */int) (short)6711)))) ? (arr_1 [(_Bool)1] [i_1 - 1]) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) -1381078170760075156LL);
                            arr_10 [i_1] [2ULL] [7LL] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) -16777216))), (arr_5 [i_1] [1ULL])))) ? (((((/* implicit */_Bool) ((int) (unsigned short)47481))) ? (((/* implicit */int) (unsigned short)18079)) : (min((arr_1 [i_2] [1]), (var_6))))) : (((/* implicit */int) max((arr_8 [i_1] [i_1 - 1] [(unsigned short)2] [i_1]), ((unsigned short)47457))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] = ((/* implicit */int) ((-588701972939814392LL) / (((/* implicit */long long int) ((/* implicit */int) var_14)))));
            }
        } 
    } 
}
