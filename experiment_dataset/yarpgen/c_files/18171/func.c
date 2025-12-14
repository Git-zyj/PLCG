/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18171
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 14U)) ? (3302083494084362158LL) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)4))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_8 [i_4] [i_1])))))), (((((/* implicit */_Bool) min(((signed char)-28), ((signed char)-21)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)162))))) : (2968410213U)))));
                                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */long long int) (-(arr_4 [i_2] [5U] [i_4])))) / ((+((+(var_8))))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)28796))))));
                    arr_12 [i_0] [(short)2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_2]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */unsigned long long int) ((int) ((var_6) - (var_9))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned long long int) var_1)), (var_7)))))));
    var_14 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_0)))))))) / (var_9)));
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            {
                arr_17 [i_6] [i_6] = max((((arr_1 [i_5 + 1]) | (arr_1 [i_5 + 1]))), (((/* implicit */unsigned long long int) ((int) arr_11 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5 + 1]))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)4)), ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_5 - 1] [i_5 - 1])) : (arr_16 [i_5])))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) + (arr_15 [i_6] [i_6]))))))));
                var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [(_Bool)1] [i_5] [i_5])) ? (((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) arr_1 [(unsigned short)0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_6] [i_6])) ? (((/* implicit */int) (short)512)) : (((/* implicit */int) (unsigned char)183))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_6]))) <= (arr_1 [i_6])))) | (((/* implicit */int) arr_11 [i_5] [i_6] [i_5] [i_6] [i_6] [i_5] [i_5])))))));
                var_17 |= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_5 + 1] [i_5 + 1] [i_5 - 1])))))));
            }
        } 
    } 
}
