/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/16
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)12))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 += (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */int) (short)-10311)) + (10338))) - (27))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) <= (var_2)));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)63)) * (((/* implicit */int) var_1))))) ? (arr_9 [(short)10] [i_1] [i_2] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_11 [i_1] = ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_1 - 2] [i_2] [i_0 - 2])) ? (arr_7 [i_3 + 1] [i_1 - 2] [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) (+(var_10)));
                                var_19 = ((/* implicit */_Bool) (+((((_Bool)1) ? (arr_9 [i_0] [i_2] [(_Bool)1] [i_5]) : (746818373U)))));
                                arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_1)))));
                                arr_17 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (signed char)-5);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned long long int) arr_4 [i_8] [(short)6]);
                                var_21 *= ((/* implicit */short) (((-(((/* implicit */int) min((((/* implicit */signed char) arr_21 [2U] [i_6] [i_6] [i_1])), (var_8)))))) >= ((((~(((/* implicit */int) var_7)))) & (((((/* implicit */int) arr_27 [i_1])) & (((/* implicit */int) var_0))))))));
                                arr_29 [i_8] [(_Bool)0] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26606)) ? (((((/* implicit */_Bool) max(((signed char)105), (var_1)))) ? (2147483647) : (((((/* implicit */_Bool) (signed char)2)) ? (2147483616) : (((/* implicit */int) (short)4615)))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2])) > (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 3])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = var_6;
}
