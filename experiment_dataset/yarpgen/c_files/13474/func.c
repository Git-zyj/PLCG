/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13474
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
    var_11 = ((/* implicit */int) max(((unsigned char)186), ((unsigned char)199)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(arr_0 [i_0 - 1])));
        var_12 = ((/* implicit */signed char) var_5);
        arr_4 [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) var_1)))));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) max((arr_5 [(_Bool)1]), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) ((unsigned char) arr_6 [i_1]))))), (var_6)));
        arr_7 [i_1 + 2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)68))));
        var_14 = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))), (max(((~(((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) (_Bool)1)))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22839)) ? (((/* implicit */unsigned long long int) 2147483647)) : (0ULL)));
    var_16 = ((/* implicit */int) ((unsigned char) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_12 [8U] [i_3] [i_3])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2])) : (var_6)))))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (unsigned char)93))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */int) max((1836429909380150782ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [(signed char)7] [(signed char)7] [i_4] [i_4])))))));
                                var_21 += ((/* implicit */short) (((-(4026531840U))) >> ((((~(((/* implicit */int) arr_14 [i_4] [i_2 - 1] [(_Bool)1] [i_5])))) - (20556)))));
                                var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) ((short) (short)-4199))) + (4205)))));
                            }
                        } 
                    } 
                    arr_22 [i_4] [i_4] [(short)18] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-99)) & (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_20 [i_2] [i_2] [i_2] [i_3] [i_4])), (arr_17 [i_2 - 1])))) ? (((/* implicit */int) ((unsigned short) (_Bool)0))) : (((/* implicit */int) (unsigned char)125))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    arr_25 [i_2 - 1] [2U] [i_7] [i_2] |= ((/* implicit */signed char) max(((+(((/* implicit */int) (short)-4212)))), (((/* implicit */int) (short)-32757))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (short)-5360))));
                                arr_33 [i_7] [i_8] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435444U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))) ? (var_0) : (((/* implicit */int) arr_17 [i_7])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
