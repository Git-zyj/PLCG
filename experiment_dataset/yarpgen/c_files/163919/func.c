/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163919
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(min((898191306U), ((-(898191321U)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 1699082549U)))) ? (min((1699082549U), (898191336U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32027)))))) && (((/* implicit */_Bool) var_5))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_10 [i_3 + 1] [i_3] [i_3] [i_3 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_16 [i_0] [2] [i_0] = ((/* implicit */unsigned short) ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_4))))) >= (2595884767U)));
                    }
                    arr_17 [i_0] [i_0] [4U] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((3396775998U), (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */_Bool) 3396775975U)) ? (arr_0 [i_2] [i_1]) : (3396775991U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 898191321U)) ? (((/* implicit */int) arr_7 [0U])) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)28726))))) / (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) & (arr_6 [i_0] [(_Bool)1] [(_Bool)1]))) <= (((/* implicit */long long int) (-(max((arr_2 [i_0]), (((/* implicit */int) var_13)))))))));
                                var_19 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_1)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_14 [i_2] [i_1] [i_0] [i_0] [i_0])), (arr_18 [i_0] [4ULL] [i_2] [i_1])))) ^ (((((/* implicit */_Bool) -2842407386915028904LL)) ? (((/* implicit */long long int) 2068630714U)) : (-1667556638932650267LL)))));
                }
            } 
        } 
        var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 898191322U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) : ((-(2595884747U))))))));
    }
    var_22 += ((/* implicit */int) var_6);
}
