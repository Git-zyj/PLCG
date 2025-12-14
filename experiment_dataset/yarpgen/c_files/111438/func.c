/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111438
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_3 [(signed char)9] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0 + 3])), ((+(((/* implicit */int) (unsigned char)31))))))) : (var_18)));
        var_20 = ((/* implicit */_Bool) var_0);
        var_21 = ((/* implicit */long long int) ((signed char) (signed char)(-127 - 1)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_22 -= ((/* implicit */long long int) ((_Bool) ((_Bool) (~(arr_6 [i_1] [i_1])))));
        arr_7 [i_1] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33463))) >= (((unsigned long long int) ((unsigned char) -1554901836)))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_1] [i_1 + 2])))) ? (((((/* implicit */_Bool) 1028689714659778018LL)) ? (((/* implicit */long long int) -737236055)) : (35184372088831LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 3])) ? (((/* implicit */unsigned int) 14)) : (arr_6 [i_1] [i_1 - 1]))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_17 [i_2] [4] [i_4] [i_4] = ((/* implicit */_Bool) ((((arr_4 [i_4 + 3]) != (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) : (arr_0 [i_3 + 3]))) : (((/* implicit */unsigned long long int) var_0))));
                    var_24 = ((/* implicit */unsigned char) var_12);
                    arr_18 [i_4] = ((/* implicit */signed char) (+(arr_9 [i_2])));
                    var_25 = (((_Bool)0) ? (((/* implicit */int) (unsigned char)99)) : (-1667595376));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [8] [i_6])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [8ULL])) : (((/* implicit */int) (short)0))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_16 [i_2] [i_5] [i_5] [7LL]))))) <= (((/* implicit */unsigned long long int) var_11))));
                    var_27 |= ((/* implicit */_Bool) arr_12 [(unsigned char)7] [i_5] [i_5]);
                    arr_25 [i_6] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_6]))))), (((arr_24 [i_2] [i_5] [8LL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))))), (((((/* implicit */_Bool) arr_19 [i_2] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (arr_12 [i_2] [6ULL] [i_6])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_10)) : (var_12)))))));
                }
            } 
        } 
        arr_26 [i_2] = ((/* implicit */long long int) max((arr_24 [i_2] [i_2 + 2] [i_2]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_2 + 2])))))));
    }
    var_28 = var_17;
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned int) var_2);
        var_29 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)220)))));
    }
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        arr_32 [i_8] [8] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_30 [8ULL])) != (min((279846469), (((/* implicit */int) (unsigned char)61)))))));
        var_30 += ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((short) arr_31 [19ULL]))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 0U)) : (var_6))))), (var_12)));
        arr_33 [(unsigned char)16] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) arr_30 [i_8]))))) ? (arr_27 [i_8]) : (((/* implicit */unsigned long long int) arr_31 [i_8]))));
    }
    var_31 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 18; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            {
                arr_39 [i_9] = ((/* implicit */_Bool) (~(var_3)));
                var_32 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_37 [i_10] [i_9] [i_9])) ? (((/* implicit */int) (unsigned short)60276)) : (((/* implicit */int) var_17)))) : (((((/* implicit */int) var_13)) ^ (arr_28 [i_10]))))), (((((int) (unsigned short)0)) >> (((((arr_38 [i_9]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_37 [i_10] [i_10] [i_10])))) - (49))))));
            }
        } 
    } 
}
