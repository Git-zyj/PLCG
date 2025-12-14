/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108546
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 = arr_1 [i_0];
        var_20 = ((/* implicit */_Bool) var_7);
        var_21 = ((/* implicit */int) ((unsigned int) (~(((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) arr_6 [i_1] [i_2]);
                                arr_16 [i_3] = ((/* implicit */long long int) ((var_2) ? (((/* implicit */unsigned int) var_5)) : (max((2220816101U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                    arr_17 [(short)3] [i_3] = ((/* implicit */unsigned long long int) var_2);
                    arr_18 [(short)2] [i_3] = ((max((((/* implicit */unsigned int) arr_15 [i_1 - 1] [i_1 + 2])), (133693440U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (int i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_2 [i_3]);
                                var_23 = ((/* implicit */unsigned int) var_15);
                                var_24 = ((/* implicit */short) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)17)));
                                var_25 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_0)), ((~(1730618133735843245ULL))))), (((/* implicit */unsigned long long int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_32 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) -751708347)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((1730618133735843245ULL) > (((/* implicit */unsigned long long int) 0U))))) : (((/* implicit */int) arr_15 [i_8] [i_8]))))));
                    arr_33 [i_8] [(signed char)16] [i_10] = (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(_Bool)1] [i_9] [i_10]))))))) : (min((var_12), (((/* implicit */unsigned long long int) var_0)))))));
                    arr_34 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) arr_9 [i_8] [i_10]);
                }
            } 
        } 
        arr_35 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (~(-7640845152327067458LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */short) arr_28 [12] [i_8])))))) : (72057456598974464LL)));
        var_26 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_11)), (var_13))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [7U])))));
        arr_36 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_29 [i_8] [(_Bool)1] [i_8])) & (var_12)))))))) / (((long long int) var_17))));
    }
}
