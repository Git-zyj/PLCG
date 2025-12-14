/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180530
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
    var_14 = ((/* implicit */long long int) min((((/* implicit */int) var_1)), (((var_11) ? (var_13) : (((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
        {
            arr_4 [(signed char)6] [(unsigned short)4] [i_1] |= ((/* implicit */unsigned char) var_0);
            arr_5 [(unsigned char)10] [18] [(signed char)8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_13)) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (max(((~(var_2))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_4)), (var_5)))))) : (((/* implicit */unsigned long long int) var_12))));
            arr_10 [(unsigned char)6] [12LL] &= ((/* implicit */signed char) var_12);
        }
        var_15 = ((/* implicit */unsigned int) var_1);
        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_13)))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_9)))), (max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)137)), (var_5))))))));
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_10)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2)))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)97)))))));
                        arr_22 [i_0] [i_0] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
    {
        var_17 += ((/* implicit */int) min((var_10), (((/* implicit */unsigned int) var_9))));
        arr_26 [i_6] = ((/* implicit */unsigned long long int) var_7);
    }
    for (int i_7 = 2; i_7 < 17; i_7 += 1) 
    {
        arr_29 [i_7 - 2] = ((/* implicit */int) var_11);
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (var_6)))), (min((var_3), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) var_11))));
        var_18 += ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_3)))))))));
    }
}
