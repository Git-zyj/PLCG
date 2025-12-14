/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120706
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
    var_17 ^= ((/* implicit */unsigned int) (short)6310);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) (((((~(arr_9 [i_0 + 2]))) + (2147483647))) << (((((long long int) arr_1 [i_0 + 3])) - (1296448880LL)))));
                    arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (arr_5 [i_0 + 4] [(unsigned char)13] [i_0 - 1])))) ? (((/* implicit */int) var_7)) : ((~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_4 + 1] [i_0 - 1])) % (-442630486)))) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_4 - 2] [i_0 + 4]))))))))));
                                var_20 = ((/* implicit */short) -1LL);
                                arr_19 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned int) ((((3270151581U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) > (((((unsigned int) arr_0 [9U] [3U])) | (((/* implicit */unsigned int) arr_1 [i_0 + 1]))))));
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)106)), (arr_3 [i_0 + 2])))) ? (((long long int) (-(1980331664)))) : (((/* implicit */long long int) ((unsigned int) arr_9 [i_0]))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~((~(arr_3 [i_0 + 2]))))))));
        arr_20 [i_0] = ((/* implicit */long long int) ((((unsigned int) arr_4 [i_0 + 2])) >> (((((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (((/* implicit */unsigned int) -1980331664)) : (2839525325U))) - (2314635602U)))));
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) max((min((arr_22 [i_5]), (((/* implicit */short) var_10)))), (((/* implicit */short) (unsigned char)255)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) -4770683532786212224LL)) ? (((/* implicit */unsigned long long int) (~(arr_29 [14ULL] [i_6] [i_6] [i_5])))) : (((arr_24 [i_5]) & (((/* implicit */unsigned long long int) -1980331665)))))))));
                    var_24 ^= ((/* implicit */int) arr_26 [i_7] [i_5]);
                }
            } 
        } 
    }
}
