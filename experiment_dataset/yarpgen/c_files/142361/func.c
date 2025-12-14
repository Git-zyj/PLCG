/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142361
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
    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */int) var_5))))) ? (var_3) : (((/* implicit */int) ((unsigned short) var_6))))) ^ (((/* implicit */int) var_5)));
    var_21 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_22 = ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13)))) ? ((+(arr_2 [14]))) : (((int) max((4101021599U), (((/* implicit */unsigned int) arr_0 [(unsigned short)12] [10]))))));
                var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (arr_2 [i_0 - 3])))) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (arr_4 [i_0 - 2]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_24 = (i_2 % 2 == zero) ? (((2067939142) >> (((((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_1] [i_1] [i_2] [i_3 + 1]))) * (var_17))) + (193945696U))) - (2848049755U))))) : (((2067939142) >> (((((((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_1] [i_1] [i_2] [i_3 + 1]))) * (var_17))) + (193945696U))) - (2848049755U))) - (3770851001U)))));
                            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_2] [i_3] [i_2 + 1] [i_2])) : (((/* implicit */int) var_18)))) == ((-(var_10)))));
                            var_26 = ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (unsigned short i_5 = 1; i_5 < 8; i_5 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    var_27 = ((/* implicit */int) arr_6 [9] [16] [9] [i_5]);
                    var_28 = ((/* implicit */int) (~(arr_5 [i_5 + 2] [i_5 + 2] [i_5])));
                }
                arr_16 [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_5 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_2 [5U]) : (arr_2 [i_4])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) | (4294967295U)))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (var_9) : (((/* implicit */int) var_15)))))));
}
