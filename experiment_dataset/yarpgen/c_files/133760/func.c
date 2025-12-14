/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133760
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
    var_10 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_5)) != (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_2)) + (84))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_8)) + (31177)))))) && (((/* implicit */_Bool) var_3))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_11 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_3] [i_4]))))) && (((arr_12 [i_1] [i_0] [i_2] [i_0] [i_4]) && (((/* implicit */_Bool) arr_11 [i_2] [i_4] [i_4] [i_4]))))))), (((((/* implicit */_Bool) min((arr_6 [i_3]), (((/* implicit */unsigned long long int) var_4))))) ? ((~(arr_5 [i_1] [i_1] [i_2] [i_1]))) : (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_3] [i_3]))) : (arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                                var_12 = ((/* implicit */short) arr_8 [i_1] [i_1] [i_2] [i_2] [(unsigned char)1] [i_4]);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_1] [i_1] [(unsigned char)17])), (((unsigned long long int) max((arr_8 [i_1] [(unsigned char)12] [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned char) var_6))))))))));
                arr_13 [(unsigned char)13] [i_1] [i_1] = ((/* implicit */int) var_5);
                var_14 = ((short) (-(min((2350021451031584065ULL), (((/* implicit */unsigned long long int) 1199809916))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_6);
}
