/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146821
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
    var_14 = ((/* implicit */short) 15030322676995810685ULL);
    var_15 = max((var_13), (((/* implicit */unsigned long long int) var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (1728453027080064048ULL)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_1]))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    arr_13 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5895629686610425702ULL)) ? (((/* implicit */int) (short)-27666)) : (((/* implicit */int) (short)27666))))) ? (((/* implicit */int) (short)-27666)) : (((/* implicit */int) (short)-27666))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */short) 4886401638223677181ULL);
                        arr_17 [i_3] [i_4] [i_2] [i_3 + 1] [i_1] [i_3] [(short)4] = 5157836671018831888ULL;
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        arr_20 [i_1] [i_1] [i_5 - 1] = (short)-27666;
                        var_19 = arr_1 [i_3] [15ULL];
                    }
                }
                for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 3) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)27680)) ? (((/* implicit */int) (short)-27666)) : (((/* implicit */int) (short)-27671))));
                    var_21 = ((/* implicit */unsigned long long int) (short)27670);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        arr_27 [i_6 + 1] [i_1] [i_2] [(short)17] [i_7] [(short)17] [i_0] &= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2]);
                        arr_28 [3ULL] = ((/* implicit */short) ((((/* implicit */_Bool) 8086915406247014237ULL)) ? (((/* implicit */int) (short)-27666)) : (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])) ? (((/* implicit */int) (short)27694)) : (((/* implicit */int) arr_1 [i_7] [i_0]))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_2] [i_6 + 1] [2ULL] [i_0 - 2] = arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1];
                        var_22 |= ((/* implicit */unsigned long long int) (short)29380);
                    }
                }
                arr_32 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (short)29380);
            }
        }
    }
}
