/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131602
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_3))));
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)224))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [(_Bool)1] [(short)10] = ((/* implicit */_Bool) var_6);
        var_18 -= (!(((/* implicit */_Bool) 10253111914732352564ULL)));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) var_12);
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_2 [6]))));
            var_21 *= ((/* implicit */unsigned int) 5ULL);
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_10))));
        }
        for (signed char i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            arr_12 [(signed char)10] [i_3] |= ((/* implicit */unsigned long long int) (signed char)-16);
            arr_13 [i_1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_3))))));
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */int) var_15);
            var_23 = ((/* implicit */unsigned short) max((var_23), (arr_7 [i_3] [9ULL] [i_3 + 1])));
        }
        var_24 = ((/* implicit */unsigned char) var_4);
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        arr_24 [i_1] [i_4] [i_5] [i_1] = ((/* implicit */short) var_13);
                        arr_25 [i_6] [(unsigned short)18] [i_1] [i_1] [i_1] [i_1] = arr_11 [i_1] [i_4] [i_5];
                        var_25 = ((/* implicit */int) (signed char)15);
                        arr_26 [(short)17] [i_1] [i_1] [(short)17] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)11] [i_4] [i_5]))) : (((((/* implicit */_Bool) -1014542028873007604LL)) ? (((/* implicit */unsigned long long int) -1LL)) : (4ULL)))))) ? (var_5) : (((unsigned long long int) 2784044740U))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_8 = 3; i_8 < 18; i_8 += 3) 
        {
            for (short i_9 = 1; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_37 [i_8] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_38 [i_8] [3] [i_8] = ((/* implicit */unsigned int) var_12);
                }
            } 
        } 
        var_26 -= ((/* implicit */_Bool) 335274268U);
        var_27 = ((/* implicit */unsigned short) arr_35 [0] [i_7] [0]);
    }
    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
    {
        var_28 -= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(18446744073709551610ULL))))));
        var_29 -= ((/* implicit */unsigned short) var_15);
    }
}
