/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112648
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
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)4] [i_0 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) || (((/* implicit */_Bool) (-(arr_3 [(unsigned char)6] [(unsigned char)2]))))));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? ((+(((/* implicit */int) (unsigned short)64253)))) : (((/* implicit */int) (unsigned char)207))));
                    var_20 = ((/* implicit */unsigned short) (+(arr_1 [(unsigned short)2] [(unsigned char)0])));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2 + 2] [i_0 - 3])) >> ((((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)49)))))) + (56573)))));
                    var_22 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [(unsigned short)0] [i_0]);
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    arr_13 [i_0] [i_0] [(unsigned short)0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)255), ((unsigned char)206)))), ((+(((/* implicit */int) var_9)))))))));
                    arr_14 [i_0] [i_1] [i_3] = ((/* implicit */signed char) max((1711719004), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56140)) || (((/* implicit */_Bool) (unsigned short)65535)))))));
                }
                for (signed char i_4 = 4; i_4 < 9; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 7; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [6ULL] [i_0] [i_0] [(signed char)3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-82))));
                                var_23 = ((/* implicit */unsigned short) var_12);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) (unsigned short)18093)) ? (288230376151695360LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))))), (arr_0 [i_4 - 2] [i_1]))), (((/* implicit */long long int) max((((/* implicit */int) arr_11 [(unsigned char)2] [(unsigned char)2])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))))))));
                    arr_23 [(unsigned short)6] [(unsigned short)0] [4LL] |= ((/* implicit */signed char) arr_4 [4U] [4U]);
                    var_25 ^= arr_17 [i_0] [7LL] [i_1];
                    var_26 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4496439671164486124ULL)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_7 [i_0])))));
                }
            }
        } 
    } 
    var_27 -= ((/* implicit */long long int) 1023705218);
}
