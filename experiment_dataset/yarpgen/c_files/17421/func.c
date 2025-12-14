/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17421
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)124)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_1])) ? (((/* implicit */long long int) arr_2 [i_0 + 1])) : (arr_1 [i_0])))))) ? (((/* implicit */int) (signed char)12)) : (((((/* implicit */int) min((((/* implicit */short) arr_0 [i_1])), (arr_3 [i_0 - 1] [i_1] [i_1])))) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) + (132398524)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) (unsigned char)255);
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_2])))), (((/* implicit */int) (signed char)11))));
                }
                var_18 = ((/* implicit */int) 63ULL);
                var_19 = (unsigned char)116;
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned short) 479112368U);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_4] [i_3]), (arr_11 [(_Bool)1] [i_3]))))) : (((((/* implicit */_Bool) (short)-15494)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7582642704677599320LL)))))) : (((((/* implicit */_Bool) arr_8 [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3]))) : (arr_9 [i_3] [i_4])))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3])) ? (min((((((/* implicit */_Bool) arr_9 [i_3] [i_4])) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (short)0)))), (((((/* implicit */_Bool) (short)1990)) ? (arr_13 [i_3]) : (((/* implicit */int) (signed char)8)))))) : (((/* implicit */int) (signed char)8))));
            }
        } 
    } 
}
