/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181767
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
    var_16 = ((unsigned char) 3475869373294471664ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_4 - 1] [i_1 + 2])))))));
                                var_18 *= ((/* implicit */unsigned long long int) var_3);
                                arr_11 [i_0] [(signed char)8] [i_2] [i_3] [(short)0] = min((((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_1 - 1] [i_1] [i_4 - 1] [i_4 + 1]))), (max((((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [(signed char)9] [(signed char)9] [i_4 - 2])), (16651126759579472873ULL))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) var_0)))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_8 [i_1] [i_1 + 3] [i_0] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 - 2])) | (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)9] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 1] [i_1 + 3])) : (((/* implicit */int) (unsigned short)40900)))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (!(var_14)));
    var_22 = ((/* implicit */_Bool) var_5);
}
