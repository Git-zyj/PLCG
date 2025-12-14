/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112418
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65521))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [(short)1] [(short)18] [(unsigned char)22]))), (((/* implicit */unsigned int) (~(arr_3 [i_0] [i_0 + 1] [i_0])))))))));
                    arr_7 [i_0 - 1] [i_2] = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        arr_10 [i_3] [i_3] = 8278160082801138046ULL;
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_17 [i_3] [9] = arr_6 [i_3] [i_4] [4U] [(short)3];
                    arr_18 [i_3] [0LL] [i_3] = ((/* implicit */unsigned short) (+((~((~(arr_3 [i_3] [i_3] [i_3])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_14 [i_4 - 1] [i_5] [i_4 - 1]);
                                arr_24 [i_7] [(unsigned char)7] [2LL] [i_3] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) 67108863)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) var_3)))) * (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3] [(short)0])) != (((/* implicit */int) (signed char)64)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((unsigned int) arr_11 [i_3] [i_3]))))) ? (((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_15 [(unsigned char)3] [i_3] [i_3] [(unsigned short)8]))) : (((/* implicit */unsigned int) arr_3 [(unsigned short)2] [i_3] [13ULL]))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) (~(arr_3 [i_8] [i_8] [i_8])));
        var_19 = ((/* implicit */short) ((max((arr_4 [i_8] [i_8] [21U]), (((/* implicit */long long int) (unsigned short)65533)))) > (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 1; i_11 < 8; i_11 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((unsigned short) var_7));
                        arr_36 [i_8] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) min((var_1), (arr_8 [2LL])))))));
                    }
                } 
            } 
        } 
        arr_37 [i_8] = ((/* implicit */unsigned short) ((18446744073709551615ULL) + (((((/* implicit */_Bool) (unsigned short)65533)) ? (arr_27 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)24), ((unsigned short)65533)))))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) min(((unsigned short)46040), (((/* implicit */unsigned short) (_Bool)1))))) ? ((+(((/* implicit */int) var_5)))) : (var_15))) : (((/* implicit */int) var_14))));
    var_22 = ((/* implicit */unsigned int) var_6);
}
