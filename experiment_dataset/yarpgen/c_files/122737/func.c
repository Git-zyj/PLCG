/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122737
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_11 &= ((/* implicit */short) ((long long int) max((((/* implicit */unsigned int) (signed char)-100)), (3343814746U))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) min(((short)1961), (((/* implicit */short) (unsigned char)78)))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (max((1020106291579842746LL), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3])) + (((/* implicit */int) (unsigned char)0)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_1])) - (((/* implicit */int) var_1)))) : (((/* implicit */int) var_3)))) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned char) var_5))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)226)), ((unsigned short)28204)))))), (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_3)))));
        arr_20 [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) arr_3 [i_5] [i_5]))))) : (((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_4))))));
        arr_21 [i_5] [i_5] = ((/* implicit */short) var_5);
        arr_22 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_1 [i_5]))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)15093))) != (arr_1 [i_5]))))));
        var_14 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (unsigned char)30)))));
    }
}
