/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14967
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */long long int) arr_8 [0LL] [i_1] [i_1] [0LL]);
                            arr_12 [i_0] [(signed char)6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) + ((-(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned short)6])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_7 [i_1] [(short)2] [(short)2]))))))));
                            arr_13 [i_1] [i_0] = ((/* implicit */unsigned short) min((max((arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]), (arr_9 [0U] [(signed char)9] [0U] [(_Bool)1]))), (max(((signed char)32), ((signed char)28)))));
                        }
                    } 
                } 
                arr_14 [i_0] [3] [i_0] = ((/* implicit */long long int) (signed char)32);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 4; i_4 < 19; i_4 += 1) 
    {
        for (long long int i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            {
                arr_20 [i_4] [i_5] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_16 [i_5] [i_4]))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    for (int i_7 = 4; i_7 < 19; i_7 += 4) 
                    {
                        {
                            arr_26 [i_4] [i_4] [i_6] [(_Bool)1] = ((/* implicit */long long int) max((max((((((/* implicit */int) (signed char)14)) << (((arr_21 [i_4] [i_5] [10LL] [i_7]) - (6393658586918635406LL))))), (((/* implicit */int) max((arr_22 [i_5] [i_5] [i_5 - 1]), (arr_22 [i_5] [i_5] [i_6])))))), (((/* implicit */int) (short)-11746))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((int) ((arr_21 [i_4] [i_5] [i_6] [(signed char)10]) >= (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [13LL]))))))), (((unsigned long long int) (signed char)-126)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((4U), (((/* implicit */unsigned int) (short)24495))))), (2199023255520LL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (short i_12 = 1; i_12 < 10; i_12 += 3) 
                        {
                            {
                                arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_12] [i_8] = (-(((/* implicit */int) ((unsigned short) (signed char)2))));
                                var_22 = ((/* implicit */signed char) arr_30 [i_8]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_21 [i_8] [i_9] [i_10] [i_10]))))))));
                                var_24 = ((/* implicit */unsigned int) arr_24 [i_8] [i_9] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((max((min((var_1), (((/* implicit */long long int) (signed char)-126)))), (max((((/* implicit */long long int) (signed char)106)), (var_13))))) + (((/* implicit */long long int) ((/* implicit */int) var_18))));
    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)-26879)), (-5078453627412180226LL))))));
}
