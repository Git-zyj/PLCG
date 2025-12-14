/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135354
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) arr_2 [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) arr_8 [i_0]);
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((var_6), ((_Bool)1)))))) > (min((arr_2 [i_0]), (((/* implicit */unsigned int) (short)-4096))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_8)))) > (((/* implicit */long long int) max(((~(((/* implicit */int) (short)-4096)))), (max((var_1), (((/* implicit */int) arr_7 [i_0])))))))));
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_8 [i_1]), (arr_8 [i_0])))) ? (max((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1])), (arr_9 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (arr_5 [3U] [(_Bool)1] [(_Bool)1]) : (((/* implicit */int) (short)-4096)))))) >> (((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1])) & (((/* implicit */int) var_6))))), (var_7))) - (306385772U)))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_6) ? (arr_12 [(signed char)11] [i_1] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_4] [i_0]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_1])))))))) ? (1357490379U) : (((/* implicit */unsigned int) ((65024) & (arr_15 [i_5] [i_1] [i_4] [i_5])))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                            arr_17 [i_0] [(signed char)12] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) (signed char)-123)), (var_4)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_12 [i_5] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_4)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) >> (((max((((/* implicit */long long int) 528482304)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4))))) - (528482278LL)))));
    var_16 = ((/* implicit */signed char) max((var_4), (((/* implicit */long long int) var_6))));
    var_17 = ((/* implicit */short) var_9);
}
