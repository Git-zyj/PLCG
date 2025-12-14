/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152303
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    var_20 = ((/* implicit */unsigned char) ((short) var_6));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 = (((((~(arr_2 [i_0 - 1] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)3]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((/* implicit */int) arr_5 [i_0 - 1]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (short)-30267);
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) max((arr_12 [i_0] [i_1] [i_1] [i_0 + 1] [(unsigned char)8]), (arr_12 [i_0] [i_1] [i_0] [i_0 + 2] [i_0])))) | (((arr_11 [i_1] [i_1] [i_2] [i_3] [i_4]) & (min((arr_3 [i_0 + 2] [i_2] [i_3]), (((/* implicit */int) var_10)))))))))));
                                arr_14 [i_0] [5] [i_3] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_2] [i_0])) << ((((~(max((((/* implicit */unsigned int) arr_10 [i_0] [i_0])), (arr_2 [i_0] [i_0]))))) - (3854434125U)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_2] [i_0])) << ((((((~(max((((/* implicit */unsigned int) arr_10 [i_0] [i_0])), (arr_2 [i_0] [i_0]))))) - (3854434125U))) - (3702632772U))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) arr_4 [i_0]);
                /* LoopNest 3 */
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */long long int) (-(arr_3 [i_0 + 1] [i_0 + 2] [i_0])));
                                arr_23 [i_0] [i_0] [i_0] [i_6] [i_7] = ((((((/* implicit */_Bool) arr_19 [i_7 - 3] [i_7 - 1] [i_7 - 2] [i_7 - 3] [i_7 + 3])) ? (((/* implicit */int) arr_19 [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 2])) : (((/* implicit */int) arr_19 [i_7 - 2] [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 1])))) - ((+(((/* implicit */int) arr_19 [i_7 + 3] [i_7] [i_7 - 2] [i_7 + 3] [i_7 - 2])))));
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)9719))) + (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_15 [i_1] [i_5] [(unsigned char)7] [(unsigned char)7])) : (((/* implicit */int) (unsigned short)14603))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (short)-29498))))))) : (arr_21 [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 4] [i_7 + 4]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
