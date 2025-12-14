/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154704
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (min((((/* implicit */unsigned int) (short)19056)), (arr_5 [i_1 + 1] [i_0] [i_0 - 3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 2] [i_1])) ? (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1])) : (arr_4 [i_0] [i_1])))) ? (((arr_4 [i_0 - 1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 + 1] [(short)4])) - (((/* implicit */int) arr_1 [i_0 + 1]))))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2]))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_4] [i_2] [i_1] [i_0]) ? (arr_5 [i_0 - 3] [i_0] [i_0 - 2]) : (arr_5 [i_0] [i_2 - 1] [i_0])))) ? (arr_9 [i_0 + 2] [i_1 + 1] [i_2 + 1]) : (((/* implicit */int) ((arr_8 [i_1] [i_2 + 1] [i_2 + 1] [i_4]) && (((/* implicit */_Bool) arr_2 [i_1] [i_3])))))))) ? (((/* implicit */int) arr_14 [i_1 - 1] [i_2 + 1] [i_4])) : (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_6 [i_1] [i_1] [i_4])))))));
                                var_21 -= ((/* implicit */unsigned int) arr_3 [i_0 - 3] [i_1 - 1]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (int i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */int) arr_6 [i_0] [i_0] [i_7]);
                                var_23 += ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_0 + 2] [i_1] [i_5] [i_6 - 3] [i_6 - 3] [i_7])) : (((/* implicit */int) arr_20 [i_0] [i_1 - 1] [i_5] [i_5]))))) + ((+(17577871906724478427ULL))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_11 [i_0 + 1] [12] [(_Bool)1] [i_1 + 1])))) ? (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)12)) : (-29))) : (arr_9 [i_0 - 2] [i_1 + 1] [i_0]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_14);
}
