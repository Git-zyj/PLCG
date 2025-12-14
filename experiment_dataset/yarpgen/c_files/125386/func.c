/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125386
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = arr_5 [i_0];
                var_20 += ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((((long long int) arr_4 [i_0] [(_Bool)0])) - (26LL)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                arr_17 [i_0] [9LL] [i_0] = ((/* implicit */signed char) arr_11 [i_4] [i_3 - 2] [19LL] [i_0] [i_0]);
                                arr_18 [i_1] [(unsigned short)2] &= ((/* implicit */short) arr_5 [i_2]);
                                arr_19 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) - (1636341572667401564ULL))))));
                                var_21 += ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_2] [(short)20] [8U]);
                                var_22 = -2;
                            }
                            for (long long int i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
                            {
                                arr_22 [i_0] [(short)12] [i_2] [i_3] [i_0] = ((/* implicit */int) 17433279626122474330ULL);
                                var_23 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) arr_6 [(short)19] [(short)19] [i_0])) ^ (((/* implicit */int) var_15)))) - (((/* implicit */int) arr_2 [i_3 + 1]))))) % (((long long int) (unsigned short)42069))));
                            }
                            for (long long int i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [i_0] [i_6]);
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1])) != (((/* implicit */int) var_19))));
                                var_26 &= ((/* implicit */signed char) (((((+(arr_10 [i_0] [(unsigned char)4] [i_0]))) + (9223372036854775807LL))) >> (((min((((/* implicit */long long int) 2789885194U)), (-1220689617381660277LL))) + (1220689617381660290LL)))));
                            }
                            var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_3 + 2] [14LL]))) & (1220689617381660275LL)))) ? (1220689617381660275LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            var_28 = ((/* implicit */unsigned short) ((((-1220689617381660278LL) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 + 2]))))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2] [i_2] [i_2] [(signed char)19] [i_3])) ? (arr_14 [i_1] [9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_0])) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)62226)) > (((/* implicit */int) (short)-12528))))) > (((/* implicit */int) ((((/* implicit */_Bool) (short)-16926)) || (arr_1 [3U]))))))))));
                        }
                    } 
                } 
                var_29 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_11 [i_0] [i_0] [i_1] [(signed char)11] [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_0] [14ULL] [i_0]))) : ((~(arr_11 [i_0] [(unsigned short)3] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (max((var_12), (((/* implicit */unsigned int) var_5))))))) && (((/* implicit */_Bool) (unsigned char)18))));
    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((unsigned long long int) -2))));
}
