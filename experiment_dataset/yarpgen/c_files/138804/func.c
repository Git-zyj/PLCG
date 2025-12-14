/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138804
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (arr_0 [(_Bool)1])));
        var_20 ^= ((/* implicit */int) var_10);
        var_21 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_2 [i_0 + 1] = ((/* implicit */unsigned long long int) var_2);
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1 + 1] = ((/* implicit */long long int) ((arr_1 [(short)3] [i_1 + 1]) > (((/* implicit */unsigned long long int) arr_4 [i_1 + 1]))));
        arr_7 [9ULL] = ((/* implicit */_Bool) (+(((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_5] [i_3] [(_Bool)1] [i_5] [8LL] = -2121786937;
                        arr_21 [i_3] [i_4] = ((/* implicit */unsigned char) (+(arr_19 [i_2] [i_3] [i_3] [i_5])));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_8))));
                    }
                    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)48)) : (-609452579)))) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16777215)) ? (((/* implicit */int) (short)559)) : (((/* implicit */int) (unsigned short)41194))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10LL)) ? (arr_22 [i_2] [i_2] [i_3] [i_3] [i_4] [i_6]) : (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        arr_24 [i_2] [i_3] [i_4] [7LL] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))));
                    }
                    arr_25 [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 0)) | (((unsigned long long int) 3587833235975896417ULL))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_13))));
        arr_26 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((438421362669478109ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned long long int) (~(0))))));
        arr_27 [i_2] = ((/* implicit */unsigned long long int) (!(((var_17) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65481)))))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (unsigned short)40929))));
                        var_27 = ((/* implicit */unsigned int) ((signed char) (unsigned char)49));
                    }
                } 
            } 
        } 
    }
}
