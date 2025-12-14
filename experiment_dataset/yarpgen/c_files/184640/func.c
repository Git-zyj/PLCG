/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184640
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
    var_16 = ((/* implicit */short) ((0U) - (1988164647U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min(((~(arr_14 [(signed char)0] [14U] [i_2] [(_Bool)1] [(_Bool)1] [i_2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 1] [22U] [i_4 - 1] [(unsigned short)3] [i_4 + 1] [(unsigned char)20])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_4 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [11U]))) : (1988164647U)))) ? (((/* implicit */int) ((min((2306802643U), (((/* implicit */unsigned int) (unsigned short)20)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [i_0] [12U]))))))) : ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-8))))))));
                                var_18 = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */int) var_7)) << (((((((/* implicit */int) var_5)) + (25354))) - (3)))))), (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)11)))), ((+(((/* implicit */int) var_4)))))))));
            }
        } 
    } 
}
