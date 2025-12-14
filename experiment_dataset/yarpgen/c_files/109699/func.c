/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109699
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
    var_15 = var_10;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (var_13)))) : (((((/* implicit */_Bool) (signed char)0)) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)1)))))) - ((~(((/* implicit */int) arr_3 [i_0]))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 3] [i_0 - 1])) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0 + 3])))))));
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) | (((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) ((1209861717U) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_3 [8U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_5 [i_1]))));
        var_21 = ((/* implicit */unsigned char) arr_0 [(_Bool)1]);
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_22 += ((signed char) ((((/* implicit */int) arr_4 [i_3 - 1])) | (((/* implicit */int) arr_5 [i_1]))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_3] [i_4] [i_3 + 1] [i_2]))) : (var_14)))));
                            var_24 = ((/* implicit */signed char) (_Bool)1);
                        }
                        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (~(((unsigned long long int) 906675755U)))))));
                            var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (unsigned short)60369)))) : (((/* implicit */int) var_5))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */short) ((unsigned long long int) (+(var_0))));
                            var_28 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5638764311312729210ULL)) ? (((/* implicit */int) (unsigned char)101)) : (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)9])))), (((arr_21 [i_3 + 1] [i_3 - 2] [i_3 + 3] [i_3] [i_3 + 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 1]))) : (((((/* implicit */_Bool) arr_25 [i_1] [i_2] [i_3 - 2] [i_4] [i_2])) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_13))))));
                        }
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)98)) + (arr_16 [i_3 + 3] [i_3 - 2] [i_3 + 2] [i_3 - 1])))) ? (((unsigned long long int) var_7)) : (((unsigned long long int) arr_22 [i_3 - 2] [i_3 + 2] [i_3 + 3] [i_3 - 2] [i_3]))));
                    }
                } 
            } 
        } 
    }
}
