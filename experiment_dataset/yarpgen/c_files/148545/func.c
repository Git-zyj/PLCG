/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148545
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) min(((unsigned short)26514), (((/* implicit */unsigned short) (unsigned char)151))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)29)) ? (4194303) : (((/* implicit */int) (unsigned char)209))))) : ((-(var_14)))))) >= (((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) & (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) var_19))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_20 = (~(((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (-2070544806) : (((/* implicit */int) var_6)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) (unsigned char)193);
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_2])) <= (((/* implicit */int) (_Bool)1))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) ? (((((/* implicit */int) arr_10 [i_1])) & (((/* implicit */int) var_1)))) : ((~(arr_8 [i_1] [i_1 - 1])))));
        arr_14 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1 + 1]);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (arr_11 [i_1] [i_1 + 1] [i_1])))) ? (((/* implicit */int) arr_10 [i_1 - 1])) : (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_0 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) var_4);
        arr_18 [i_4] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) -897326561)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4]))) : (var_3))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) != (((18025678646623458221ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_4])))))));
    }
    var_26 = ((/* implicit */unsigned int) var_10);
    var_27 ^= ((/* implicit */long long int) var_14);
    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) != (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3227760139750046201LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))) | (var_15)))));
}
