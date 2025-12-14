/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136969
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) var_1);
        var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+((-2147483647 - 1))))) : (((unsigned int) 786232226U))));
        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (13526154868466523332ULL) : (((/* implicit */unsigned long long int) -2147483647))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (((12198346632137183700ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_17 += ((/* implicit */int) min(((-((~(var_13))))), (((/* implicit */unsigned long long int) min((min((var_1), (var_10))), (((((/* implicit */_Bool) -2147483637)) ? (((/* implicit */unsigned int) -2147483647)) : (2420432499U))))))));
                        arr_13 [9U] [i_2] [9U] [i_2] [i_3] [(short)7] = min((((/* implicit */int) ((short) min((((/* implicit */unsigned int) 2147483646)), (1556808432U))))), (((min((var_11), (((/* implicit */int) var_7)))) - (((/* implicit */int) var_6)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_18 [10U] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) -2147483646))))), ((+(var_1)))));
                            arr_19 [i_1] [i_1] [i_1] [9U] [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            arr_22 [i_6] = ((/* implicit */unsigned int) var_5);
                            arr_23 [(short)9] [i_6] [i_3] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1583921314U)) ? (4294967295U) : (((/* implicit */unsigned int) -2147483634))));
                            arr_24 [i_1] [i_1] [(short)6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25138)) ? (1U) : (((/* implicit */unsigned int) 716263272))))) && (((/* implicit */_Bool) var_6))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (1780204861U) : (((/* implicit */unsigned int) 716263272))))))))));
                        }
                        var_19 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) ((_Bool) (_Bool)1))), (min((1368411157U), (((/* implicit */unsigned int) var_8)))))));
                    }
                } 
            } 
        } 
        var_20 = ((min((4294967295U), (((/* implicit */unsigned int) min(((short)-32753), (((/* implicit */short) (_Bool)1))))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((2711045982U), (((/* implicit */unsigned int) (_Bool)0))))))));
        arr_25 [i_1] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) min((-1960372964), (((/* implicit */int) (_Bool)0))))))));
    }
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((var_5) - (((/* implicit */unsigned long long int) 3804311150U))))))));
    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_12) - (((/* implicit */unsigned int) 2147483634)))) << (((min((((/* implicit */unsigned int) -2147483630)), (1145384687U))) - (1145384656U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned int) var_13))))) : (((unsigned int) var_7))));
}
