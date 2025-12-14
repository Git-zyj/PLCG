/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134190
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
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_2] [i_1])))) & (arr_6 [i_3]))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)13900)), ((unsigned short)45120))))))))));
                                var_15 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_0])))) ? (max((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])), (arr_2 [i_0] [i_0 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0 - 2] [17LL])))));
                                var_16 = ((/* implicit */short) min((var_16), (var_2)));
                                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30939)) ? (((/* implicit */int) max((arr_10 [i_4] [i_4] [i_2] [i_4] [i_0]), (arr_10 [i_2] [i_3] [i_2] [i_3] [i_4])))) : ((-(((/* implicit */int) arr_10 [i_4] [i_3] [i_1] [i_3] [(short)12]))))));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_0] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1915368330766577247LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_13 [i_0 - 2] [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_0] [i_2] [i_2] [i_3] [i_4])), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_0 + 1] [i_0] [i_2]))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_1] [i_4])))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_4] [i_1] [i_4] [i_3] [i_4] [i_0 - 2] [i_2])), (arr_1 [15ULL])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0 - 2] [(unsigned short)8] [i_2]))) : (((unsigned long long int) 1125895611875328ULL))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = max(((short)-3), ((short)-4141));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0 + 1] [i_0]);
                                arr_28 [i_7] [i_6] [i_7] [i_1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_0 + 2] [i_5] [i_0 + 2])) ^ (((/* implicit */int) (unsigned short)45110))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_6] [i_1])))) : (min((((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U))), (((/* implicit */unsigned int) var_9)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 4; i_8 < 22; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_12);
                        arr_31 [i_0 + 2] [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) var_12);
                        arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_11)), (arr_5 [i_8] [i_8] [i_8 - 4]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-18250))))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_9 = 4; i_9 < 23; i_9 += 1) 
                {
                    var_21 += ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [12U]);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 2]))));
                    var_23 = (-(arr_29 [i_0] [i_1] [i_0]));
                    arr_35 [i_9] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63714))) : (arr_5 [14LL] [i_9] [i_0 + 1])));
                }
            }
        } 
    } 
    var_24 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20416))))) ? (min((((/* implicit */long long int) var_4)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
    var_25 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)13900)) : (((/* implicit */int) (_Bool)0)))))) >= (((/* implicit */int) ((unsigned char) var_1)))));
}
