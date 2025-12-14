/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16645
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_0] [12U])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -7934592494196198589LL)) : (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65528)), (arr_1 [i_0])))))), (var_0)));
        arr_4 [8ULL] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) (unsigned short)22)))));
    }
    for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1]);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_16 [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((min(((unsigned short)20525), (((/* implicit */unsigned short) arr_15 [i_1] [i_1] [(_Bool)1] [i_1] [i_1])))), (((/* implicit */unsigned short) (unsigned char)156)))))));
                        arr_17 [i_1] [(unsigned short)20] [18U] = ((/* implicit */unsigned short) (-(min((1707472188U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
                        arr_18 [i_4] [i_1] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */short) ((unsigned char) ((long long int) min((arr_1 [i_1]), (((/* implicit */unsigned int) arr_11 [i_1 - 1] [i_1]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned char) (~(((min((((/* implicit */unsigned int) arr_14 [i_5] [i_5] [i_5])), (arr_19 [i_5]))) - (arr_13 [i_5] [i_5])))));
        arr_24 [i_5] = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_5 [i_5])))));
    }
    var_13 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((-914489579056014945LL), (((/* implicit */long long int) 1944429263U))))) && (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6))))))));
    var_14 = ((/* implicit */unsigned short) ((long long int) ((max((((/* implicit */long long int) (short)32765)), (-557870437383834579LL))) == (((/* implicit */long long int) ((/* implicit */int) var_10))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-6768084999534267099LL) / (arr_6 [i_6])))) ? (-9223372036854775805LL) : (var_1)));
        arr_29 [(unsigned char)4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6]))) / (((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9964))) : (arr_10 [i_6] [i_6] [i_6])))));
        arr_30 [i_6] = var_7;
    }
    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) ((2541715823U) << (((((/* implicit */int) (short)-9988)) + (10018)))))) : (((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
}
