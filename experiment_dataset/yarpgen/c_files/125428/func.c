/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125428
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) < (((/* implicit */int) var_0)))) ? (16252928U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_9)) : (16152017142797887823ULL))))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned short) var_13);
                                var_17 = ((unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_1 - 1])) < (((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_2])))));
                                var_18 = ((/* implicit */unsigned char) ((((int) max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])), (-6753912455949641434LL)))) >> ((((-(((/* implicit */int) var_11)))) - (82)))));
                            }
                        } 
                    } 
                    arr_12 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2 - 1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2 - 1] [i_2] [i_0] [i_0])) : (-6753912455949641445LL))) / (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) (-(-6753912455949641425LL)));
        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1763538962U)))) ? (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (6753912455949641429LL) : (((/* implicit */long long int) var_8))))))) ? (min((min((var_3), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))));
        arr_15 [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((var_13), (((/* implicit */int) (_Bool)1))))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (arr_7 [i_0] [i_0])))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? ((+(var_10))) : (((/* implicit */unsigned int) 948166475)))));
    }
}
