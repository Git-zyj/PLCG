/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129551
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) && (((((/* implicit */_Bool) -33955555)) || (((/* implicit */_Bool) arr_0 [i_0] [(short)6]))))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (-33955555))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11146241500820012795ULL)) || (((/* implicit */_Bool) 33955555))));
            arr_5 [i_0] [i_0 + 3] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -33955555)) && (((/* implicit */_Bool) var_6)))) ? (arr_1 [i_0 + 3]) : ((~(var_5)))));
        }
        var_13 = ((/* implicit */short) ((((/* implicit */int) (short)-16384)) < (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3 + 2] [i_4] [i_2] = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((int) arr_11 [i_4] [i_5]));
                        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1203350147)))))));
                        var_16 = ((/* implicit */unsigned int) ((signed char) (~(33955555))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_13 [i_6])))))))));
                        var_18 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_17 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (524284U))));
                    }
                    arr_24 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(1203350147)))) > (((((/* implicit */_Bool) arr_21 [i_2] [i_2] [(_Bool)1] [4LL] [i_2 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (var_8)))));
                    arr_25 [i_2] [i_2 - 1] [i_4] [6ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_2 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 33955538)) ? (((/* implicit */int) arr_13 [i_4])) : (33955555))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
            {
                {
                    arr_33 [i_2 - 1] [i_2] [i_2 + 2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2 - 1] [i_8 + 1])) * (((((/* implicit */_Bool) arr_15 [i_2] [i_7] [i_7] [i_2])) ? (((/* implicit */int) var_7)) : (33955555)))));
                    arr_34 [i_2 + 2] [i_7] [i_8] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [(_Bool)1] [i_8] [i_8 + 1] [i_8 + 1])) >> ((((-(arr_29 [i_7]))) - (8483613838450061758LL)))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        for (int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (_Bool)1))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) (unsigned short)0))))))))));
                var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) max((-682369448), (734790636)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9] [i_10]))) : (((1558736564U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6134))))))), (((/* implicit */unsigned int) arr_38 [i_10] [i_9]))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_3);
    var_22 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) & (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (7837306149308758346ULL)))) ? (min((7513363956995956223ULL), (11ULL))) : (((/* implicit */unsigned long long int) min((1747772299U), (((/* implicit */unsigned int) var_2)))))))));
}
