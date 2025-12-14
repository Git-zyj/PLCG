/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176914
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 |= ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) arr_8 [(short)10] [(unsigned char)2] [i_3 + 1] [i_3 + 1] [i_1])))));
                            arr_9 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */int) ((unsigned char) 14723216320309291775ULL));
                            arr_10 [(short)2] [i_0] [(short)2] [i_1] [i_2] [(short)2] = ((unsigned long long int) var_10);
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) ((_Bool) min((min((var_10), (3723527753400259845ULL))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(3723527753400259851ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2614203703785977196LL)) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]) : (var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) > (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) max((14723216320309291763ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) 2614203703785977196LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7)))))))))))));
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)47736);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_10);
}
