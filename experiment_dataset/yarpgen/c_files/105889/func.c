/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105889
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
    var_12 = var_6;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_10)))))) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */int) ((max((arr_1 [i_0]), (arr_1 [i_0]))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)37056)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) arr_1 [i_2]);
                var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) var_7))), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_1]) : (arr_5 [i_1] [i_2]))) : (arr_0 [i_2] [i_1 + 1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        {
                            arr_22 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_13 [i_5 + 1] [i_4]))) : (((/* implicit */long long int) (~(arr_1 [i_5 + 1]))))));
                            arr_23 [i_6] [i_5] [i_4] [i_3] = (~(((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1])) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [4U]) == (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_4]))) : ((~(arr_13 [6LL] [6LL])))))));
                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                var_18 = ((((/* implicit */_Bool) (-(arr_18 [i_4])))) ? (max((((/* implicit */unsigned int) arr_16 [i_3] [i_4] [i_4] [i_4])), (arr_20 [i_3] [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_17 [i_3] [i_4] [i_4])))));
                arr_24 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned short) ((int) max((((unsigned short) (unsigned short)34434)), (((/* implicit */unsigned short) (unsigned char)109)))));
            }
        } 
    } 
}
