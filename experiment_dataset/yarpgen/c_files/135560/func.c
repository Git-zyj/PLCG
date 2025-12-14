/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135560
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
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_12))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) 35542235))) && (((/* implicit */_Bool) min(((signed char)111), (((/* implicit */signed char) (_Bool)1))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-9024)) : (((/* implicit */int) (unsigned char)143))))), (arr_3 [i_1] [i_2]))))));
            arr_7 [(unsigned short)2] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)35336)) + (arr_5 [(unsigned short)8])))), (((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1])) ? (((var_8) - (var_7))) : (((/* implicit */unsigned long long int) arr_5 [6U]))))));
        }
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_16 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_2)))) == (((((/* implicit */_Bool) arr_6 [i_1])) ? (min((var_8), (((/* implicit */unsigned long long int) arr_5 [i_1])))) : (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_2))))))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_19 [(unsigned char)2] [i_1] [i_4] [i_1] [(unsigned char)2] = ((/* implicit */unsigned char) var_9);
                            var_17 = ((/* implicit */unsigned long long int) arr_5 [i_4]);
                            var_18 = ((/* implicit */short) ((unsigned long long int) var_6));
                            var_19 = (-(min((((/* implicit */int) ((arr_10 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))))), ((+(((/* implicit */int) (_Bool)1)))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(short)10] [i_4] [(short)10])) ? (max((((((/* implicit */_Bool) (unsigned short)32289)) ? (((/* implicit */int) (_Bool)1)) : (-1207422494))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)29998)))))) : (((/* implicit */int) arr_17 [i_6] [i_5] [i_5] [(short)9] [i_1] [i_1]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) (~(-1207422482)))) >= (((unsigned int) var_5)))));
        }
        var_22 ^= ((/* implicit */unsigned long long int) (((!(var_12))) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_3))));
    }
}
