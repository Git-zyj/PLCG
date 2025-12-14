/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179980
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_2)) ^ (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (((11005380676369152084ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */int) (unsigned short)57862)) + (var_2))) - (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [(_Bool)1] [(unsigned char)13] [i_3] [i_0])) | (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))))))));
                                arr_16 [(unsigned char)12] [1] [(unsigned char)5] [0] [i_4] [i_4 - 1] [(unsigned char)2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_9)))))) % ((-(((((/* implicit */_Bool) (short)-32488)) ? (((/* implicit */int) (short)32479)) : (((/* implicit */int) (unsigned char)253))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    var_23 += ((/* implicit */unsigned short) max((((/* implicit */signed char) ((_Bool) 18446744073709551602ULL))), ((signed char)9)));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_6] [i_7] [i_6] [i_6]))) ? (arr_22 [i_6]) : (((/* implicit */unsigned long long int) (~(((268435455U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)23488))))))))));
                    arr_23 [i_6] [i_6] [i_7] = ((/* implicit */short) arr_20 [i_5] [i_6] [i_7]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    arr_34 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8 + 2] [i_8 - 2] [i_8 - 3])) ? (((/* implicit */int) arr_29 [i_8 - 2] [i_8 - 1] [i_8 + 2])) : (((/* implicit */int) arr_29 [i_8 + 1] [i_8 + 1] [i_8 + 1]))))) ? (((((/* implicit */int) arr_29 [i_8 + 1] [i_8 + 2] [i_8 - 3])) / (((/* implicit */int) arr_29 [i_8 - 2] [i_8 + 2] [i_8 - 1])))) : ((-(((/* implicit */int) var_19))))));
                    arr_35 [i_8 - 2] [i_8] = ((/* implicit */signed char) max((min((((/* implicit */int) (signed char)22)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned short)48342)))))), (((int) ((((var_11) + (2147483647))) << (((((arr_9 [i_8] [i_8] [i_8] [5LL] [i_10] [9LL]) + (5527533071187639109LL))) - (16LL))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) var_16);
}
