/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109909
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((1733639074), (((/* implicit */int) max(((unsigned short)54109), ((unsigned short)17905))))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((max((arr_5 [i_1 - 1] [i_1 - 1]), (max((arr_5 [i_0] [i_1]), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) var_12)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) -1763888598996819718LL);
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_4])) ? (arr_7 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3]))))) / (arr_5 [i_3 - 1] [i_3 + 2])))) ? ((-(min((1733639074), (((/* implicit */int) (unsigned short)54109)))))) : (min((((/* implicit */int) ((((/* implicit */int) (unsigned short)54110)) <= (-1733639075)))), (var_2))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((var_14) + (2147483647))) << (((((var_14) + (1776034709))) - (5)))))) > (min((arr_21 [i_3] [i_3 + 2] [i_4] [i_5] [i_6]), (((/* implicit */unsigned long long int) (unsigned char)124)))))))));
                                var_19 = ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2])))))) & (((/* implicit */int) (((~(var_1))) == (((/* implicit */unsigned int) max((var_8), (var_12))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned char)0))));
}
