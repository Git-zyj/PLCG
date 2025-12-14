/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10353
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
    var_20 |= (-(max((((unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) var_11)) - (6917518937550805825ULL))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0ULL)))) ? (9272319218800677565ULL) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (4294967295U))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [2LL] [i_1] [2LL] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | ((~(arr_0 [i_0] [i_1])))));
                arr_7 [(_Bool)0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (4294967274U) : (arr_2 [(_Bool)1]));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [6LL] [i_0] [(short)2] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 + 2])), (arr_10 [i_0 + 2] [i_0 + 2] [i_1])))));
                            arr_15 [(signed char)8] [i_2] [2U] [2U] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((18446744073709551586ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
                            arr_16 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) max(((-(((/* implicit */int) arr_3 [i_0 - 1])))), (((/* implicit */int) ((_Bool) arr_3 [i_0 - 1])))));
                            arr_17 [0ULL] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 3])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned short)7])))))) : ((+(arr_12 [i_0] [i_1]))))) : (((((/* implicit */unsigned long long int) 1583567805U)) % (14173184563866438ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_22 [i_5] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_12 [i_0] [i_1]);
                            arr_23 [(short)4] [(_Bool)1] [10ULL] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_0] [6U] [6U]))))), (max((((33554432U) | (var_3))), (((/* implicit */unsigned int) (unsigned short)2047))))));
                            arr_24 [i_0] [(unsigned short)0] = (-(((unsigned long long int) (unsigned short)10)));
                            arr_25 [i_0] [2U] [i_0] [i_5] = ((/* implicit */short) (+(((/* implicit */int) var_18))));
                        }
                    } 
                } 
            }
        } 
    } 
}
