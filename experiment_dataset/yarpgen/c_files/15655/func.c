/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15655
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [9] [(_Bool)1] = ((/* implicit */short) ((_Bool) var_5));
                    arr_10 [(short)10] [9U] [(short)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_2 [i_0] [i_0] [i_0]))) ? ((~(1369868685U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2]))))))));
                    arr_11 [7LL] [i_1] [(unsigned short)6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(274877906943LL)))) ? (((/* implicit */long long int) 1757112659U)) : (max((((/* implicit */long long int) max((((/* implicit */unsigned short) (short)-7627)), ((unsigned short)0)))), ((~(var_5)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) var_9)))));
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max(((~(arr_6 [5LL] [(unsigned short)3] [i_2]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)8192)))))))))))));
                                var_14 = max(((~(((unsigned int) var_0)))), (((/* implicit */unsigned int) arr_16 [i_3])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_1))))) && (((/* implicit */_Bool) max((arr_7 [i_0] [(signed char)7]), (var_5))))))))))));
                                var_16 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_1);
}
