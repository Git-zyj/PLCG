/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122280
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
    var_19 = ((/* implicit */unsigned char) var_0);
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (((+(((/* implicit */int) var_9)))) > (((/* implicit */int) (signed char)45))))), ((unsigned short)4096)));
    var_21 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0 + 3] [i_0 + 3]))))), ((+(max((1023U), (((/* implicit */unsigned int) (unsigned short)48031))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) arr_2 [i_2] [i_0 - 1] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) min(((short)6747), ((short)-6748)))) & (((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))))));
                            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [(_Bool)1] [1U] [i_0] [(short)17] [i_0] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_3])) + (24447))) - (9)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_13))))), (((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 + 3])) && (((/* implicit */_Bool) (unsigned short)43271))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_13))) >= (((/* implicit */int) var_9))))) <= (((var_8) ? (((/* implicit */int) (short)6767)) : (((/* implicit */int) var_2))))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)3606)) : ((~(((/* implicit */int) (_Bool)0))))))) ? (min((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_3)))))) : (((/* implicit */int) (short)6747))));
}
