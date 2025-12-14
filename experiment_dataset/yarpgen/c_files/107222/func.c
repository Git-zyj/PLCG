/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107222
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0 + 1] = min((((unsigned char) arr_2 [i_0 + 2])), (((/* implicit */unsigned char) arr_2 [i_0])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_1])) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_1 [i_0 + 2])))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_8))) > ((+(((/* implicit */int) ((unsigned short) arr_2 [i_0 + 2])))))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((long long int) (_Bool)1)), (((/* implicit */long long int) ((int) arr_4 [i_0 + 1] [i_0 + 1])))));
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_1 [i_0]))));
        }
        arr_9 [i_0 - 1] = ((/* implicit */unsigned short) min((((unsigned char) arr_5 [i_0] [i_0 + 2] [i_0 - 1])), (((/* implicit */unsigned char) (_Bool)1))));
        arr_10 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_1)))) + ((~(var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), ((short)4064))))) : (min((arr_4 [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 3; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_15 [(unsigned short)6] [i_3] [i_2] [(unsigned short)6] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 626564886)) ? (arr_14 [(unsigned char)8] [i_3 - 3] [i_3 + 1] [i_3]) : (((/* implicit */long long int) var_3)))) | (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-1)))) & (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)85)))))))));
                    arr_16 [i_0 + 1] [i_0] [i_2] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) ((_Bool) (unsigned short)58366))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((2524151964U) - (2524151957U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_6)))) ? (min((var_0), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) (((_Bool)1) ? (1213198644U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */long long int) (((+(4294967265U))) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_3] [i_4])))))))))))));
                                arr_23 [i_0 + 2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_2])) - (min((((/* implicit */unsigned long long int) ((long long int) 12U))), (min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) 3458426403U))))))));
                                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_3] [i_3] [i_2] [i_2] [i_4] [i_4])) ? (((/* implicit */int) arr_19 [i_5] [i_4] [i_3 - 1])) : (((/* implicit */int) arr_11 [i_2] [i_4]))))) ? ((~(((/* implicit */int) arr_19 [i_0] [i_3 - 1] [i_5])))) : (var_3))) >= (((/* implicit */int) arr_21 [i_5]))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (((_Bool)1) || (((/* implicit */_Bool) (short)-4065)))))) - (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_13 [i_0] [i_2])) << (((8378956866866897472LL) - (8378956866866897471LL)))))))));
                                var_18 *= ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                    arr_24 [i_0 - 1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_4 [i_0] [i_3]);
                }
            } 
        } 
    }
    var_19 = ((var_8) >> (((var_8) - (1407681095))));
}
