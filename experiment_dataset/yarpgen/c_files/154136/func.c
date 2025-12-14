/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154136
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)9924)) ? (((/* implicit */int) (signed char)21)) : (261888)))))) >= (max((arr_9 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */long long int) var_11))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 = ((unsigned char) max((min((var_10), (((/* implicit */unsigned int) arr_7 [i_4])))), (arr_0 [i_0])));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    arr_16 [(short)18] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_14 [10U] [i_1] [i_2]) : (arr_14 [12LL] [12LL] [12LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */int) var_5))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(short)12] [i_0]))) > (arr_14 [(unsigned char)10] [i_1] [i_2]))))))) : ((-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(unsigned char)4] [i_2]))) : (arr_4 [i_2] [i_1] [i_0])))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_10))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14384160391142451687ULL)))));
}
