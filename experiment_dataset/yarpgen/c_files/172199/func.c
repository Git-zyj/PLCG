/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172199
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_16 ^= ((/* implicit */signed char) ((arr_2 [i_0]) + (((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */int) var_8)))))));
        var_17 = ((/* implicit */int) max((var_17), ((-((+(((/* implicit */int) var_3))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_1]));
            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_19 = (~(((/* implicit */int) var_8)));
                        var_20 += var_6;
                        var_21 = ((/* implicit */long long int) var_8);
                        var_22 = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
                    }
                } 
            } 
            var_23 = (+(219792339));
        }
    }
    /* LoopNest 3 */
    for (short i_4 = 1; i_4 < 14; i_4 += 2) 
    {
        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 3) 
        {
            for (int i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_13))))), ((~(arr_9 [i_4] [i_4])))))) : (((arr_17 [i_4] [i_5] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4 + 1] [i_6]))) : (var_6)))));
                    arr_20 [i_4] [i_4] [i_4] [i_4] = max(((short)-495), (((/* implicit */short) (signed char)-51)));
                    arr_21 [0] [i_5] [0] &= ((((/* implicit */int) ((((3652767261U) * (3865258785U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) >> ((((+(((((/* implicit */_Bool) var_11)) ? (arr_3 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) + (1238130595683240078LL))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((16829126745178842951ULL) ^ (((/* implicit */unsigned long long int) arr_15 [i_4] [2LL])))))))), (arr_13 [i_5]))))));
                    arr_22 [i_4] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) -1071650185)) : (((((/* implicit */_Bool) -1071650185)) ? (6807844606205939256ULL) : (((/* implicit */unsigned long long int) 429708509U)))));
                }
            } 
        } 
    } 
}
