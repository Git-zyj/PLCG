/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119640
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [10U])) ? (((/* implicit */long long int) ((/* implicit */int) (short)22736))) : (arr_1 [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) (short)-13590)) ? (9002411268985492992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0 - 2])))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */_Bool) min(((-(((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_3 [9U])) - (57653))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_0]), (((/* implicit */unsigned short) arr_4 [5U] [i_2] [5U]))))))))));
                    arr_8 [(unsigned short)9] [i_1] [i_2] = max((min((((/* implicit */long long int) arr_5 [i_1])), (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [10ULL] [i_2] [i_2]))) : (arr_1 [10] [(unsigned short)1]))))), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_6 [i_0]))))))));
                    var_18 = ((/* implicit */signed char) (-(min((arr_1 [i_0 - 1] [i_1 + 1]), (arr_1 [i_0 - 1] [i_1 + 1])))));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_17 [(short)1] [(unsigned char)2] [(short)1] [i_3] [(unsigned char)2] [i_4] [i_1 + 1] = ((/* implicit */unsigned int) arr_0 [i_0]);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) arr_0 [(unsigned short)0])) - (48784)))));
                                var_20 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_6 [i_0 - 3]))))));
                            }
                        } 
                    } 
                    arr_18 [i_3] [6LL] [8LL] = ((unsigned char) ((arr_11 [(signed char)2] [i_0 + 1] [i_0 + 1]) | ((~(2139095040)))));
                }
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((/* implicit */int) arr_5 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1])))) : (((((/* implicit */int) arr_3 [i_0 - 3])) + (((/* implicit */int) (short)13585))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_2);
}
