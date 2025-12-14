/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148240
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >> (((-1945721551032157794LL) + (1945721551032157814LL)))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)-43))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)15)) >> (((arr_1 [i_0] [i_0]) + (536437442067400173LL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)15)) == (((/* implicit */int) ((((/* implicit */int) (signed char)-79)) > (((/* implicit */int) (signed char)127)))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_12 [i_0] [i_1] [i_2]))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_0] [i_1])) + (2147483647))) >> (((((((/* implicit */int) (short)30002)) % (((/* implicit */int) (short)32767)))) - (29984)))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (signed char)79))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_4] [5LL])) - (((/* implicit */int) var_4))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) <= (var_2))))) | (var_12)));
        var_23 = ((var_0) <= (arr_16 [i_4]));
        var_24 -= ((4507429273907509363ULL) < (var_10));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_25 += ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) + (16239283029165149185ULL))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (16239283029165149185ULL))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_5] [i_5]) || (((/* implicit */_Bool) 18446744073709551595ULL)))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (arr_16 [i_5])))));
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_19 [i_5] [i_5])))) - (((((/* implicit */int) arr_19 [i_5] [i_5])) << (((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_16 [i_6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ^ (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-127))))));
        arr_25 [i_6] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (274877905920ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (signed char)76))))) << (((/* implicit */int) var_11))))));
    }
    var_27 = ((/* implicit */short) var_7);
    var_28 = ((/* implicit */unsigned long long int) var_7);
}
