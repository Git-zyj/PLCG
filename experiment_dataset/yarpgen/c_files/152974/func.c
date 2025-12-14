/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152974
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((((((/* implicit */int) var_4)) * (((/* implicit */int) ((unsigned short) var_0))))) - (968995701))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ ((~(-4495250711873880256LL))))))));
    var_14 &= ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) 9294646550087984070ULL);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [8ULL] [i_3] [i_2] [i_1] [i_0])), (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3] [i_4])) ? (arr_0 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_0] [i_1] [i_0]))))))))));
                                var_17 ^= ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [9ULL] [9ULL] [i_2] [9ULL] [6ULL])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1])))))))), (var_11)));
                                arr_14 [i_1] [i_3] [(unsigned short)8] [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)7230)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [5])) && (((/* implicit */_Bool) arr_2 [i_3] [i_4]))))) : ((-(((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) -4495250711873880256LL)) ? (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-4495250711873880236LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)7262)))))));
                                var_18 = arr_1 [i_1] [i_1];
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1]))));
                        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) var_8));
                        var_22 ^= ((/* implicit */short) ((unsigned long long int) (short)9));
                        var_23 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)35556))))));
                    }
                    var_24 = ((/* implicit */unsigned short) ((unsigned int) 0U));
                }
                arr_21 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) 17288849410943521551ULL)))));
            }
        } 
    } 
}
