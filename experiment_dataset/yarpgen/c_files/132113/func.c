/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132113
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
    var_18 = ((/* implicit */unsigned short) (+((-(min((var_4), (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (((((+(((/* implicit */int) var_9)))) * (((/* implicit */int) arr_2 [i_0] [i_0])))) - (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_20 = ((/* implicit */short) arr_0 [i_0]);
        arr_4 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (95))))) ^ (((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (166)))))))), (max((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))) : (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0])) >> (((((((/* implicit */int) arr_1 [i_0] [i_0])) - (95))) + (179))))) ^ (((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((((((/* implicit */int) arr_0 [i_0])) - (166))) + (122)))))))), (max((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [i_0] [i_0])))) >= ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (arr_8 [i_1] [i_1]) : (((/* implicit */int) arr_7 [i_1] [i_1]))));
        arr_9 [4] [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 4; i_2 < 9; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_2 - 4] [i_3] [i_4]))));
                            arr_20 [i_4] [i_2] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_5] [i_2] [(unsigned short)2])) >= (1441880299)))) ^ ((-(((/* implicit */int) var_13))))));
                            arr_21 [i_1] [i_1] [i_2] [i_3 - 2] [i_1] [i_2] [(unsigned char)11] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_4] [i_2] [i_3 + 1] [i_4])) < (((/* implicit */int) arr_13 [(signed char)3] [i_2] [i_3 - 1] [i_3 - 1]))));
                            arr_22 [9] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_3 - 2] [i_3] [4] [i_3]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))));
            arr_23 [i_1] [(signed char)10] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_6 [i_2 - 4] [i_2]))));
        }
        for (short i_6 = 4; i_6 < 9; i_6 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) ((unsigned short) ((12884901888LL) % (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
            var_25 = ((/* implicit */int) var_12);
        }
        arr_26 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)32748)), (((unsigned short) (unsigned short)30711))))) / ((-2147483647 - 1))));
    }
}
