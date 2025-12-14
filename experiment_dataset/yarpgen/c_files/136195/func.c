/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136195
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
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_0])), ((unsigned short)15170)))) >= (((/* implicit */int) min((arr_3 [i_2 - 1] [i_1] [(unsigned char)11]), (arr_3 [i_0] [i_1] [i_2]))))));
                            arr_10 [i_1] = max((((/* implicit */short) (signed char)48)), ((short)-4552));
                        }
                    } 
                } 
                arr_11 [6U] |= ((/* implicit */_Bool) ((short) arr_3 [i_0] [(unsigned char)12] [i_0]));
                arr_12 [i_1] [(unsigned char)3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)187)) ? ((+(2213844715U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_16 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((unsigned int) 2461305404050903049ULL));
                    arr_17 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */signed char) ((((((_Bool) arr_1 [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
                    arr_18 [i_1] [i_1] = ((/* implicit */_Bool) (+(((long long int) arr_15 [i_1] [i_4]))));
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(arr_8 [i_0] [i_0] [i_0] [i_0])));
                }
                for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])), (arr_23 [i_7] [i_6] [i_6] [i_0])))) ? (((/* implicit */int) arr_14 [i_6])) : (((((/* implicit */int) arr_6 [i_6] [i_1])) & (((/* implicit */int) arr_1 [i_7]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6]))) / (((unsigned int) 1701045746U)))))))));
                                arr_28 [i_0] [i_1] [i_5] [(short)14] [i_1] [i_7] = ((/* implicit */int) min(((unsigned short)554), ((unsigned short)31623)));
                            }
                        } 
                    } 
                    var_14 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                {
                    arr_36 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (156864214)));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        for (short i_12 = 1; i_12 < 14; i_12 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) 4210338020U);
                                var_16 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(156864214)))) ? (((/* implicit */int) ((signed char) arr_8 [i_12 + 2] [(signed char)15] [i_10] [i_8]))) : (((/* implicit */int) (short)-7459))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
