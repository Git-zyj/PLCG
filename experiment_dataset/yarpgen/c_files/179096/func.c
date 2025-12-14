/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179096
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_7 [(signed char)19] [i_2 + 1] [i_3] [i_2 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)0)) : (6))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2 + 1] [i_0] [i_3] [i_2 + 1] [i_1] [i_0] [i_0]))))) : (3721117838U)));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0]))) == (8384512U)))))) > (((/* implicit */int) ((signed char) 844686223)))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned char)0)))))))) ? (((((/* implicit */_Bool) ((unsigned int) (unsigned char)0))) ? (((/* implicit */int) arr_6 [i_0] [(short)4] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [5] [i_0] [5] [i_0] [5] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))))) <= (((/* implicit */int) var_0)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    var_21 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) 8384495U)) ? (8384512U) : (arr_9 [(short)12] [i_6] [i_7] [i_6]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_6] [i_5] [i_6] [i_5] [i_5] [i_5])))));
                    arr_20 [i_5] [i_7] = ((/* implicit */unsigned char) arr_13 [i_5] [i_5]);
                }
            } 
        } 
    } 
}
