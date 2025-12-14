/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143612
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((unsigned short) ((unsigned int) 2553577437U))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1741389858U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39)))))) ? (((/* implicit */int) max((arr_8 [i_3 - 2] [i_0 - 1] [i_2 + 1]), (((/* implicit */unsigned char) arr_13 [i_3 - 2] [i_0 - 1] [i_2 + 1] [i_1] [i_0 - 1]))))) : (((((/* implicit */_Bool) (unsigned char)39)) ? (((((/* implicit */_Bool) (short)11092)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) arr_13 [i_4] [i_0 + 1] [i_2] [i_1] [i_0 + 1])))) : ((-(((/* implicit */int) (unsigned short)16067))))))));
                                arr_14 [i_0] [(unsigned short)4] [i_4] [i_4] [(unsigned short)4] = ((/* implicit */unsigned short) max((((/* implicit */int) min(((unsigned short)16083), (((/* implicit */unsigned short) (signed char)-1))))), (((int) min((((/* implicit */unsigned short) (unsigned char)216)), ((unsigned short)16059))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1]))) : (2931289046061601065LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)0)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))) : (18446744073709551589ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18132788212854724941ULL)))))));
                }
            } 
        } 
    } 
}
