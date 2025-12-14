/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143368
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1926595523U)))))));
                            var_14 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (short)-8619))) + (5020518122141309594LL)))));
                            var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)8101)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (1869562331U)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_3))))) | (8112949112740082320LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_9 [i_1] [i_0])), (arr_5 [i_1] [i_0]))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_7 [i_1])) : (arr_2 [i_0 + 1] [i_0]))))))) : (arr_5 [i_0] [i_1])));
                arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [(short)13] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)12126)) : (var_0)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (+(min((max((2098051005U), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) 474141124))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) ((arr_12 [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4]))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (int i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_24 [i_7] [i_5] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_5]))));
                        arr_25 [i_4] [i_7] [i_7] [i_4] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7]))) ^ (-2827899818925380090LL))));
                    }
                } 
            } 
        } 
    }
    var_19 &= ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (long long int i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_27 [i_8] [i_8])), ((~(((/* implicit */int) arr_27 [i_9] [i_8]))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_11] [i_8 + 1])))) > (-7LL)));
                            arr_34 [8LL] [i_9] [i_8] [i_11] [i_11] = ((/* implicit */unsigned char) ((3ULL) >= (((/* implicit */unsigned long long int) 130023424U))));
                        }
                    } 
                } 
            }
        } 
    } 
}
