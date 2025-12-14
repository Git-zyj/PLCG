/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138759
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
    var_18 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)1)), (4334101067850126096LL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_18 [i_4] [i_3] [i_2] [i_1] [i_0 - 2] = ((/* implicit */_Bool) arr_4 [18ULL] [i_1] [i_4]);
                                arr_19 [10] [10] [i_2] [8] [(_Bool)1] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [i_1] [i_2]) ? (669925283) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2] [i_0])) : (-6366906351412932989LL)))) ? (((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) arr_3 [(unsigned short)3])) : (((long long int) arr_5 [i_0 - 1] [i_0] [i_2])))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21648)) >> (((((/* implicit */int) (unsigned short)41168)) - (41168))))))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_23 [i_0 - 2] [(short)20] [i_1] [i_5] = max((var_1), (max((((unsigned long long int) var_14)), (((((/* implicit */_Bool) -13806202)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))))))));
                    arr_24 [6] [i_5] [i_5] = ((/* implicit */long long int) var_0);
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        {
                            arr_29 [i_6] = ((/* implicit */unsigned char) arr_10 [i_6] [i_6] [i_6] [i_0]);
                            arr_30 [i_1] [i_1] &= ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_6] [(_Bool)1])) ? (((arr_8 [i_1] [i_0] [i_0]) + (((/* implicit */int) min(((short)0), ((short)-4041)))))) : (((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)49043))))) ? (((((/* implicit */_Bool) -1843660076)) ? (((/* implicit */int) var_0)) : (var_13))) : (((/* implicit */int) ((unsigned char) (short)20786))))));
                            /* LoopSeq 1 */
                            for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                            {
                                arr_34 [i_6] [i_6] [(unsigned char)4] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [(short)9] [i_0]))))) <= (var_8)));
                                arr_35 [(_Bool)1] [(signed char)2] [22U] [i_7] [i_6] = ((/* implicit */unsigned long long int) 2130506813U);
                                arr_36 [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1] [i_0 + 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                                arr_37 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) (unsigned short)65248)) : (((/* implicit */int) ((short) arr_28 [i_7] [i_7] [i_7] [i_7] [i_7])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) -627415078);
}
