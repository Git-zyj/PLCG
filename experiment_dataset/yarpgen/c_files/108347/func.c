/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108347
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_3) : (((/* implicit */int) var_12))))))) ? (((unsigned int) max((var_12), (var_12)))) : (((/* implicit */unsigned int) min((var_7), (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 ^= ((min((max((((/* implicit */int) var_6)), (arr_8 [0]))), (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))))) || (((((/* implicit */_Bool) 2ULL)) || (((/* implicit */_Bool) var_11))))))));
                                var_15 = ((/* implicit */int) var_6);
                                arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [13ULL] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24576))) : (var_1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) + (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (3121740279579531165LL) : (7236014331979710399LL)))))))));
                            }
                        } 
                    } 
                    arr_13 [9] [9] [i_2 + 1] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)15])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)142))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)13)))) ? (arr_4 [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-4642))))))))));
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_7)))) ? (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) (~(291223144)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (var_8)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [5ULL] [i_1] [5ULL] [i_1])) ? (((/* implicit */int) var_2)) : (var_7))), (((/* implicit */int) max((var_12), (arr_10 [(short)2] [2] [i_2 - 1] [i_2 - 1]))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [10])) : (var_7)))) : (((((-3656821002530683172LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)22022)) - (22011)))))))));
                        var_16 ^= ((/* implicit */int) var_2);
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_0);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) var_4)), (var_10)))))) ? (max((((((/* implicit */unsigned long long int) var_7)) | (var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (-2147483633)))))) : (((/* implicit */unsigned long long int) var_7))));
    var_19 = ((/* implicit */short) var_8);
}
