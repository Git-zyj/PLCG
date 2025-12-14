/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186546
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) min((((/* implicit */int) arr_1 [i_0])), (min((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) ((var_8) <= (((/* implicit */int) var_4))))) : (((/* implicit */int) var_2))))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_11 = ((/* implicit */int) min((var_11), ((+(((/* implicit */int) var_9))))));
        var_12 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)114), ((signed char)114))))))) != (((/* implicit */int) arr_1 [(short)16]))));
    }
    for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
    {
        var_13 -= ((int) ((unsigned short) arr_6 [18]));
        arr_10 [i_2] [i_2] = ((/* implicit */short) var_0);
        var_14 = ((/* implicit */short) ((max(((+(var_8))), (((/* implicit */int) arr_9 [(signed char)20] [i_2])))) == (((/* implicit */int) ((short) ((((/* implicit */_Bool) 3632067948472652459LL)) || (((/* implicit */_Bool) arr_7 [7] [i_2]))))))));
    }
    var_15 = ((/* implicit */int) min((var_15), (max((((/* implicit */int) ((signed char) max((var_2), (((/* implicit */short) var_3)))))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))), (((/* implicit */int) max((var_0), (var_3))))))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((((var_0) ? (arr_11 [i_3] [i_4]) : (((/* implicit */unsigned long long int) arr_12 [i_4])))), (((/* implicit */unsigned long long int) max(((~(arr_12 [i_4]))), (((/* implicit */int) max((var_3), (var_9)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_23 [i_7] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((unsigned char) var_8))))));
                                var_17 &= ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) -5338643331915976320LL))));
}
