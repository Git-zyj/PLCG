/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114481
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_2)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))) + ((~(arr_3 [(unsigned char)4])))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) var_9);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [4U] [4U])))))))) ? (((/* implicit */int) (!(((_Bool) var_7))))) : (((/* implicit */int) arr_12 [i_1] [(unsigned short)0]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */int) ((arr_4 [i_0] [i_1]) + (((/* implicit */long long int) (+(490346154U))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (arr_9 [i_3]) : (arr_9 [i_3])));
                            }
                            for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                            {
                                var_19 *= ((/* implicit */long long int) (+(((arr_15 [(unsigned char)16]) ? (((/* implicit */int) arr_15 [(_Bool)1])) : (((/* implicit */int) arr_15 [(_Bool)1]))))));
                                var_20 &= ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_14 [i_0] [i_0] [i_2] [8U] [i_5])))) ? ((~(arr_14 [i_5] [(unsigned short)2] [i_2] [(unsigned short)2] [i_0]))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [10ULL] [i_0])) ? (arr_14 [(_Bool)1] [(_Bool)1] [i_1] [10] [10]) : (arr_14 [i_5] [6U] [i_2] [6U] [i_0]))));
                            }
                            for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((arr_20 [i_1]) != (((/* implicit */long long int) arr_16 [1ULL] [i_0] [i_0]))))), ((-(min((((/* implicit */long long int) 2428092239U)), (-8893238453137352082LL)))))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_16 [i_0] [(_Bool)1] [i_3]))));
                                arr_24 [i_0] [i_0] [0U] [i_0] &= ((/* implicit */long long int) max(((-(arr_2 [i_0]))), ((-(arr_2 [i_0])))));
                            }
                            arr_25 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
}
