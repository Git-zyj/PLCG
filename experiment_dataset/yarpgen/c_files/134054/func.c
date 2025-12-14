/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134054
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
    var_19 = (unsigned short)65535;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) arr_2 [(unsigned char)14] [(_Bool)1])) + (((/* implicit */int) (unsigned char)207))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2105)) > (((/* implicit */int) (_Bool)0))))), ((((_Bool)1) ? (9223372036854775795LL) : (((/* implicit */long long int) arr_0 [i_0 - 2])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)48)) ? (2097151U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)207), ((unsigned char)48))))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_10 [i_4] [i_3] [(unsigned short)2] [i_4] [(unsigned short)2] [(short)2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_3 + 2] [i_3])))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 3]))))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 3])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)50)))))));
                                arr_11 [i_0] [i_4] [i_2] [i_4] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_1] [i_0]))) | (arr_0 [(_Bool)1])));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) (_Bool)0)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_18 [1ULL] [i_1 - 1] [i_1 - 1] [i_6 + 1] [i_7] = ((/* implicit */_Bool) arr_17 [i_5] [i_6]);
                                arr_19 [i_0] [i_7] [i_5] [i_6] [i_1] [i_5] |= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17341)) <= (((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned int) (unsigned short)43146)), (1500981198U))))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_18))));
            }
        } 
    } 
}
