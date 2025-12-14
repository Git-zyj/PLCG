/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104632
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
    var_10 = min((17147336528935576492ULL), (((/* implicit */unsigned long long int) 1855911031)));
    var_11 = ((/* implicit */short) 1299407544773975124ULL);
    var_12 = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = min(((-((+(1299407544773975124ULL))))), (max((7668008934046237419ULL), (17147336528935576485ULL))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 17147336528935576492ULL))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (signed char)-125)) | (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned char i_5 = 4; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) var_0);
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_23 [(signed char)6] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 13392371757827306796ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-118)))) <= (((/* implicit */int) var_7))));
                                arr_24 [i_2] [i_3] [i_4] [i_5 - 4] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-126))));
                                arr_25 [i_2] [i_4] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_6)) - (26)))))) | (((((/* implicit */_Bool) (signed char)126)) ? (arr_10 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                                var_16 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)115))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 2) 
                            {
                                arr_28 [i_7] [i_3] = ((/* implicit */signed char) ((665379176U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))));
                                var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_3 + 3]))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                arr_31 [i_2] [(short)13] [i_2] [i_2] [i_2 - 2] = ((/* implicit */short) var_9);
                                arr_32 [i_2] [i_2] [8ULL] [i_2] [i_5] = ((/* implicit */_Bool) (-(min((var_4), (((/* implicit */unsigned long long int) arr_20 [i_3] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3 + 3]))))));
                                arr_33 [i_4] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-29))))), (max((var_4), (((/* implicit */unsigned long long int) (signed char)-12)))))), (((/* implicit */unsigned long long int) arr_9 [i_2]))));
                            }
                            /* vectorizable */
                            for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
                            {
                                arr_36 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_7);
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                                var_19 *= ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_3] [i_2 + 2]))));
                            }
                            arr_37 [i_5 - 4] = ((/* implicit */short) -829768099146703252LL);
                        }
                    } 
                } 
                arr_38 [i_2] [i_3] = ((/* implicit */long long int) var_9);
            }
        } 
    } 
}
