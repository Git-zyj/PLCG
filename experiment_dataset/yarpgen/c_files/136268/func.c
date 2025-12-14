/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136268
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
    var_13 = ((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */long long int) 958655376)) : (max((((/* implicit */long long int) (unsigned short)10302)), (-91935426906871176LL)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */int) (+(min(((-(arr_3 [i_0] [(signed char)12]))), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1]))))));
                    var_14 -= ((/* implicit */short) (~(max((arr_0 [i_0] [i_1 + 1]), (arr_0 [i_1 - 1] [i_0])))));
                    arr_9 [(short)4] [i_1] |= ((/* implicit */unsigned long long int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((_Bool) var_8))), ((short)-15598)))))));
                    var_15 = ((/* implicit */unsigned long long int) (+(4968328420688356574LL)));
                }
            } 
        } 
        var_16 = ((long long int) 2029816531);
        arr_10 [i_0] = ((/* implicit */short) arr_4 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_6 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_12 [i_3]))))));
        var_17 += ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned short) (signed char)39)), ((unsigned short)59319))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (short i_5 = 4; i_5 < 10; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_5] [(short)9] [i_3] [i_3])) ? (((/* implicit */int) (short)25731)) : (((/* implicit */int) var_8)))) / (((((/* implicit */_Bool) 4968328420688356574LL)) ? (((/* implicit */int) arr_1 [i_3])) : (-469387625)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15598)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_5]))) : (arr_16 [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 + 3] [i_5 - 2] [i_5 + 3]))) : (max((((/* implicit */unsigned int) (unsigned short)7)), (4130857732U))))))))));
                    var_19 += ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)34)) || (((/* implicit */_Bool) (unsigned short)22261)))));
                    arr_22 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((-(2268977035U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_4] [i_5 + 4] [i_5 + 3])) ? (((/* implicit */int) arr_4 [i_3] [i_5 + 4] [i_5 + 3])) : (((/* implicit */int) arr_17 [i_4] [i_5 + 4] [i_5 + 3])))))));
                    arr_23 [i_5] = ((/* implicit */unsigned long long int) (short)-26396);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) (short)-10565);
    var_21 += var_7;
}
