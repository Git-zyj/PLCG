/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161098
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)105))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (arr_4 [12ULL] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ^ (((/* implicit */unsigned long long int) -1))));
                            arr_15 [i_4 - 3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (+(5ULL)));
                            var_14 = ((/* implicit */int) arr_10 [i_0] [i_1] [i_0]);
                            var_15 = ((/* implicit */unsigned int) arr_7 [i_2] [i_3]);
                            var_16 = ((/* implicit */_Bool) (-(arr_9 [i_0 + 1] [1U] [i_3] [i_4 - 4])));
                        }
                        var_17 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 943397882U)) ? (1865309321U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))))));
                        var_18 = ((/* implicit */unsigned long long int) ((long long int) var_1));
                    }
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(-2795596791856363300LL))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (_Bool)1);
                                var_21 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [14LL] [i_1])), (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_1 [i_1]))))) : (max((17746062381890228441ULL), (((/* implicit */unsigned long long int) (short)-19987))))))));
                                arr_21 [i_1] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)-32560)) & (arr_8 [i_0 - 2] [i_0 - 2] [i_5 + 1] [i_0 - 2]))) == (((/* implicit */int) (short)-28439)))) ? ((-(6))) : (((/* implicit */int) arr_10 [i_2] [i_5] [i_2]))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(max((max((-7), (6))), (((-6) | (-12))))))))));
                                arr_22 [i_0] [i_0] [i_1] [i_2] [i_5 - 2] [i_2] = ((/* implicit */signed char) (unsigned short)27400);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)108))));
}
