/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136960
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */short) min((((/* implicit */int) min((min((((/* implicit */unsigned char) arr_6 [(short)10] [i_2 - 3] [i_4])), (var_8))), (((/* implicit */unsigned char) var_11))))), ((+(((/* implicit */int) ((signed char) arr_0 [(unsigned short)0])))))));
                                var_17 = ((/* implicit */long long int) ((unsigned short) (short)8793));
                                var_18 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_15 [0ULL] [i_1] [i_0] &= ((/* implicit */_Bool) arr_14 [0U] [i_1] [(short)6] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_1] [(short)2] [i_2] [i_0] [i_5] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_5)), (var_10))), (((/* implicit */long long int) var_3))))), (min((arr_9 [i_6] [i_5] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_5])) <= (var_6))))))));
                            arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((var_12), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) || (((/* implicit */_Bool) ((min((arr_11 [i_0] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))) << (((min((arr_12 [i_0] [i_5] [i_0] [i_6] [i_2]), (((/* implicit */unsigned long long int) var_8)))) - (211ULL))))))));
                        }
                        arr_22 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [i_2])))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        var_20 *= ((/* implicit */unsigned int) max((arr_18 [i_0] [10ULL] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [i_1]))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) arr_2 [i_0]))) * ((+(((long long int) var_13))))));
                        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_2))));
}
