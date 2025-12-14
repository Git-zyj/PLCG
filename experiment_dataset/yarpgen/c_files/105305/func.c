/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105305
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_3))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                    var_13 = ((/* implicit */long long int) ((short) 0LL));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4 + 1] [i_3] [(unsigned char)20] [i_0] = ((/* implicit */short) ((unsigned short) -28LL));
                                arr_17 [i_4] [i_2] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -32LL)))))));
                                var_14 = ((/* implicit */long long int) min((var_14), ((~(((((/* implicit */_Bool) arr_3 [5ULL] [i_0])) ? (var_8) : (-32LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) arr_4 [i_1] [i_5] [(unsigned short)6]);
                                arr_22 [i_0 - 1] [i_1] [i_2] [i_5] [(short)10] = ((/* implicit */_Bool) var_8);
                                arr_23 [14LL] [i_0 - 2] [i_2] [i_5] [i_6 - 1] = ((/* implicit */unsigned short) -28LL);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [(short)21] [i_1] [7ULL] [i_1] [i_0 + 1] [i_0]))))), (min((((/* implicit */long long int) var_4)), (31LL))))), (min((((long long int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_0] [i_2])), ((~(53LL)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((unsigned char) var_7));
        arr_24 [i_0] = ((/* implicit */int) (-(3989206384170682325ULL)));
        var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_18 [i_0] [i_0 - 2] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2]))))));
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 47LL)) ? (53LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211)))))) >= (arr_28 [i_7])));
        arr_29 [i_7] &= ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_7] [i_7])) : (((/* implicit */int) var_1))))))));
    }
}
