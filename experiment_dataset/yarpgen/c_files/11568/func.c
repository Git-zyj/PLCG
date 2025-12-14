/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11568
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [(unsigned short)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_2 [5ULL] [i_1] [i_1])))))))) ? ((((!(((/* implicit */_Bool) (unsigned short)11)))) ? (((/* implicit */unsigned int) (-(var_4)))) : (min((((/* implicit */unsigned int) (_Bool)1)), (2242254234U))))) : (var_9)));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */unsigned int) ((_Bool) (_Bool)1))))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1)))))));
                    arr_8 [(unsigned char)7] [3U] [2LL] [i_2] = ((/* implicit */unsigned int) ((_Bool) (+(18032491789821352053ULL))));
                    arr_9 [i_2] [i_2] [7LL] = ((/* implicit */_Bool) arr_5 [(unsigned char)20] [i_1] [i_2]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                arr_15 [12] [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((var_7) + (((/* implicit */unsigned int) var_4))))) - (min((-7007173381416477528LL), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15853)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62092))) : (var_5)))) ? (((arr_11 [8U]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_3] [i_4])))) : (((/* implicit */int) (signed char)41)))))));
                arr_16 [i_3] [i_4] = ((/* implicit */unsigned long long int) (((!(arr_1 [i_3]))) ? (min((arr_3 [(short)10] [i_4] [i_4]), (((/* implicit */int) arr_1 [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_3 [0ULL] [(unsigned short)3] [i_4])))))));
                arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) >= (((((/* implicit */_Bool) arr_6 [i_3])) ? (var_11) : (((/* implicit */long long int) var_7))))));
                arr_18 [(signed char)1] [i_3] [13LL] = ((/* implicit */int) (_Bool)1);
                arr_19 [i_3] [i_3] [5U] &= ((/* implicit */long long int) -261387186);
            }
        } 
    } 
}
