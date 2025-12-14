/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160188
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(((/* implicit */int) var_19)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [(_Bool)1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) var_8);
                    var_21 = ((/* implicit */long long int) var_15);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) (_Bool)1);
                        var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-(7302729424874594297LL)))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))))) : (((var_16) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_3])) ? (6984053081244318266LL) : (((/* implicit */long long int) arr_7 [0LL] [i_2] [i_1] [5U])))) : ((-(-3098261339934128833LL)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)13] [i_0] = -6990059545376050965LL;
                            var_23 = ((/* implicit */long long int) max((var_23), (min(((+(6984053081244318285LL))), (((/* implicit */long long int) var_2))))));
                            var_24 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) max((var_13), (((/* implicit */short) (_Bool)1)))))))));
                        }
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) 7302729424874594297LL))));
                        var_26 = min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_13 [i_0] [6U] [i_0] [(short)2] [i_0]))))) ? (5165732793145188560LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) 6990059545376050964LL)) ? (var_10) : (var_15))) : (arr_7 [i_0] [i_1] [i_2] [i_3])))));
                    }
                }
            } 
        } 
    } 
}
