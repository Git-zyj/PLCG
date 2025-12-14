/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18430
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((-597194434), (((/* implicit */int) arr_0 [7U] [i_0]))))))) ? (max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3912844241U)) ? (((/* implicit */long long int) 597194439)) : (var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0])))))));
        var_15 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)80))))))) ? (((arr_0 [(unsigned char)9] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) : (2097151U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_13)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) << (((-597194434) + (597194452)))));
        arr_4 [i_1] [i_1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)30))));
    }
    for (long long int i_2 = 4; i_2 < 11; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_9))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-104)))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((_Bool) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6 - 1])) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2 + 2])) ? (var_3) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)52)), (4292870139U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4953749895846011853LL)) ? (((/* implicit */int) arr_19 [i_2] [i_6] [i_6] [i_6 + 2] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                                arr_21 [i_2] [i_5] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                    arr_22 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3831774022U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2 - 2] [i_2] [i_2]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_6), ((unsigned char)31))))) > (3425131924560410494LL))))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [10U] [i_2] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4292870144U)))) ? (arr_18 [i_2] [i_2 - 1] [i_3] [i_4 + 1] [i_7]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)100))))))))));
                        arr_27 [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [(_Bool)1] [i_4 + 1] [i_3]))) : (2921291188U)))) == ((-(arr_8 [i_2 + 1])))));
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))) == (var_13)))))))));
    }
    var_22 *= ((/* implicit */unsigned int) ((int) var_8));
}
