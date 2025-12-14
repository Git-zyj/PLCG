/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16131
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((-(var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2892993588U)) ? (149238280) : (((/* implicit */int) (short)-15085))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1])) <= (((/* implicit */int) var_13))))) : ((+(((/* implicit */int) var_0))))));
                arr_6 [(signed char)6] [i_1] [i_1 + 2] = arr_1 [9U];
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) var_18);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((var_10) | (arr_11 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2] [i_1 + 1] [i_1])));
                                arr_13 [i_4] [i_4] [i_2] [i_1] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 1] [i_2 - 1] [i_4 - 1] [i_4 - 1])))));
                                arr_14 [i_4] [i_4] [i_4] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_2] [i_3]))))));
                                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0 - 4] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 3] [i_3]))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_26 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) arr_7 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 149238280)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((short) arr_11 [i_0 - 4] [i_0 - 4] [i_0] [i_0 - 4] [i_0] [i_0]))) : (149238280)))));
                                var_25 *= ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */unsigned char) var_15);
                    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_17)))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4)))) ? (((var_2) ? (((/* implicit */int) var_13)) : (var_15))) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_12)))))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (var_18))) : (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) var_8)))))));
}
