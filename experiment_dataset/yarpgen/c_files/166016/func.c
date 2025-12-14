/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166016
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
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_4 [(unsigned short)8]))), (arr_4 [6LL])));
                var_18 += var_13;
                var_19 = ((/* implicit */short) ((((unsigned int) arr_5 [i_1])) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0 + 2])) << (((arr_6 [i_0 + 2] [i_0 - 1] [i_0 - 2]) - (2037931316U))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((min(((-(((/* implicit */int) arr_7 [1ULL] [1ULL])))), (((((/* implicit */_Bool) (short)-3229)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)2047)))))) > (((/* implicit */int) arr_9 [13LL]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((unsigned int) ((((arr_15 [i_2 - 1] [i_4] [i_5] [i_6]) ? (4908111205723147648ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2047))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2972684704U)) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_7))))))));
                                var_22 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_3 + 1] [i_2 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_2 + 2] [i_2 + 2] [i_4] [(_Bool)1] [i_6] [i_5 - 2] [i_3])))), ((((-(((/* implicit */int) arr_18 [i_2] [i_3] [i_6] [i_4] [i_2] [i_2])))) - (((/* implicit */int) arr_15 [i_2 - 1] [i_3] [i_4] [5LL]))))));
                                arr_20 [i_6] [i_5 + 1] [(unsigned short)11] [i_3 - 1] [i_6] = ((/* implicit */long long int) 2ULL);
                                var_23 = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [2U] [i_5 + 1] [11U] [i_5 - 1] [i_5] [i_5] [i_5]), (((/* implicit */unsigned short) arr_15 [i_5] [i_5 + 1] [i_5] [i_5 - 1])))))) : (((((/* implicit */_Bool) max((4248259183U), (((/* implicit */unsigned int) arr_16 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [15ULL]))) : (46708095U)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-10487)) | (((/* implicit */int) (short)-32765))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) var_1)))))))) : (((((/* implicit */_Bool) 1322282601U)) ? (((/* implicit */int) (short)120)) : (((/* implicit */int) ((-250121758) <= (((/* implicit */int) (_Bool)0))))))))))));
                }
            } 
        } 
    } 
}
