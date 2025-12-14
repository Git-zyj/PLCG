/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111301
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */long long int) 4294967295U);
                        var_15 = ((/* implicit */_Bool) min((0), (((/* implicit */int) (unsigned short)0))));
                        var_16 = ((/* implicit */unsigned short) ((max((((((var_4) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)30)) - (26))))), (((/* implicit */long long int) (_Bool)1)))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 1] [i_1 - 2]))))))));
                        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned int) -805572832)) : (4294967295U)));
                        var_18 = ((/* implicit */int) var_3);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [10])) ^ (max((((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_4] [i_5]))))), (((((/* implicit */unsigned long long int) arr_2 [i_0])) | (arr_12 [i_4] [i_4] [i_4])))))));
                        arr_16 [i_0] [i_1 - 1] [i_4] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)65535)) + (arr_8 [i_0] [i_0] [i_1 - 1])))));
                        var_20 = ((/* implicit */long long int) arr_4 [i_0] [i_1]);
                    }
                } 
            } 
            arr_17 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? ((~(arr_12 [i_1 - 1] [i_1 - 1] [i_1 + 1]))) : (max((((/* implicit */unsigned long long int) arr_13 [i_0])), (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 2])))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))))), (((/* implicit */unsigned int) (unsigned char)239))))) / (max((arr_5 [i_1] [7] [i_1 - 2]), (arr_5 [(unsigned short)8] [i_1 - 1] [i_1 + 1])))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_6 - 1])) > ((+(((/* implicit */int) var_7))))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_0))));
        }
        var_24 = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0]);
    }
    var_25 = ((/* implicit */unsigned short) var_2);
}
