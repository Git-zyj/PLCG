/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107496
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((unsigned int) arr_12 [4ULL] [i_4 - 2] [i_4 - 2] [5] [i_4] [i_4 - 1]))));
                                arr_14 [i_0] [i_0] [i_2] [(unsigned char)14] [(signed char)12] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_4 - 2] [(short)12] [i_4 - 2])) ? (arr_6 [i_4 + 1] [(unsigned short)6] [i_4 - 2]) : (arr_6 [i_4 - 1] [(unsigned char)4] [i_4 - 2])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    arr_18 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_4)))));
                    arr_19 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_4 [i_5])) + (((/* implicit */int) (unsigned char)87))))));
                }
                for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) var_4);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_0 [i_8 - 1])))) ? (var_7) : (((/* implicit */int) (_Bool)0))));
                                arr_30 [i_0] [i_1] [i_6] [i_0] [i_8] = (!(((/* implicit */_Bool) (unsigned char)58)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_18 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (-1051990848) : (((/* implicit */int) arr_2 [i_1] [i_9])))));
                        arr_33 [i_0] [i_0] = ((/* implicit */int) arr_21 [i_9] [i_0] [i_0]);
                        var_19 = ((/* implicit */unsigned char) arr_23 [i_0]);
                        var_20 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_6] [i_9] [i_1] [5LL])))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((int) var_16)) : ((~(((/* implicit */int) arr_4 [(unsigned short)6]))))))));
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)58)), ((unsigned short)4095)));
    var_22 += ((/* implicit */long long int) ((min(((+(var_7))), (((/* implicit */int) var_12)))) != (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_6)))))))));
}
