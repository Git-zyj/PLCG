/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166488
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))))));
        var_11 = (+((+(((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
        var_12 = ((/* implicit */_Bool) var_2);
        var_13 = ((/* implicit */unsigned short) ((_Bool) var_5));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_14 *= ((/* implicit */_Bool) arr_4 [i_1]);
            arr_6 [i_1] = ((_Bool) var_4);
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [22] [i_1] [i_4] [i_4] [i_1]))) : (var_0)))));
                            arr_13 [i_5] [i_3] [i_3] [i_3] [(signed char)19] = ((/* implicit */short) (+(((((/* implicit */_Bool) 3000972284U)) ? (4294967295U) : (((/* implicit */unsigned int) arr_8 [i_1]))))));
                            var_16 *= ((/* implicit */long long int) 2559781000U);
                            var_17 = (~(var_0));
                        }
                    } 
                } 
            } 
            arr_14 [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
            var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (((((/* implicit */_Bool) (unsigned short)34300)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        }
        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_21 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_6] [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_7] [i_1])) ? (((((-1) + (2147483647))) >> (((((/* implicit */int) var_1)) - (63))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34271)))))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_7])) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_15 [i_7])))))))));
                        arr_22 [i_6] [i_6] [i_6] [i_6] = (signed char)110;
                    }
                } 
            } 
            var_20 -= ((/* implicit */_Bool) var_9);
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_1] [i_9])) != (((/* implicit */int) var_1)))))) != (((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            var_22 = ((/* implicit */int) arr_25 [(unsigned short)4] [i_9]);
            arr_27 [i_1 - 1] [i_9] = ((/* implicit */unsigned short) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31236)) != (((/* implicit */int) var_9))))))));
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_1]))) : (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (1152921504606846975LL))))))));
        }
        /* vectorizable */
        for (unsigned int i_10 = 2; i_10 < 22; i_10 += 4) 
        {
            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_10 + 2] [(unsigned char)17] [i_10 - 2])) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_10] [i_1] [i_1 - 1]))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (18014398509481983LL)))) ? ((+(((/* implicit */int) var_9)))) : ((~(arr_24 [i_1 - 1]))))))));
        }
        for (signed char i_11 = 2; i_11 < 23; i_11 += 2) 
        {
            var_26 = ((/* implicit */short) 764600800U);
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) % (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (((+(max((7295718553744620254LL), (((/* implicit */long long int) var_3)))))) / (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
            var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_2)))))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)31257)))), (((/* implicit */int) max(((signed char)-20), (((/* implicit */signed char) var_5)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1 - 1] [i_11])) ? (((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [i_11])) : (arr_2 [i_1])))) ? (((var_6) * (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1])))))));
        }
        var_30 = ((/* implicit */long long int) var_9);
        var_31 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        arr_33 [i_1] = ((/* implicit */int) (_Bool)1);
    }
    for (unsigned char i_12 = 3; i_12 < 12; i_12 += 3) 
    {
        var_32 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) arr_25 [i_12] [i_12]))))))));
        var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_12] [i_12] [i_12] [i_12 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 3]))) : (arr_19 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1] [i_12] [i_12]))) - (((/* implicit */unsigned long long int) var_0))));
        arr_37 [i_12 + 2] [i_12 + 2] = ((/* implicit */unsigned short) min((((signed char) var_6)), (((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_12 + 2])) < (((/* implicit */int) arr_28 [i_12 + 1])))))));
    }
    var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((var_5) ? (var_6) : (((/* implicit */long long int) var_2))))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) var_0)))))) : (var_4)));
    var_35 = ((/* implicit */unsigned char) ((int) (~(var_7))));
}
