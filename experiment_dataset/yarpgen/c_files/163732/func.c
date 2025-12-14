/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163732
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
    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_2))))) && (((((/* implicit */unsigned int) var_3)) == (var_8))))))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), ((unsigned char)235)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((var_6) << (((var_6) - (3218847554U)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 647775209U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)18))))) ? (max((var_6), (arr_2 [i_1] [i_2]))) : (arr_2 [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_12 [(unsigned short)4] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)3906), (((/* implicit */unsigned short) (unsigned char)15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_2 [i_4] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_3] [i_2] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_1] [(unsigned short)2]))) : (8187094716172568982ULL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (8187094716172568982ULL)))))))));
                                var_15 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)6] [i_1] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)230)) ? (8341254910472463474LL) : (((/* implicit */long long int) arr_4 [i_4] [4ULL] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [1] [i_1]))))))) & (((((/* implicit */_Bool) var_2)) ? (arr_3 [i_2]) : (arr_3 [i_0])))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_4 [(signed char)3] [i_2] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */short) (~(1998569209)));
}
