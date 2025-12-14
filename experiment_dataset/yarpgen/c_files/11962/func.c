/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11962
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
    var_12 -= ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775808ULL)) ? (((/* implicit */int) (unsigned short)35227)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (11094861365668020678ULL))))));
                                arr_11 [i_4] |= ((/* implicit */unsigned short) ((max((9361369224051980291ULL), (9361369224051980291ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-18216), ((short)-18216)))))));
                                var_14 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)18215)) >= (((/* implicit */int) arr_9 [i_0] [i_0] [i_4] [i_3] [i_4 - 2])))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) max((arr_9 [i_1] [i_3] [i_2] [i_2] [i_4 + 4]), (arr_9 [i_0] [(unsigned char)10] [i_2] [12U] [i_4 + 2]))))));
                                var_15 |= ((/* implicit */unsigned int) 16466163578647061554ULL);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) (short)18216);
                    var_17 = ((/* implicit */unsigned int) max((min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 365489231)) | (4070911827597775820LL)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1])))))));
                }
            } 
        } 
    } 
}
