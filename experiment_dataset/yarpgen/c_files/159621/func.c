/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159621
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 *= (-(((/* implicit */int) ((((/* implicit */int) var_11)) != ((+(var_6)))))));
                var_17 = ((/* implicit */long long int) ((4329938355505665303LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) * (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_0] = var_10;
                            arr_15 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+(arr_1 [i_0])));
                            arr_16 [i_0] [i_2] = ((/* implicit */_Bool) arr_9 [i_0] [i_3]);
                            var_18 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) ((var_15) >= (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (int i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_11);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((int) 16003401009022998167ULL)) : (((/* implicit */int) arr_28 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7]))));
                        var_21 = ((/* implicit */_Bool) ((arr_8 [i_5 - 1] [i_5 - 1]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4329938355505665302LL)) && (((/* implicit */_Bool) -1LL))))))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((int) var_0)))));
                        arr_29 [i_4] [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) min((((var_10) || (((/* implicit */_Bool) arr_23 [i_5 + 1] [i_5 - 1])))), (((((/* implicit */_Bool) 4329938355505665279LL)) || (((/* implicit */_Bool) arr_23 [i_5 + 1] [i_5 - 1]))))));
                    }
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-4329938355505665304LL)))) & ((+(arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_11)), ((-(-144115188075855872LL)))));
}
