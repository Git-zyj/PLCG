/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147437
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_11 [i_2 - 2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7246824259861023337LL)) ? (((/* implicit */int) (unsigned char)7)) : (544144146))))));
                    arr_12 [(short)0] [(short)0] [i_0] = arr_0 [i_0] [i_1];
                    arr_13 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_19 [i_4] [i_1] [i_4] [i_1] [i_4] [i_0] [i_3] = ((/* implicit */int) ((2180622736U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_0])))));
                                arr_20 [i_4 + 1] [i_3] [i_2 - 1] = ((/* implicit */long long int) (-(((arr_17 [i_4 + 1] [i_3] [i_1 + 1] [i_3] [i_0 + 1]) ? (((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) var_3))))) : ((~(((/* implicit */int) (signed char)94))))))));
                                arr_21 [i_4] [i_1 + 1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 2032U)) ? (984383746253455693LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))))));
                                arr_22 [i_4] [i_3] [i_4] [i_1] [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1 - 1] [i_2] [i_1 - 1]))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-110)))))) == (arr_14 [(unsigned char)1] [i_1] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (max((var_5), (((/* implicit */unsigned int) var_10)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                {
                    arr_30 [(unsigned short)8] [i_6] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_29 [i_7 - 1] [(unsigned short)8] [(unsigned short)8] [i_5])))) << (((((/* implicit */int) arr_29 [i_7 - 1] [(unsigned short)6] [(unsigned short)6] [i_5 + 1])) + (14708)))));
                    arr_31 [(unsigned char)0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_29 [i_7 - 3] [(signed char)8] [(signed char)8] [i_6])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_29 [i_7] [(signed char)12] [(signed char)12] [i_5])))) : (((((/* implicit */int) arr_29 [i_7] [(signed char)4] [(signed char)4] [i_7])) * (((/* implicit */int) arr_29 [i_7] [(unsigned char)12] [(unsigned char)12] [i_6]))))));
                    arr_32 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_5] [i_5])) << (((((((/* implicit */int) (signed char)-79)) + (100))) - (14)))));
                    arr_33 [8LL] [i_6] [i_6] [8LL] &= ((/* implicit */unsigned char) (unsigned short)52235);
                    arr_34 [(unsigned short)8] [i_6] [i_7 - 2] [i_7 - 2] = ((/* implicit */unsigned char) (~(arr_27 [i_5] [i_7])));
                }
            } 
        } 
    } 
}
