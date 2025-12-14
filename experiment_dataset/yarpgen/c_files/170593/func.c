/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170593
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
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_12 ^= (-(((((/* implicit */_Bool) -301580552)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (17961359618794804978ULL))));
                            var_13 -= ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
                var_14 = -1411928212;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_18 [i_6] [i_1] [i_5] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_1] [i_4] [i_5] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) (signed char)12))))) : (((unsigned long long int) arr_10 [i_6] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_12 [i_1 - 1] [i_4] [i_5] [i_1]))) / (arr_1 [i_1] [i_1]))))));
                                var_15 = max((((((/* implicit */_Bool) ((long long int) arr_14 [i_1] [i_1] [i_1] [i_5]))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_1] [i_4] [i_6])))) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1 - 1] [i_5] [i_6] [i_0])))), (((/* implicit */unsigned long long int) arr_0 [i_0])));
                                arr_19 [i_1] = ((/* implicit */unsigned short) var_3);
                                var_16 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) ((((/* implicit */_Bool) 13666860638953861635ULL)) ? (17961359618794804978ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
