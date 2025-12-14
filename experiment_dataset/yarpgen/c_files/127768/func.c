/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127768
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19116)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19095))) : ((~(-4LL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) >= (var_10)))) : ((+(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (+(arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1530403293)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -579045162)) ? (2436965231784743469ULL) : (((/* implicit */unsigned long long int) var_5)))))))) : ((-(((/* implicit */int) var_12))))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (2436965231784743469ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_3])))))))), (7377326456959163893ULL)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((-1530403283) / (var_5)))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (17039061843760763213ULL)))));
                            arr_16 [i_0] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1530403272)) ? (0LL) : (-7558119069701014519LL)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 8972014882652160LL)) && (((/* implicit */_Bool) 12512015298664510630ULL)))) ? (3648612265789970755ULL) : (((/* implicit */unsigned long long int) -4)))))));
                            var_24 = max((18446744073709551601ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_2 - 2] [i_3]))))));
                            var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_18)), ((-(var_3)))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (signed char)31))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((-7558119069701014536LL), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))) ? (((((((/* implicit */_Bool) 5675915419315711304ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6172))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || ((!(((/* implicit */_Bool) var_16))))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_19))));
                            var_29 = ((/* implicit */unsigned short) (_Bool)1);
                            arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_3] [i_8]))));
                            arr_27 [i_0] [i_0] [i_2] [i_3] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(var_8))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3]);
                            var_31 = ((/* implicit */_Bool) 65024LL);
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) var_19)) : (((((/* implicit */_Bool) (signed char)120)) ? (2LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1793)))))));
                            var_33 = ((/* implicit */signed char) arr_28 [i_9] [i_0] [i_2] [i_0] [i_0]);
                        }
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_10] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)63))))));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (+((-(((/* implicit */int) var_0)))))))));
                            var_35 |= ((/* implicit */signed char) ((int) -7720953141613360269LL));
                            var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_10] [i_3]))));
                        }
                    }
                } 
            } 
        } 
        var_37 = arr_30 [i_0] [i_0] [i_0];
        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) var_13))));
    }
    var_39 = ((/* implicit */short) var_0);
}
