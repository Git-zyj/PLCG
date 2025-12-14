/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154729
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
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_7)))) ? (var_2) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (signed char)127)) ? (var_9) : (((/* implicit */long long int) var_7)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)89)))) : (((/* implicit */int) var_8))))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (830645409638541266ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1]))))))));
                                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) (signed char)-33))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(signed char)13])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1])))))));
        var_16 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)18910)) : (((/* implicit */int) var_1)));
        arr_11 [18U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [(signed char)10])) : (((/* implicit */int) arr_8 [2]))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (3062208296U) : (var_7)))) ? (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) : (var_0)));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)31)) : (arr_7 [i_6])))) ? (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (unsigned char)162)) : (arr_7 [i_6]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
                var_19 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5] [12] [i_6])) ? (((/* implicit */int) arr_2 [i_5] [(short)18] [i_6])) : (((/* implicit */int) arr_2 [i_5] [19ULL] [i_6]))))) : (((((/* implicit */_Bool) arr_2 [i_5] [i_6] [12LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (16760832ULL))));
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_16 [i_6]) : (arr_16 [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7118752180202526736ULL)) ? (((/* implicit */int) arr_8 [i_6])) : (((/* implicit */int) arr_8 [i_5]))))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_7);
}
