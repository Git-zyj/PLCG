/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108760
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) min((var_0), (var_8)))))) : (8388607)));
    var_14 = ((/* implicit */_Bool) (-((-(max((4294967294U), (((/* implicit */unsigned int) var_0))))))));
    var_15 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_3 [i_0] [18])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (arr_3 [i_0] [i_1])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((min((arr_2 [i_0]), (((/* implicit */unsigned int) var_12)))) ^ ((~(((((/* implicit */_Bool) arr_3 [(unsigned short)11] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)31570)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))) : ((+(min((arr_11 [i_0] [(_Bool)1] [20U] [(unsigned short)16] [i_1] [i_0]), (((/* implicit */long long int) arr_2 [i_2]))))))));
                            arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(3488261459U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((12847291409867868094ULL) * (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))) ? (((arr_6 [i_0] [i_1] [9U] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_2] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_3] [i_3])))))))) : (min((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0] [i_2] [i_0])), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [(unsigned short)4] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2])))))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)11] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) -2656873828124719752LL)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (short)7))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (arr_10 [i_0] [4] [i_2] [i_3 + 1] [i_2]) : (arr_10 [i_0] [(unsigned char)12] [i_2] [i_3 + 1] [(unsigned char)1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
