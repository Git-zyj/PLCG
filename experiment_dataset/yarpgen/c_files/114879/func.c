/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114879
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
    var_11 = ((/* implicit */unsigned char) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3 + 2] [i_2] [0ULL] [i_2] [(_Bool)1] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)9461)), (arr_7 [(_Bool)1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) <= (((/* implicit */int) (unsigned short)58889))))) : (((/* implicit */int) (signed char)126))))) >= (((unsigned long long int) arr_10 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_4]))));
                                var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(unsigned char)8] [(unsigned char)8] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) (signed char)54)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_2 [i_4] [i_3] [i_0])))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0] [8ULL]);
                }
            } 
        } 
    } 
}
