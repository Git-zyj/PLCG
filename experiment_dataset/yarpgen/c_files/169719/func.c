/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169719
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
    var_13 += ((/* implicit */_Bool) max(((-((+(((/* implicit */int) var_1)))))), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_14 = arr_4 [i_0] [i_1] [i_0] [i_1];
                                var_15 = ((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) ^ ((~(((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    arr_14 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)7)) ? (arr_13 [(unsigned char)13] [i_1] [i_5]) : (arr_13 [i_0] [i_1] [i_5]))), (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (arr_10 [i_0] [i_1] [i_0] [i_0] [i_5] [(_Bool)1])))))))));
                    arr_15 [i_0] [(unsigned char)0] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_9 [i_0] [(_Bool)1] [i_5] [i_1] [i_0]) - (max((arr_9 [i_0] [i_1] [i_5] [i_1] [i_5]), (arr_9 [i_0] [i_5] [i_0] [i_1] [i_0])))));
                }
                for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    arr_18 [i_0] [i_0] [i_6] [i_6 - 1] = ((/* implicit */unsigned char) var_10);
                    var_16 = arr_9 [i_0] [i_1] [i_6] [i_6] [13LL];
                    var_17 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_6]))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_1] [(_Bool)0] [i_6])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_1] [i_1] [i_1])))))) : ((+(arr_13 [i_0] [(unsigned char)9] [i_6]))))) : ((-(((((/* implicit */_Bool) var_11)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))));
                    arr_19 [i_1] [i_6] &= arr_17 [i_0] [i_0] [i_0];
                    arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((((max((((/* implicit */long long int) (_Bool)1)), (5612603524107961748LL))) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)16))))))), ((!(((/* implicit */_Bool) (((_Bool)1) ? (arr_13 [i_6 - 1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                }
                var_18 = ((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_0 [i_0] [i_0])))))) == (max((((((/* implicit */int) var_11)) % (((/* implicit */int) var_5)))), ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1]))))))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (min((arr_1 [i_1]), (arr_11 [i_0] [i_0] [i_1] [4LL])))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_1);
}
