/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108928
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
    var_13 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */unsigned long long int) min(((((+(((/* implicit */int) var_11)))) - ((~(((/* implicit */int) var_8)))))), (((/* implicit */int) var_11))));
                var_15 &= ((/* implicit */signed char) (!(max((var_1), (var_1)))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : ((+(2776574212U)))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] = max((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) & ((+(((/* implicit */int) var_4)))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_2)))));
                                var_17 += ((/* implicit */short) (((-(((/* implicit */int) max((var_6), (var_6)))))) ^ (min((((/* implicit */int) var_12)), (min((var_0), (((/* implicit */int) var_7))))))));
                                arr_12 [i_3] &= min(((+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (var_0))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) : (min((var_0), (((/* implicit */int) var_8)))))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 4) 
                    {
                        {
                            arr_24 [i_8] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_6))))) ? (max((((/* implicit */int) ((var_0) >= (((/* implicit */int) var_2))))), ((+(((/* implicit */int) var_2)))))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_7)))));
                            var_20 += ((max((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_1))))), (((((/* implicit */int) var_8)) + (((/* implicit */int) var_1)))))) != (min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                            arr_25 [i_0] [i_0] [i_1] [i_7] [(unsigned short)15] [i_8 - 2] = ((/* implicit */unsigned long long int) (!(((max((((/* implicit */unsigned int) var_2)), (1518393070U))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))));
                            arr_26 [i_8 + 1] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (signed char)-97)), (-684081445))) * (max((((/* implicit */int) (!(var_1)))), (((((/* implicit */int) var_6)) & (((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
