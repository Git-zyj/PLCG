/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163548
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) : (max((((/* implicit */unsigned long long int) (signed char)102)), (arr_7 [i_0] [i_1] [i_1] [i_2 + 2])))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((+((~(arr_9 [i_0] [i_1] [i_2] [i_2]))))) == (((/* implicit */long long int) ((((((/* implicit */int) arr_8 [17ULL] [i_0] [i_0])) & (((/* implicit */int) (signed char)-11)))) >> ((((~(((/* implicit */int) var_10)))) + (34))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned int) (signed char)-11)))));
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6] [i_6]))) : (max((var_7), (((/* implicit */long long int) (signed char)11)))))))));
                                arr_26 [i_3] [i_3] [9ULL] [i_3] [9ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((signed char)11), (((signed char) arr_2 [i_3 - 1] [i_6])))))));
                                arr_27 [(signed char)2] [(signed char)2] [(_Bool)1] [(signed char)2] [i_5] [(signed char)2] [i_7] = ((/* implicit */unsigned char) ((arr_25 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 + 2]) ? (((/* implicit */int) max((var_10), (((/* implicit */signed char) arr_25 [i_4] [i_4] [i_4] [(unsigned char)2] [i_4 + 2]))))) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                } 
                arr_28 [i_3] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)7457)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)11))) : (787241043599093739LL)));
                arr_29 [i_3 + 3] [i_3 + 3] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1616))) / (67553994410557440ULL)));
            }
        } 
    } 
}
