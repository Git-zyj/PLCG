/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125165
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [8] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-4677))))) ? (((529296269U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1])), (var_13))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(signed char)0])) ? (((((/* implicit */_Bool) (unsigned char)110)) ? (var_6) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))));
                    arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)110)) % (((/* implicit */int) var_0))));
                }
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    arr_14 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-13970))))) ? (((/* implicit */int) max((arr_9 [i_0]), (((/* implicit */unsigned char) arr_3 [i_0] [i_1]))))) : (((/* implicit */int) ((short) var_10)))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)10] [i_0] [i_3])) ? (((/* implicit */int) (short)13970)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) arr_1 [i_0])))))) : (min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9)))), (((/* implicit */int) var_13))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                arr_20 [i_5] [i_4] [i_5] [i_0] [i_5] [i_0] [i_0] &= arr_3 [i_0] [0U];
                                var_15 = ((/* implicit */_Bool) (short)13969);
                            }
                        } 
                    } 
                    arr_21 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])) - (((((/* implicit */_Bool) (short)20457)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [7U] [i_3] [i_1] [i_1] [i_0] [i_0]))))));
                }
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    arr_25 [i_1] [i_1] = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_1] [i_0])) / (max((arr_17 [i_0] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_13))))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                arr_32 [i_1] [i_1] [i_6] [i_1] [i_8] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) arr_18 [(short)9] [i_1] [i_1] [i_1] [(short)9])) - (-475836652714066463LL))) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((int) (-(arr_18 [(unsigned short)5] [i_0] [i_0] [i_1] [i_0]))))) : (var_6)));
                                arr_33 [i_1] [i_1] [(unsigned short)5] = ((short) ((((/* implicit */int) arr_2 [i_0] [i_1])) & (arr_19 [i_0] [i_1] [i_6] [i_1] [i_0])));
                                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-13978))));
                                arr_34 [i_0] [i_0] [i_6] [i_1] [i_8] = (~(((((/* implicit */int) (signed char)63)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_1] [i_6])) ? (((/* implicit */int) arr_28 [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_0])))))));
                    arr_36 [i_0] [i_6] [i_6] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (short)-13983)) : (arr_19 [13U] [i_1] [i_6] [i_1] [i_0]))) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((1582261785U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)4034))))))) : (((((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_1] [i_1] [6U])) / (475836652714066462LL))) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_31 [i_0] [i_0] [i_0] [i_1] [i_0]))))))));
                }
                var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((var_3) - (((/* implicit */int) (short)-13972))))) > (var_2))) && (((((/* implicit */long long int) ((/* implicit */int) var_4))) > (((var_6) / (var_6)))))));
                arr_37 [i_1] = ((/* implicit */short) ((long long int) arr_30 [i_1] [(_Bool)1]));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_11))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_7))))) & (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_13)) + (var_3))) : (((/* implicit */int) (short)-29353))))), (var_1)));
}
