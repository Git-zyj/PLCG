/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152563
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))) * (1127697261U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3])) == (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_3]))))) : ((-(((/* implicit */int) (unsigned short)56301))))));
                                var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) arr_4 [i_0]);
                        var_17 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_2 - 1] [i_0]))));
                    }
                }
                /* LoopNest 3 */
                for (short i_6 = 3; i_6 < 22; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned long long int) ((int) (~(((((/* implicit */_Bool) arr_20 [i_0] [13] [i_0] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195))) : (14712385882525446029ULL))))));
                                arr_23 [i_0] [i_7] [i_6] [i_0] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) arr_1 [i_6 - 3]))), (max((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_1))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (long long int i_11 = 1; i_11 < 20; i_11 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), ((unsigned char)123)));
                                var_20 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) 4ULL)))));
                                arr_32 [i_0] [i_0] [(signed char)10] [i_9 + 1] [i_9] [i_0] [i_9] = ((/* implicit */unsigned long long int) arr_27 [i_9 + 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_7))));
}
