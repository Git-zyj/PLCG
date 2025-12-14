/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134990
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))));
        var_11 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(-3521298462279445654LL)))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */short) (-(((/* implicit */int) (signed char)63))));
            var_13 *= ((/* implicit */unsigned int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [0U])))))))));
            arr_7 [i_1 - 1] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_1])))))))));
            var_14 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(arr_5 [i_1 + 1] [i_2]))))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) (+((~(var_9)))));
            var_16 = ((/* implicit */long long int) (~((~(var_7)))));
            arr_12 [i_1] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-78)))))));
            var_17 = ((/* implicit */long long int) (~((+(arr_3 [i_3])))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            arr_15 [i_1] = (+((+((~(var_6))))));
            arr_16 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_8 [i_1 + 1] [i_4] [i_4])))))))));
        }
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-78))))))))));
        arr_17 [i_1] = ((/* implicit */signed char) (-((~((~(var_7)))))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            arr_20 [i_1] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
            arr_21 [i_1] = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) (signed char)-69))))))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        for (signed char i_7 = 3; i_7 < 17; i_7 += 3) 
        {
            {
                var_19 = ((/* implicit */short) (~((~((~(var_10)))))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [22U] [i_7 - 2]))))))))))));
                arr_29 [i_7 - 3] [i_7 - 1] [i_6] = ((/* implicit */long long int) (-((-(((/* implicit */int) (short)-17151))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_10 = 1; i_10 < 16; i_10 += 3) 
                            {
                                arr_39 [i_9] = ((/* implicit */short) (+((+((+(arr_14 [i_10 - 1])))))));
                                var_21 = (+((+((~(-9223372036854775789LL))))));
                                var_22 *= ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) var_5))))))));
                            }
                            arr_40 [i_6] [i_9] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)146))));
                            var_23 = (+((+((+(1963776344U))))));
                            arr_41 [i_6] [i_9] [i_8] [i_9] = ((/* implicit */signed char) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                            arr_42 [i_6] [i_7 - 3] [i_8] [i_9] [i_9] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (+(arr_14 [i_6]))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-63)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
}
