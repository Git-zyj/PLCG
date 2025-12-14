/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134611
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
    var_15 = ((/* implicit */unsigned int) ((min(((!(((/* implicit */_Bool) var_1)))), ((!(((/* implicit */_Bool) (signed char)116)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_13)))), (((var_9) <= (((/* implicit */unsigned long long int) var_10)))))))) : (min(((-(var_4))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_9)))))));
    var_16 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (_Bool)1))));
                                arr_13 [i_0] [i_3 + 3] [i_3] [i_3 + 3] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_11 [i_0] [(unsigned char)15] [i_3 + 2] [i_0]);
                                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)247)))) : (((/* implicit */int) min((arr_7 [i_1] [i_2] [i_1] [i_1]), (arr_7 [i_0] [(short)2] [i_2] [i_2]))))))));
                                arr_14 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */int) arr_10 [i_3 + 3] [i_3] [i_3 + 1] [4U]);
                                var_19 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_7 [i_0] [i_1] [i_3 + 3] [i_1])))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] = ((((/* implicit */_Bool) 2847653520U)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (short)27633)));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_0] [10] [(unsigned short)5] [(unsigned short)15] [i_7] [11U] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)11] [i_5] [i_6])) ? (arr_10 [i_7] [i_6] [14] [i_1]) : (arr_10 [i_7] [i_1] [i_5] [i_6]))), (((/* implicit */long long int) ((arr_10 [i_7] [(short)1] [i_5] [i_6]) < (arr_10 [i_7] [i_7] [(signed char)7] [i_7]))))));
                                var_20 += ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_0] [i_1] [(short)9] [i_6] [(unsigned short)6] [i_1])), (arr_17 [i_1] [i_1] [i_1])))) : (min((255U), (var_10)))))));
                                var_21 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (arr_6 [i_0] [(unsigned short)16]))) / (((/* implicit */int) arr_18 [i_0])))) < ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)27633))))))));
                                var_22 += ((/* implicit */signed char) min(((-(arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) var_11))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) arr_7 [i_0] [(signed char)8] [i_0] [i_1])) : (arr_2 [i_0] [i_0] [i_1]))), (((/* implicit */int) (unsigned char)232)))))));
            }
        } 
    } 
}
