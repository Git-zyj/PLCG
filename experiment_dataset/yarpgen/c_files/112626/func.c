/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112626
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
    var_18 += ((unsigned short) (unsigned char)168);
    var_19 = (+(max((((3654699458U) - (2476343041U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned char)193))))))));
    var_20 = ((var_13) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_1)) == (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)204);
        var_21 = ((/* implicit */int) ((arr_1 [i_0] [i_0]) / (((/* implicit */unsigned int) (+(var_1))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */short) var_11);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_2 [9U])))));
        var_23 = (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (arr_0 [20LL])))));
        var_24 = ((/* implicit */_Bool) ((var_5) ? (arr_0 [(unsigned char)20]) : (((/* implicit */long long int) var_10))));
    }
    for (signed char i_2 = 3; i_2 < 14; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (short)4584);
        var_25 = ((/* implicit */signed char) arr_8 [i_2 - 3]);
        arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3225))) + (max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) arr_0 [(unsigned char)0])) ? (((/* implicit */unsigned long long int) var_1)) : (var_3)))))));
    }
    for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */_Bool) max((arr_0 [i_3]), (arr_0 [i_3])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            arr_19 [i_3] = ((/* implicit */signed char) var_14);
            arr_20 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_4 + 1])) / (((/* implicit */int) (unsigned char)63))));
            arr_21 [i_3] = ((/* implicit */int) 245760LL);
            arr_22 [i_3] = ((/* implicit */unsigned char) arr_18 [i_3]);
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4] [i_3])))))));
        }
        for (signed char i_5 = 3; i_5 < 18; i_5 += 1) 
        {
            arr_25 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (short)15009)) < (((/* implicit */int) (_Bool)1)))))));
            var_27 = arr_14 [i_5] [(unsigned char)0];
            arr_26 [i_3] = ((/* implicit */unsigned char) var_14);
        }
        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            arr_30 [i_3] [i_6] = ((/* implicit */signed char) ((max((((var_6) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) arr_24 [i_6 + 2] [i_3] [i_3 + 1])))) != (((/* implicit */long long int) min((((/* implicit */int) ((var_9) < (var_9)))), (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_17 [i_3] [i_6 + 2] [i_6 - 1])))))))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    var_28 = ((/* implicit */signed char) (~((~(max((((/* implicit */unsigned int) (signed char)-120)), (4005909804U)))))));
                    arr_37 [i_3] [i_6] [i_3] [i_7] [i_3] [i_6] = ((/* implicit */signed char) (~(min((1073741823), (((/* implicit */int) (short)8191))))));
                    arr_38 [i_3] [i_6] [i_3] [i_3] = ((/* implicit */short) arr_16 [i_7]);
                }
                arr_39 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_17);
                arr_40 [i_3] [i_6] [i_7] = ((/* implicit */short) (-(min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16383))) - (3488490735U))), (((4256929146U) / (806476581U)))))));
            }
        }
        arr_41 [i_3] = ((/* implicit */int) (unsigned char)134);
        arr_42 [i_3] [i_3] = ((/* implicit */long long int) var_15);
    }
}
