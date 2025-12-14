/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113790
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */int) max(((unsigned char)17), (var_8)))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (arr_6 [i_1] [i_0 + 1])))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) & (arr_6 [i_0] [i_0])))) || (((/* implicit */_Bool) var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3 - 1] [i_4] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 1] [i_2] [i_1 - 2] [i_0])) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
                                arr_14 [i_0 + 2] [(unsigned char)8] [i_0 + 2] [i_1] [i_0] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21474)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_13)))))))) : (((long long int) (-(((/* implicit */int) var_15)))))));
                                arr_15 [i_0 + 1] [1LL] [i_1 - 2] [i_0] [i_3] [i_1 - 2] [i_4] = ((/* implicit */int) 268435456U);
                                arr_16 [i_0 + 2] [i_0] [i_2 - 1] [i_3] [i_4] = ((/* implicit */long long int) arr_11 [i_3] [i_3] [i_3 - 1] [i_3] [i_0]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]) << (((var_1) - (9775656898921266797ULL))))))) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)100)) || (((/* implicit */_Bool) (unsigned char)62))))) >= (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 4; i_5 < 21; i_5 += 4) 
    {
        for (long long int i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            {
                arr_22 [i_5 - 2] [i_5 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)193))));
                arr_23 [i_5 - 1] = ((/* implicit */unsigned char) (((((~(var_5))) >= (var_2))) ? (min((max((((/* implicit */unsigned long long int) arr_18 [i_5])), (var_1))), (((/* implicit */unsigned long long int) ((unsigned int) var_2))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                var_19 = ((/* implicit */unsigned char) ((1883875456374587985LL) & ((~(((((/* implicit */_Bool) var_8)) ? (arr_21 [i_5 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (+(max((((/* implicit */long long int) (unsigned char)62)), (var_2)))))));
}
