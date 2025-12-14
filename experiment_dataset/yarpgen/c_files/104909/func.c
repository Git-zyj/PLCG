/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104909
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) 0))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned long long int) ((3150287042U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6984)))))))));
                        arr_10 [i_0] [i_0] [i_2] [9ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_8 [i_0] [i_1] [i_2] [i_3] [(_Bool)1]) > (((/* implicit */unsigned long long int) var_10)))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) var_4);
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) (signed char)127);
        var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) arr_6 [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [2U] [i_4]))))) : (((/* implicit */int) arr_9 [(unsigned short)16] [i_4] [i_4] [(unsigned short)16] [i_4] [4]))))), ((((!(((/* implicit */_Bool) (short)1189)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)1189)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) || (((/* implicit */_Bool) var_3))))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (unsigned short)6984))) / (((/* implicit */int) var_11)))))));
        arr_13 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(13ULL))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) ((((/* implicit */int) arr_2 [i_5 - 2])) | (((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_5 - 1] [i_5 + 1] [i_5 + 1])) ? (arr_4 [i_5 + 1] [i_5 + 3] [i_5 + 2]) : (arr_4 [i_5 + 1] [i_5 + 1] [i_5 - 1]))));
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [i_5 + 2] [(signed char)10])))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) arr_14 [i_5 - 1])))))));
        var_22 = ((/* implicit */_Bool) (+((-(((/* implicit */int) ((_Bool) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((arr_17 [i_6 + 2]) << (((/* implicit */int) (_Bool)0)))))));
        var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_15 [i_6 - 1] [i_6 - 1])))) : (((((((/* implicit */int) var_7)) + (2147483647))) >> (((arr_0 [i_6]) + (2051469293)))))));
    }
    var_25 = ((/* implicit */unsigned char) -715629459016833472LL);
}
