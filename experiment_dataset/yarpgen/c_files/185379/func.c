/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185379
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (13LL))))))) - ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [1ULL] [1ULL] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) max((arr_5 [i_1] [i_0]), (arr_5 [i_0] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)16085))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (8032844348666742602LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24576)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */long long int) arr_3 [i_3] [(_Bool)1] [i_0]);
                            arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24582))) & (max((((/* implicit */unsigned long long int) 1245545038275984952LL)), (min((arr_8 [(short)15] [i_1] [i_0]), (((/* implicit */unsigned long long int) 8032844348666742604LL))))))));
                            var_13 = ((/* implicit */unsigned short) ((((_Bool) 18446744073709551603ULL)) ? (((18446744073709551603ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40982))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_2 + 1] [i_3 - 1])), (arr_7 [i_3 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((_Bool) 8032844348666742602LL));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_19 [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((1245545038275984968LL) / (((/* implicit */long long int) -2036738367))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_16 [6LL])) ? (-8032844348666742603LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)7] [(unsigned char)2]))))));
                    var_15 = (-(((long long int) 12ULL)));
                }
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        arr_24 [i_4 + 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_10 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1))))) : (((268435440U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)29647)))))));
                        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-2832388795609993406LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) arr_12 [i_8 + 1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2832388795609993405LL)) <= (18446744073709551603ULL))))));
                        arr_25 [(short)6] [i_4] [i_5] [i_7] [(_Bool)1] [i_8] = ((/* implicit */_Bool) arr_13 [i_8] [i_4]);
                        arr_26 [i_5] = ((/* implicit */unsigned short) (_Bool)0);
                    }
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_29 [i_4] [i_5] [i_7] [7] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_5]))) >= (2648972212U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)10366), (arr_0 [14LL] [i_5]))))) > (((((/* implicit */unsigned long long int) -2036738367)) - (arr_28 [i_9] [i_7] [(unsigned short)10] [(unsigned short)10]))))))) : (268435447U)));
                        arr_30 [i_9] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) max((8032844348666742602LL), (((/* implicit */long long int) arr_23 [i_7] [i_4])))))), (max(((-(((/* implicit */int) arr_4 [(unsigned short)13] [(unsigned short)13])))), (((((/* implicit */int) arr_4 [i_4] [i_4])) << (((/* implicit */int) arr_5 [i_4] [i_4]))))))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 8100805522179561626LL))));
                        var_18 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24579)))))));
                        arr_31 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 2308485310446107559ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (33ULL)));
                    }
                    var_19 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)40956))));
                }
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(arr_8 [i_4 + 1] [i_4 + 1] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [5] [i_5] [i_4 + 2]))) <= (8100805522179561626LL))))) : (((long long int) -2832388795609993406LL)))) << (((/* implicit */int) max((((((/* implicit */int) (unsigned short)40957)) >= (((/* implicit */int) (unsigned short)22214)))), (((_Bool) var_4))))))))));
            }
        } 
    } 
}
