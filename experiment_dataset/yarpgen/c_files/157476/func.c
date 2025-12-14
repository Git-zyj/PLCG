/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157476
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
    var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned long long int) var_12)) << ((((-(((/* implicit */int) var_7)))) + (17431)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) -897708800)))))))) : (var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-(max(((+(arr_0 [i_0] [i_1]))), (2820312921161171889ULL)))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [(signed char)4] [i_3] [i_2] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [i_0]);
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [8] [i_1] [i_2] [i_3] [i_4])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -897708800)) : (14101115570787158751ULL)))) ? (arr_4 [i_2 + 2] [i_2 - 1] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (var_0)));
                                arr_14 [i_4] [0U] [i_4] [0U] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((14101115570787158755ULL), (arr_0 [i_1] [i_1])))))) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [(_Bool)1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(15501305412378501240ULL)))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-6713))));
            }
        } 
    } 
}
