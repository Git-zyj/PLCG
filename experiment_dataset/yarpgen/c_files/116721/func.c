/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116721
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) var_2))))) : (var_12))))));
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))) + (((/* implicit */int) var_2))))), (min((var_16), (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_18))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [(unsigned short)0] [i_0] [i_1] = ((/* implicit */unsigned char) var_18);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_14 [i_3] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((var_12) < (((/* implicit */unsigned long long int) arr_12 [i_1 + 4] [20U] [i_2] [i_3 + 1] [i_3])))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((min((274877905920ULL), (((/* implicit */unsigned long long int) (signed char)-9)))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(758269803)))) ? (((((/* implicit */_Bool) 4093634052U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) : (4093634052U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8)))))) ? (((/* implicit */long long int) max((arr_0 [16]), ((~(((/* implicit */int) var_17))))))) : (var_19))))));
                    arr_18 [16] [i_1] [i_4] [(unsigned char)19] = ((/* implicit */long long int) (signed char)26);
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_25 [(_Bool)1] [i_1] [20ULL] [20] [(short)13] [i_6] [i_5] = (-(var_16));
                                arr_26 [i_5] [5LL] [(_Bool)1] [i_6] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [i_1] [(signed char)19] [i_5] [14] [(unsigned char)11])), (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            {
                                arr_32 [i_8] [(signed char)7] [18U] [5ULL] [i_1] [i_0] = ((/* implicit */int) ((unsigned short) (-((+(((/* implicit */int) var_6)))))));
                                var_24 = arr_21 [i_0] [(short)10] [(unsigned short)20] [i_4] [18U] [(unsigned short)18] [i_4];
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_25 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) (signed char)-8)), (max((((/* implicit */int) (unsigned char)0)), (557143320)))))) + (((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_1] [(signed char)20] [6] [(unsigned short)12] [i_9] [i_1])) ? (((/* implicit */long long int) arr_1 [i_4])) : (var_15)))));
                        var_26 = ((/* implicit */long long int) var_5);
                        var_27 ^= ((/* implicit */signed char) (-(min((var_10), ((~(((/* implicit */int) var_3))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_28 -= ((long long int) min((((/* implicit */long long int) arr_35 [(unsigned char)20] [(unsigned char)15] [(_Bool)1] [i_10])), (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        arr_38 [i_0] [17] [i_1] [16LL] [(_Bool)1] [(signed char)6] = ((/* implicit */int) max((arr_35 [i_0] [20LL] [(signed char)4] [i_10]), (((/* implicit */short) ((unsigned char) var_11)))));
                    }
                }
                arr_39 [(unsigned short)3] [i_1] [14] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483639)))))));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)18])) ? (arr_33 [4U]) : (((/* implicit */long long int) var_18))))) ? (((/* implicit */int) (signed char)-16)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (var_18))))))))));
            }
        } 
    } 
}
