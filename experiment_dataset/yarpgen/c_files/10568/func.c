/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10568
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
    var_12 -= ((/* implicit */unsigned char) var_11);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (((+(var_1))) | (((((/* implicit */_Bool) (short)3281)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))))))));
            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
            var_16 &= (unsigned char)254;
            var_17 = ((/* implicit */unsigned short) arr_1 [i_1]);
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_18 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_1 + 1]))));
            var_19 = ((/* implicit */short) arr_7 [i_1] [i_3] [i_3]);
            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1 - 2] [i_3]))));
            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-3271))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_22 &= ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_1 - 1]));
            var_23 = ((/* implicit */signed char) arr_6 [i_1]);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_15 [i_1 - 2] [15] = ((/* implicit */unsigned short) ((unsigned long long int) (-(-390897843))));
            arr_16 [i_5] [i_1] = ((/* implicit */unsigned short) arr_10 [i_1] [i_1 + 1]);
        }
    }
    for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
    {
        var_24 -= ((/* implicit */int) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_6 - 1])) : (((/* implicit */int) (unsigned char)87)))))));
        var_25 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) & (arr_0 [i_6] [i_6 - 1])))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_2 [i_6 - 1]))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) ((signed char) max((var_1), (arr_0 [i_6 + 1] [i_7]))));
            var_28 = ((/* implicit */long long int) (+(max((-210370200), (((/* implicit */int) (unsigned char)11))))));
            arr_22 [i_6 - 1] [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_18 [i_6 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6 + 1])) || (((/* implicit */_Bool) arr_18 [i_6])))))) : (((((/* implicit */_Bool) arr_18 [i_6 - 1])) ? (arr_19 [i_6 + 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) arr_18 [i_6 + 1]))))));
        }
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
        {
            arr_25 [i_6] [i_6 - 1] [(unsigned char)16] = ((/* implicit */unsigned short) max((min((-5068294085583221285LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((unsigned short) var_6)))));
            /* LoopSeq 1 */
            for (int i_9 = 1; i_9 < 20; i_9 += 2) 
            {
                arr_28 [i_9] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) -1880967408)))));
                arr_29 [i_9] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_20 [i_6 + 1] [i_6 - 1] [i_6])))), (((/* implicit */int) arr_1 [i_9 + 2]))));
            }
            arr_30 [i_8] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_6])) == (var_8))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [9LL] [i_8] [i_6 - 1] [i_8])))))) & ((~(arr_26 [i_6] [i_6] [i_8] [i_6]))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_17 [i_6])) ? (arr_21 [i_6]) : (((/* implicit */int) arr_27 [i_6 + 1] [i_6] [i_6 + 1] [9U])))))))));
            var_29 -= min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (2000931600))))), ((-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8]))) : (var_5))))));
        }
    }
    for (unsigned char i_10 = 3; i_10 < 23; i_10 += 1) 
    {
        var_30 |= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)87)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10 + 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (short)-3253)) : (((/* implicit */int) arr_1 [i_10]))))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (2612151028U)));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) & (((((/* implicit */unsigned int) arr_32 [i_10 - 2])) | (arr_0 [i_10] [i_10])))));
    }
    var_33 = var_1;
    var_34 = (~((~((~(((/* implicit */int) var_6)))))));
}
