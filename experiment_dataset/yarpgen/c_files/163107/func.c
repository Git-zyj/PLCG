/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163107
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
    var_19 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))) & (((/* implicit */int) ((signed char) var_6)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32788))))))), ((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    var_20 = ((/* implicit */unsigned short) arr_5 [(_Bool)1] [10ULL] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_21 = 284288440U;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) (short)3971)), (arr_5 [i_3 - 1] [i_1] [i_4 + 1] [i_4 + 1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (arr_9 [i_0]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) -182519188)) ? (((/* implicit */unsigned long long int) -182519200)) : (6705746162347259421ULL))))) - (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)3972)))), (((/* implicit */int) var_18)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))) ^ (((4525298678322861783ULL) >> (((8847432126198691364ULL) - (8847432126198691308ULL)))))))));
    var_23 = var_14;
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            {
                arr_20 [3] [i_6 + 2] [i_6 - 1] &= ((unsigned short) var_13);
                var_24 += ((/* implicit */unsigned int) var_14);
                arr_21 [i_5] [i_5] = ((/* implicit */int) min(((-(13555572841591434913ULL))), (max(((-(9599311947510860247ULL))), (((/* implicit */unsigned long long int) (+(var_14))))))));
            }
        } 
    } 
}
