/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147509
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((unsigned short) min(((((_Bool)1) ? (arr_6 [(unsigned char)6] [i_1] [i_1]) : (((/* implicit */unsigned int) var_3)))), (arr_3 [(unsigned short)6] [(unsigned short)6] [i_1 + 2]))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (-(134159602U)))) ? (((long long int) arr_8 [i_3 - 1] [i_1] [i_1] [i_0 - 3])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned char) (_Bool)1))))))))));
                            arr_12 [i_0] [(unsigned char)5] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) min((((/* implicit */short) arr_5 [i_3] [i_1] [i_2])), (var_11))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_3] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3854415322U)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))), (3854415310U)))));
                            var_16 = ((/* implicit */unsigned char) arr_4 [i_2 - 2] [i_1 + 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_5]))));
                    var_18 = ((/* implicit */unsigned int) ((((_Bool) (-(arr_16 [i_5])))) ? ((+(arr_18 [i_6 - 1] [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_13 [i_5 + 1])), (var_13))) == (((/* implicit */long long int) min((var_2), (2244813887U))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (int i_8 = 3; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_23 [i_8] [i_8 - 3] [i_5 + 2] [i_5] [i_8])) ? (arr_23 [i_4] [i_8 - 2] [i_5 - 1] [i_5] [i_8]) : (arr_23 [i_7] [i_8 - 3] [i_5 - 1] [i_5] [i_8]))));
                                var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) ((arr_19 [i_4 + 1]) | (arr_19 [i_4 + 1])))), (((((/* implicit */_Bool) arr_19 [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3854415323U)))));
                                var_21 = ((/* implicit */unsigned short) max((min((440551974U), (((/* implicit */unsigned int) (short)-24394)))), (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_8] [i_5] [i_8 - 1])) ? (2050153409U) : (((/* implicit */unsigned int) 0))))));
                                var_22 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_7 + 1] [16LL] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_23 [i_7] [i_7] [i_7 + 1] [(short)18] [i_7])))) : (min((var_13), (arr_23 [i_7] [i_7] [i_7 + 1] [(_Bool)1] [i_7])))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (max((((/* implicit */unsigned long long int) 131071)), (6515772250209492429ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (var_11))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            {
                var_24 += ((/* implicit */unsigned char) ((_Bool) (unsigned short)0));
                var_25 &= ((/* implicit */int) ((((/* implicit */_Bool) ((440551973U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))))) ? (((((/* implicit */_Bool) arr_25 [i_9 + 2])) ? (arr_29 [i_9 + 4] [i_10] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9 - 1]))))) : (min((arr_29 [i_9 - 1] [i_10] [18U]), (arr_29 [i_9 + 1] [i_10] [i_9])))));
                var_26 = ((/* implicit */long long int) var_11);
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_5);
}
