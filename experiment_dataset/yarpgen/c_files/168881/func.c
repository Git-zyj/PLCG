/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168881
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) >> (((/* implicit */int) var_4))));
                arr_4 [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_16)) * (((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) > (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))))));
                                var_21 ^= ((/* implicit */unsigned int) (-(var_8)));
                                arr_14 [i_0] [i_1] [12U] [i_3 + 1] [i_4] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) max((((((/* implicit */unsigned long long int) arr_8 [i_0 + 2] [(_Bool)1] [(unsigned char)9] [i_0 + 2])) > (var_6))), (((_Bool) arr_5 [i_0] [i_0] [(short)5]))))), (arr_9 [(unsigned char)10] [(unsigned char)13] [4] [i_2] [i_3] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (short)15764);
}
