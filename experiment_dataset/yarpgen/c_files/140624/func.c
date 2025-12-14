/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140624
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
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_16))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((_Bool) arr_2 [i_0])) ? ((+(((((/* implicit */_Bool) 8388607LL)) ? (arr_4 [i_0] [i_0] [0LL]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_3 [i_2] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1] [i_2]))))))));
                    arr_7 [i_0] = ((/* implicit */unsigned short) var_2);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) (-(arr_3 [i_3] [9]))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) max((arr_2 [i_0]), (((/* implicit */int) var_3))))) % (arr_5 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) < (arr_4 [i_1] [i_1] [i_2])))))))));
                        arr_15 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_2] [i_4])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) ((arr_13 [(_Bool)1] [i_2] [i_1] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_5])))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((var_8) ? (-8388608LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_0] [i_1] [(_Bool)1] [i_2] [i_5]))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        arr_20 [(short)9] [i_1] [i_1] [i_1] [i_6] |= ((/* implicit */unsigned short) var_14);
                        var_26 = arr_6 [i_0] [i_1] [(_Bool)1] [i_1];
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_6])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_6]))))) ? (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2])) << (((((/* implicit */int) arr_9 [i_0] [(signed char)1] [i_2] [i_0])) - (28068))))) : ((~(((/* implicit */int) var_3))))));
                        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_5 [13] [i_1] [i_1]), (((/* implicit */unsigned int) 1073741312))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6])))))) : (min((((/* implicit */long long int) arr_6 [i_0] [i_2] [i_0] [i_0])), (3916732537930826948LL))))) >> ((+(((/* implicit */int) (unsigned char)16))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((((unsigned int) (short)(-32767 - 1))) - (4294934518U))))))));
    var_29 = ((/* implicit */short) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (unsigned short)22027))));
}
