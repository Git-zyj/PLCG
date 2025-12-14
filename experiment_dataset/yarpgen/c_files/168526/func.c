/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168526
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6163772945498301178LL)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_4))) <= (min((((/* implicit */unsigned long long int) var_11)), (var_3))))))));
    var_15 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)194))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-10528)) & (((/* implicit */int) (short)1167))))) : (((5U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)21462))))))));
    var_16 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) var_9)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_18 [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_1] [i_2 - 1] [i_4 + 3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)41))))) ? ((~(((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [i_2 + 1] [i_4 + 3])))) : (((/* implicit */int) min((arr_17 [i_3 + 3] [i_4] [i_2 - 2]), (((/* implicit */signed char) var_1)))))));
                                arr_19 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((((/* implicit */short) arr_17 [i_0] [i_1] [i_0])), (var_11))))))));
                                var_17 *= ((/* implicit */short) ((unsigned long long int) ((_Bool) arr_2 [i_4 + 4] [i_2 + 1])));
                                arr_20 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [12ULL] [i_0] [i_4])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)138))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_17 [i_2] [i_1] [i_0])) ? ((-(-803675622))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                    arr_22 [i_0] [i_1] = ((short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_4);
}
