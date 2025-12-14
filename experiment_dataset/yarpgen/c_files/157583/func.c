/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157583
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
    var_19 = ((/* implicit */_Bool) (short)(-32767 - 1));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))) / (((arr_1 [i_0 - 1]) & (arr_1 [i_0 + 2])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_0 [i_0] [2U]);
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0 - 1] [i_1])), (max((18446744073709551615ULL), (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 7; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 8; i_5 += 4) 
                {
                    {
                        arr_20 [i_0] [i_3] [i_4] = ((/* implicit */int) (signed char)47);
                        arr_21 [(short)0] [(short)0] [(short)0] [(short)0] [i_3] = ((/* implicit */short) ((((/* implicit */int) (signed char)-48)) == (((((/* implicit */int) (signed char)(-127 - 1))) | (353095931)))));
                        var_22 += ((/* implicit */unsigned long long int) arr_14 [i_0] [i_3] [i_4]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        arr_24 [i_6] = min((((/* implicit */int) arr_22 [i_6])), (((((/* implicit */int) arr_23 [i_6] [i_6])) / (((/* implicit */int) (signed char)47)))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (unsigned char)0))));
        var_25 -= ((/* implicit */signed char) ((((/* implicit */int) ((-984863809802103459LL) != (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_6])))))))) * (((/* implicit */int) arr_22 [i_6]))));
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        var_26 += ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)11214)), (max((((/* implicit */long long int) (unsigned short)54322)), (arr_26 [i_7])))));
        arr_27 [i_7] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)22437))));
    }
    var_27 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))));
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_16))));
}
