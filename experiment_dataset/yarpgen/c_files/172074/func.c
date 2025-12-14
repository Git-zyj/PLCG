/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172074
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)105), (var_2))))) : ((~(var_0))))))));
    var_15 = ((/* implicit */unsigned char) max((4126532061787941823LL), (((long long int) min((((/* implicit */unsigned int) (unsigned char)122)), (var_6))))));
    var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned char) (~(((((/* implicit */int) (unsigned short)58777)) ^ (((/* implicit */int) (unsigned char)9))))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((unsigned int) (-(0LL)))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3])))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_2 [i_4]))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((min((((/* implicit */long long int) (unsigned char)254)), (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (var_0)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
