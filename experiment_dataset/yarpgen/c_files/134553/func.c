/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134553
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) ^ (((((/* implicit */int) arr_4 [i_0] [(short)1])) & (((((/* implicit */_Bool) 2596387591U)) ? (((/* implicit */int) arr_0 [i_0])) : (-942652172)))))));
                    var_19 = ((/* implicit */signed char) -1667256641);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned int) ((signed char) arr_3 [i_0 + 1]));
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_4 - 3] = ((/* implicit */_Bool) ((((_Bool) (short)-32760)) ? (min(((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_4 - 3])) : (((/* implicit */int) (_Bool)1)))), (((int) arr_6 [i_0] [i_1] [7] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */unsigned long long int) 214210285)) : (18446744073709551614ULL)))) || (((/* implicit */_Bool) ((int) arr_5 [i_0] [i_0 + 1] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */short) min((var_8), (((/* implicit */unsigned short) ((_Bool) arr_0 [i_0 - 2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (short i_6 = 3; i_6 < 10; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_6 - 2] [i_6] [i_6 - 2])) ? (((/* implicit */int) ((unsigned short) arr_18 [i_6 + 1] [i_6 - 3] [i_6 - 3]))) : (((int) arr_18 [i_6 - 3] [8] [i_6 + 1]))));
                var_23 = ((/* implicit */short) min((min((max((arr_19 [i_6 - 1]), (((/* implicit */unsigned long long int) -1667256641)))), (((/* implicit */unsigned long long int) min((7), (((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) var_16))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((max((-116252138), (((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) 374460508U)))));
}
