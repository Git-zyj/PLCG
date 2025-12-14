/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116748
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
    var_19 += ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) (unsigned char)77)))))) < (var_15)))), (((((/* implicit */int) ((((/* implicit */unsigned int) var_8)) > (var_11)))) - (((/* implicit */int) var_1))))));
    var_20 = ((/* implicit */long long int) var_5);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((3581956192U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78)))))), (5778174479895350195LL))) << (((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((8191) - (((/* implicit */int) (unsigned short)16548)))) : (((/* implicit */int) ((unsigned short) var_10))))) + (8415))) - (58))))))));
    var_22 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0 - 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 + 1])) || (((/* implicit */_Bool) arr_1 [i_0 - 1]))));
        var_23 = ((/* implicit */unsigned long long int) var_7);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        arr_5 [i_1 + 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -5778174479895350210LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (-5778174479895350173LL)));
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_3]);
                    var_26 = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                    arr_10 [i_1] [i_1] [(signed char)5] [i_1] = ((/* implicit */long long int) (((+(arr_7 [i_3]))) - (((/* implicit */int) arr_4 [i_1] [i_1]))));
                    var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1])) : (-15)));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) ((arr_7 [i_1]) < (((/* implicit */int) (unsigned short)56194))));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 1])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_30 = ((/* implicit */int) ((signed char) arr_8 [i_4] [i_4] [i_4] [17LL]));
            var_31 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) == (67108864U)));
        }
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((signed char) max((((((/* implicit */int) arr_11 [(unsigned char)0])) - (14))), (((/* implicit */int) arr_6 [i_4] [3LL] [i_4]))))))));
    }
    for (long long int i_6 = 1; i_6 < 21; i_6 += 3) 
    {
        var_33 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_13))))) ? (((/* implicit */int) max((arr_3 [i_6] [i_6]), (var_10)))) : (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))), (min((((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned short)39122))))), (-1)))));
        var_34 = ((_Bool) ((signed char) 5778174479895350185LL));
        var_35 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21958)) ? (((/* implicit */int) arr_18 [i_6 - 1])) : (arr_7 [i_6 - 1])))), (max((((((/* implicit */_Bool) -5778174479895350191LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (5778174479895350173LL))), (((((/* implicit */_Bool) arr_19 [(unsigned short)14])) ? (5778174479895350154LL) : (((/* implicit */long long int) arr_7 [14]))))))));
    }
}
