/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150773
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((-1419596657), (((/* implicit */int) arr_3 [i_1] [i_0])))) - (((var_1) ? (var_2) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) ? (min((((/* implicit */int) arr_0 [i_1 + 1])), (((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) var_12)))))) : (((/* implicit */int) arr_0 [i_1]))));
                var_19 = ((/* implicit */short) (~(min((((/* implicit */long long int) -1419596647)), (-1187237204320552192LL)))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-24)) - (((/* implicit */int) (signed char)17))))) - (((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)33), (var_12))))) - (((unsigned int) 20U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 17; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 + 1]))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_11 [i_2] [i_3])))))))));
                    arr_13 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */int) ((arr_8 [i_4 + 2] [i_2] [i_2 + 1]) >> ((+(((/* implicit */int) var_6))))));
                    var_23 = ((/* implicit */int) var_1);
                }
                var_24 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) min((arr_11 [i_2] [i_3]), (arr_11 [i_3] [i_2])))) >= (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_2]))))))) >> (min((((/* implicit */unsigned int) 1173726824)), (21U)))));
                var_25 = (+(1883071061));
            }
        } 
    } 
}
