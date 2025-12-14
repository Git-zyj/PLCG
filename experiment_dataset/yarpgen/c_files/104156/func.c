/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104156
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (1184702687U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64679)))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_16 = ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1)));
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 8; i_2 += 2) 
        {
            for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) arr_10 [i_3] [i_2 + 3] [i_2 + 3] [i_3 + 1])), (var_4)))));
                        var_18 = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_10 [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) (unsigned char)0)) ? (1422323127409147676LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_1] [i_1] [i_1]), (((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1]))))))))));
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((max((var_10), (((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1])))), (max((arr_9 [i_1] [i_1]), (((/* implicit */short) var_5)))))))));
        var_21 = ((/* implicit */unsigned short) min((var_12), (max((var_10), (arr_5 [i_1] [i_1] [i_1])))));
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) & ((((_Bool)1) ? (((/* implicit */long long int) -3)) : (9223372036854775807LL)))))) ? ((((~(((/* implicit */int) (_Bool)0)))) / (-3))) : (9)));
        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((!(((/* implicit */_Bool) var_0)))))))));
        var_24 = ((/* implicit */signed char) min((arr_6 [i_5] [i_5] [i_5]), (((/* implicit */long long int) ((var_13) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_1 [i_5])))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5] [i_5])))));
        var_26 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) -3458741081658727635LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_6 [i_5] [i_5] [i_5]))));
    }
    var_27 = ((/* implicit */long long int) max((var_6), (var_6)));
}
