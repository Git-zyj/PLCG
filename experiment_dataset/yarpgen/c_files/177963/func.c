/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177963
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)192))))))), (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_0 + 2]))));
                    var_16 += ((/* implicit */_Bool) (((+(arr_6 [(short)0] [i_1 - 1] [i_1 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_6 [i_0] [i_1 + 1] [i_2 - 1])))) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) (~(4294967295U))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_22 [i_3] [i_3] [i_4] [i_6] [i_4] [i_6] = arr_12 [i_4];
                            arr_23 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_4] [i_4])) ? (-973649573) : (((/* implicit */int) (_Bool)1))))) ? (arr_17 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_4]))))))));
                        }
                        for (signed char i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            arr_27 [i_3] [i_4] [(signed char)8] [(signed char)8] [i_3] = ((/* implicit */signed char) var_13);
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [2] [i_5] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_19 [i_4] [i_4] [i_4] [i_5] [i_8 + 2]))))));
                        }
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_6] [i_5]));
                    }
                } 
            } 
            var_20 &= ((/* implicit */unsigned int) (unsigned char)187);
        }
        var_21 = ((/* implicit */unsigned char) (~((~(arr_16 [0U] [i_3] [0U])))));
    }
    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
}
