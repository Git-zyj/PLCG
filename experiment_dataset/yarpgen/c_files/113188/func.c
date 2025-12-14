/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113188
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_2])) ? (arr_6 [(_Bool)1] [i_1] [i_1] [i_0]) : (arr_6 [i_2] [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), ((-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) : (arr_5 [i_2]))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-733142027)))) ? (((/* implicit */int) (!(var_9)))) : (((/* implicit */int) (signed char)2))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])) ? ((-(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_4 [i_3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -733142053)))))));
                                var_20 = (((!(((/* implicit */_Bool) arr_12 [4U] [4U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 - 1])))))) : (max((((/* implicit */unsigned long long int) (~(arr_6 [i_0] [i_0] [(unsigned short)10] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_5 [(unsigned short)5]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            for (signed char i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                {
                    arr_23 [i_5] [i_6] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5])))))));
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 185071290U)), (((10487286701329670520ULL) / ((~(var_15)))))));
                    var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_6] [i_5])) : (((/* implicit */int) var_16)))) != (max((((/* implicit */int) arr_17 [i_5] [i_5])), (733142026)))))), (min((((((/* implicit */_Bool) 0U)) ? (8758391737913477932ULL) : (((/* implicit */unsigned long long int) 733142062)))), (((/* implicit */unsigned long long int) min((arr_21 [i_5] [i_5] [i_7]), (arr_17 [i_5] [i_5]))))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)23816)), (12288)))) ? (((((/* implicit */_Bool) -295416505)) ? (arr_18 [i_5] [i_5]) : (arr_18 [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5])))));
                }
            } 
        } 
    } 
}
