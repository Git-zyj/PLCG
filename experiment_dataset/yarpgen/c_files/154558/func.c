/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154558
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4 + 1])) + (((int) arr_9 [i_4 + 1] [i_3] [i_1] [i_0]))));
                            arr_11 [i_0] [i_3] [i_2 - 2] [i_2 + 1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-905049880998597854LL) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (var_7)));
                            arr_12 [i_0] [i_1] [(unsigned short)8] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) (_Bool)1)));
                        }
                        arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((long long int) -905049880998597854LL));
                            arr_17 [i_0] [(short)3] [7ULL] [(unsigned char)5] [i_0] [6] = ((/* implicit */unsigned int) arr_1 [i_0]);
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0 - 3] [i_0] [i_0] [3LL] = ((/* implicit */unsigned long long int) arr_19 [i_2 - 2] [i_2 - 1] [i_0] [(unsigned short)7]);
                        arr_21 [i_0] [i_0 - 1] [i_1] [i_2 - 2] [4U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 3]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_18 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]))) : ((+(arr_23 [i_2])))))), (min((((/* implicit */unsigned long long int) (~(var_5)))), (min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                        var_19 = ((/* implicit */short) arr_22 [4] [i_2]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_1] [2U] = ((/* implicit */long long int) ((unsigned char) 905049880998597853LL));
                        var_20 = ((/* implicit */_Bool) 905049880998597856LL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            arr_33 [i_0] [i_0] [i_2] [i_8] [i_0] = ((/* implicit */unsigned char) (!(arr_5 [i_2 - 1] [i_0 - 2])));
                            arr_34 [i_9] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((arr_15 [i_0 - 2] [i_0] [i_2] [8] [i_9]) / ((-(905049880998597854LL)))));
                            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0]))));
                            arr_35 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-3135)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 9; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            {
                                arr_42 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0 - 1] [i_1] [(unsigned char)0] [i_10 + 1] [9] [i_11])))))) & (9223371899415822336ULL)));
                                arr_43 [i_11] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [(_Bool)1] [0] [(unsigned char)6] [i_11])) * (((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_26 [i_0] [i_2 - 1]))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_36 [i_0 - 2] [i_0 - 1]), (arr_36 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0 - 2] [i_0 - 3]))))) : (((/* implicit */int) max((arr_36 [i_0 - 2] [i_0 - 2]), (arr_36 [i_0 - 1] [i_0 + 1])))))))));
                                arr_44 [i_0] [i_0] [i_2] [i_10 - 1] [i_11] = (-2147483647 - 1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 3; i_12 < 15; i_12 += 1) 
    {
        for (unsigned int i_13 = 2; i_13 < 16; i_13 += 2) 
        {
            {
                arr_49 [i_12] [i_12] = ((/* implicit */int) ((_Bool) (~(4261566943045286307ULL))));
                arr_50 [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_7), (((/* implicit */unsigned int) var_10))));
    var_24 = ((/* implicit */unsigned long long int) var_13);
    var_25 = ((/* implicit */unsigned char) var_15);
}
