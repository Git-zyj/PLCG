/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152436
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
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) ((_Bool) (unsigned char)149))) : (((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) var_0)) : (arr_0 [i_0] [i_1])))))) : (max((max((((/* implicit */unsigned int) (unsigned char)116)), (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned int) ((unsigned short) arr_3 [i_1])))))));
                arr_6 [i_1] [i_1] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)63)) << (((((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) : (arr_1 [i_0 + 1] [i_0 + 3])))) - (46ULL)))));
                var_15 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2])) ? (((unsigned int) arr_0 [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6)))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-70)) || (((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))))));
                var_16 = ((/* implicit */unsigned long long int) ((signed char) arr_2 [i_0 + 1]));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) < (((/* implicit */int) ((((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))))) != (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_12))))))))));
    var_18 -= ((var_1) << (((unsigned long long int) ((unsigned int) var_4))));
    var_19 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 8; i_2 += 4) 
    {
        for (short i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_20 -= (+(((/* implicit */int) max((arr_14 [i_5] [i_3 - 1] [i_2]), (((/* implicit */signed char) arr_2 [i_2 - 2]))))));
                                arr_20 [i_4] [i_3 + 1] [i_4] [9ULL] [i_6] = ((/* implicit */signed char) min((max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) != (-8140248583868175507LL)))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-70)) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)66)) : (arr_0 [i_3 + 1] [i_6]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 3])) ? (((/* implicit */long long int) min((var_6), (-1884411416)))) : (arr_23 [i_2 + 4] [i_3 + 1] [i_3 + 1] [i_7] [i_7 + 3])))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) -613824507237606315LL)) - (18446744073709551607ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_2 + 3])) : (arr_0 [i_3 - 1] [i_2 + 1]))))));
                        arr_24 [i_2 - 2] [i_4] [i_7] [i_2 - 2] [i_2 - 2] = ((/* implicit */long long int) ((unsigned char) (~(arr_11 [i_3 + 1] [i_2 + 4]))));
                        var_22 = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_2 + 3] [i_3 + 1])) | (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_22 [i_2 + 2] [i_3 + 1])) : (((/* implicit */int) var_3))))));
                    }
                    var_23 |= ((/* implicit */signed char) arr_10 [i_4] [i_3 + 1] [i_2]);
                }
            } 
        } 
    } 
}
