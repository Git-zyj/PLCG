/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146642
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
    for (short i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = arr_0 [5U] [i_0];
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [(short)4] [i_2])) : (((/* implicit */int) (unsigned char)101))))), (((long long int) arr_11 [i_1] [i_1] [i_2] [i_3 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((((/* implicit */long long int) var_18)) - (((((/* implicit */_Bool) (unsigned char)171)) ? (4842579180364677872LL) : (-4842579180364677873LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3]))) >= (3434919806U)))))))));
                            arr_15 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (((+(((/* implicit */int) arr_10 [i_4] [i_3] [i_3] [i_3] [(short)7] [i_0])))) >= (((/* implicit */int) ((signed char) arr_0 [i_1 + 1] [(short)7]))))))));
                            var_20 = arr_0 [i_4] [(unsigned char)1];
                        }
                        for (short i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_5] [i_2])) + (12382988726682572599ULL)));
                            var_22 = ((/* implicit */short) arr_18 [i_0 + 3] [i_0 + 3] [i_2] [(short)10] [i_3]);
                            arr_20 [i_3] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_5 [i_0 + 2] [i_3 + 1])), (-4842579180364677850LL))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0 + 3] [i_3 + 2]) >= (arr_5 [i_0 - 1] [i_3 + 4])))))));
                        }
                        for (short i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0 + 1] [i_3] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_14 [9ULL] [9ULL] [(short)4]), (arr_6 [i_0 + 3] [i_0 + 3] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-21712)) >= (((/* implicit */int) (short)17806))))) : ((+(((/* implicit */int) (short)21731))))))) >= (max((((((/* implicit */_Bool) arr_4 [i_6] [i_1 - 1])) ? (((/* implicit */long long int) var_1)) : (4842579180364677877LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))))));
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 6063755347026979018ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_14 [i_3 + 4] [i_2] [i_0])))) ? (((/* implicit */int) (short)14948)) : ((-(((/* implicit */int) var_17)))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [6ULL] [i_2])) >= (((/* implicit */int) (unsigned char)177)))))));
                            var_23 = ((/* implicit */short) arr_5 [i_0 + 2] [12LL]);
                            var_24 = ((/* implicit */long long int) ((max((((unsigned int) arr_21 [(short)12] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 3])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-31334)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0] [i_0] [4ULL]);
    }
    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) arr_27 [i_7]);
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) var_16))), (var_17)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) arr_26 [i_7]))))))))));
    }
    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    arr_35 [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_10])) ? (min((((/* implicit */unsigned int) (unsigned char)165)), (arr_27 [i_10]))) : (((((/* implicit */_Bool) -4842579180364677873LL)) ? (1327235066U) : (arr_32 [i_8] [(signed char)14] [i_9] [i_9])))));
                    arr_36 [i_9] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_32 [i_10] [i_9] [i_9] [i_8])))) ? (arr_27 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_32 [i_8] [i_9] [i_9] [i_10]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_5)), (arr_34 [i_8] [i_9] [i_10]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) - (2067404002U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8]))))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((var_16), (arr_28 [i_8])))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_30 [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8] [i_8]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_10))))))))));
    }
    var_29 = ((/* implicit */short) min((min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_2))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) -5148856230621126176LL)) && (((/* implicit */_Bool) var_9))))), (var_7))))));
}
