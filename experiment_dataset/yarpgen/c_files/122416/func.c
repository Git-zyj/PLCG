/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122416
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
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10787054466575168824ULL)) ? (((/* implicit */unsigned long long int) (+(3554367982U)))) : (((((/* implicit */_Bool) 422570174U)) ? (8847619502425322236ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21471))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6030058406596807541ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22657))) : (13934702307965385844ULL)))) ? (33554430U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))))));
                                var_20 -= ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 4] [i_0] [i_0 - 3])) / (arr_6 [i_0] [i_0 - 2] [i_2 + 2] [i_3 - 2] [16])))) ? (((((/* implicit */_Bool) -1754301231567420283LL)) ? (9599124571284229380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-15479))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(4294967295U))))));
                arr_10 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
    {
        arr_14 [i_5 + 2] = ((/* implicit */int) ((unsigned int) arr_11 [i_5 - 1] [i_5 + 1]));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_14)))) || (((/* implicit */_Bool) arr_11 [i_5] [i_5 + 2]))));
        arr_15 [i_5 + 2] [i_5 + 2] = ((/* implicit */short) (~(1137552961)));
    }
    for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
    {
        arr_19 [i_6] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_12 [i_6 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))))), ((~(var_0)))))));
        var_23 = ((/* implicit */unsigned int) arr_12 [i_6 + 1]);
    }
}
