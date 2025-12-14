/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160517
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
    var_12 *= ((/* implicit */signed char) 14843415051007037862ULL);
    var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) + (((unsigned int) var_7)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_14 [i_1] [15U] [i_1] [(signed char)18] = ((/* implicit */unsigned int) 18446744073709551606ULL);
                            arr_15 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] = ((/* implicit */short) (+(((long long int) arr_13 [i_0 - 1]))));
                        }
                    } 
                } 
                var_14 -= ((/* implicit */short) var_0);
                /* LoopSeq 3 */
                for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) 
                {
                    arr_19 [i_0] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_0 [i_0 + 1])))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_9))));
                    arr_20 [i_1] = ((/* implicit */signed char) ((long long int) var_7));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) var_0);
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_4))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_0 + 1] [i_0 - 1] [i_0 + 1])) != (((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((unsigned short) arr_21 [i_5] [i_1] [8U]));
                                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                                var_21 -= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_8 - 1])) & (((/* implicit */int) arr_0 [i_8 - 1]))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_0 - 1])) >> (((var_11) - (2602056346U)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                {
                    arr_36 [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) (-(max((((((/* implicit */int) arr_17 [i_0 - 1])) + (((/* implicit */int) var_10)))), (((/* implicit */int) var_2))))));
                    arr_37 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + ((+(4075897402U)))));
                }
            }
        } 
    } 
}
