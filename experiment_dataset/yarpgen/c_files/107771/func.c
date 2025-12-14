/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107771
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((var_1) && (((/* implicit */_Bool) var_5))))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((var_7), (var_7))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_1)), (var_8))))))) ? (((/* implicit */int) max((min((var_15), (((/* implicit */unsigned short) var_14)))), (max((((/* implicit */unsigned short) var_11)), ((unsigned short)65523)))))) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = (i_0 % 2 == zero) ? (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((arr_4 [i_1] [i_1]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) - (11193085610616166218ULL)))))), ((-(min((((/* implicit */unsigned long long int) var_9)), (arr_2 [i_0])))))))) : (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((arr_4 [i_1] [i_1]) + (9223372036854775807LL))) >> (((((((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) - (11193085610616166218ULL))) - (10678773925141893654ULL)))))), ((-(min((((/* implicit */unsigned long long int) var_9)), (arr_2 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_0]))))), (max((-745902211087096008LL), (((/* implicit */long long int) arr_0 [(short)2] [i_2]))))))), (max((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)2]))) - (var_4))))))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-29922)) || (arr_9 [i_0] [i_0])))) : (min((((/* implicit */int) (short)29940)), (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) max((((/* implicit */short) var_10)), (var_14))))))) : (((((/* implicit */_Bool) ((arr_9 [i_0] [i_1]) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_10 [i_3] [i_1] [i_2] [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2])))))) : (max((var_13), (((/* implicit */unsigned long long int) var_10))))))));
                            arr_11 [i_0] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) ((arr_9 [i_2] [i_3]) ? (((/* implicit */int) (unsigned short)7052)) : (var_9)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) : (arr_3 [i_0] [i_0])))))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_4 [i_1 - 2] [i_1 - 1]))) & ((-(((/* implicit */int) ((unsigned char) var_5)))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_2] [i_1 - 2] [i_3] [i_3] [i_3]), (arr_10 [i_2] [i_1] [i_1 - 1] [i_3] [i_3] [i_2])))) ? ((~(min((var_2), (((/* implicit */unsigned int) (unsigned short)7052)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_1] [i_2] [2U])) * (((/* implicit */int) arr_1 [i_2])))) >> (((((/* implicit */int) ((short) (unsigned short)59685))) + (5860)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((unsigned long long int) (~(max((11056082207468808265ULL), (((/* implicit */unsigned long long int) var_15)))))));
                            arr_19 [i_1] [i_1] [i_0] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_5] [i_0])) : (((/* implicit */int) (unsigned char)151))))) / (arr_4 [i_0] [i_4]))) & (max((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_5])) % (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_3)) ? (-17LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_4] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
