/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128554
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_10 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_11 += ((/* implicit */signed char) arr_3 [i_1]);
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */int) arr_5 [i_1])) : (min(((+(((/* implicit */int) var_8)))), ((+((-2147483647 - 1))))))));
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(arr_6 [i_1]))), (arr_6 [i_1])))) ? ((+(arr_6 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
        arr_7 [i_1] = (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_1]))));
        var_14 = ((/* implicit */unsigned char) ((var_5) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) (!(arr_4 [i_1] [i_1])))) : (((/* implicit */int) arr_0 [i_1])))))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) arr_0 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        arr_17 [i_5] [i_2] [3] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_2] [i_2] [i_2])))) : (arr_13 [i_4 - 1] [i_3 + 2] [i_4])))));
                        var_16 = ((/* implicit */short) var_0);
                        var_17 = ((/* implicit */unsigned char) var_1);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
                        {
                            var_18 -= min((arr_12 [i_3]), (((/* implicit */unsigned char) (!((_Bool)1)))));
                            arr_20 [(unsigned short)7] [i_2] [i_4] [i_4 + 1] = arr_8 [i_2];
                            arr_21 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */short) arr_14 [i_6 + 1])))))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 + 1])))))) : (268369920U)));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (!(arr_4 [i_4] [i_2])))) : (max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_8)))))))))));
                            arr_22 [i_3] [i_2] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                        }
                        var_20 -= ((/* implicit */short) arr_10 [4LL]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] [i_7] = ((/* implicit */signed char) (-(arr_6 [i_7])));
        arr_28 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_18 [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_7])))) : (((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7]))) : (arr_13 [i_7] [10U] [i_7])))));
    }
    var_21 = ((/* implicit */unsigned short) var_7);
}
