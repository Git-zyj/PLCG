/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112392
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) (unsigned short)37809);
            arr_5 [i_0] [i_1] = ((/* implicit */short) arr_4 [i_0] [i_1]);
            arr_6 [i_1] [(short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)27727), (arr_2 [i_1])))) ? (((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_0])))) : (((/* implicit */int) arr_2 [(unsigned char)14]))));
            arr_7 [13LL] [13LL] [2U] = ((/* implicit */_Bool) ((long long int) ((unsigned short) arr_1 [(unsigned short)7])));
        }
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            arr_11 [(unsigned short)14] [i_0] = ((/* implicit */unsigned short) var_4);
            var_17 |= ((/* implicit */unsigned int) var_9);
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                for (unsigned short i_4 = 2; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_4] [i_3 - 1] [i_0])))) ^ (max((arr_12 [i_4] [i_3 - 1] [i_3]), (((/* implicit */long long int) var_1))))));
                        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_12 [i_3] [i_3 - 1] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)27705), (((/* implicit */unsigned short) var_7)))))) : ((+(var_2)))))));
                    }
                } 
            } 
        }
        var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27727)) ? (((/* implicit */int) (unsigned short)27727)) : (((/* implicit */int) (unsigned short)27727)))))));
    }
    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        arr_19 [(signed char)3] [i_5] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5 + 1])) ? (((/* implicit */int) arr_18 [i_5])) : ((~(((/* implicit */int) var_3)))))))));
        arr_20 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (arr_16 [i_5 + 1]))) : (arr_16 [i_5 + 1])));
        arr_21 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_5 + 4])) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_18 [i_5 + 2])) : (((/* implicit */int) var_11))))));
    }
    var_21 = ((/* implicit */unsigned short) var_8);
}
