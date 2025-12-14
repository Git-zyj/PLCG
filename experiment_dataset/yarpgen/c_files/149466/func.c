/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149466
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_1] [17U] [i_0] = ((/* implicit */int) min(((+(var_11))), (((1789952891476078544LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 3] [i_1 + 3])))))));
                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)41029))))))) >> (((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16)))) + (arr_2 [i_0 - 2] [i_0 - 1]))) - (872239935)))));
                var_21 += ((/* implicit */short) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_3 [(short)14] [i_1])) || (((/* implicit */_Bool) 2946801598U))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_9 [(unsigned short)6] [(unsigned short)6] |= ((/* implicit */short) 914002521970070925LL);
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) 1789952891476078533LL))), (var_6)))) ? (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_0 - 1])), (arr_6 [i_0] [i_0 + 2] [i_1 - 1])))) : (((/* implicit */int) ((_Bool) var_10)))));
                    arr_10 [7U] [i_0] = min((((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_6))), (arr_0 [i_0 + 1]));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1])) * (((/* implicit */int) (_Bool)0)))) + ((~(((/* implicit */int) var_1)))))))));
                    var_24 -= min((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-25867)) ? (((/* implicit */int) arr_11 [(unsigned char)0] [i_1 + 3] [(_Bool)1])) : (((/* implicit */int) var_2))))) >= ((-(var_11))))), (((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) || (((/* implicit */_Bool) (((_Bool)1) ? (-1999879517) : (((/* implicit */int) (short)-25867))))))));
                    arr_13 [18U] [18U] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)504)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_25 *= ((/* implicit */short) arr_2 [i_0 - 1] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) arr_16 [i_1 + 3] [i_0 + 1])) << (((2234207627640832LL) - (2234207627640802LL)))))));
                                var_27 ^= ((/* implicit */signed char) ((((/* implicit */int) ((3829039808U) <= (((/* implicit */unsigned int) -1988479095))))) != ((-(((/* implicit */int) var_4))))));
                                arr_22 [i_5] [i_0 - 2] [i_1] [12LL] [i_5] [i_6] = ((/* implicit */signed char) arr_19 [i_0] [i_0] [i_1 + 2] [(_Bool)1] [i_1 + 2] [(short)13] [(short)13]);
                                var_28 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_5 [i_1 + 1])))));
                                var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 1] [i_0])) || ((!(((/* implicit */_Bool) 6ULL))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((unsigned short) (short)32744)))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    arr_25 [i_0] [i_0 - 2] [(short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 1789952891476078544LL))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (short)-504))));
                    var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    var_32 = ((/* implicit */int) ((((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned short)7] [i_7]))))) || (((/* implicit */_Bool) (((-2147483647 - 1)) % (((/* implicit */int) arr_5 [i_7])))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) var_17);
}
