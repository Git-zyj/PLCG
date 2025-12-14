/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132628
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
    var_19 = ((/* implicit */_Bool) (~(var_13)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2035061731320631366LL)) ? (2035061731320631363LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11646)))));
            var_21 *= ((/* implicit */signed char) max((-2035061731320631366LL), (((/* implicit */long long int) (unsigned short)11646))));
            var_22 = ((/* implicit */signed char) arr_0 [i_1]);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_23 = (+(((/* implicit */int) (unsigned char)61)));
                var_24 ^= ((/* implicit */unsigned long long int) (+((~(arr_4 [10] [10] [i_2])))));
                var_25 = min((((/* implicit */long long int) ((short) arr_4 [i_0 - 1] [i_0 + 3] [i_0 + 1]))), (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 3] [i_0 - 1])) ? (arr_4 [i_0 + 3] [i_0 + 2] [i_0 - 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 3]))));
            }
        }
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11646)) | (((/* implicit */int) (unsigned char)105)))))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 4294967287U)) : (9551135515679687760ULL))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) arr_1 [i_0]))));
        var_28 = ((/* implicit */unsigned long long int) arr_5 [1] [i_0] [i_0 + 1]);
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))) && ((_Bool)0))) ? (arr_9 [i_4]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
            var_30 = ((/* implicit */unsigned short) max((arr_11 [i_3] [i_4]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7)))))));
            var_31 = arr_12 [i_3] [i_3] [i_4];
        }
        /* LoopNest 3 */
        for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            for (int i_6 = 4; i_6 < 12; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_21 [10LL] [i_6] [i_6] [i_6] &= ((/* implicit */long long int) ((((/* implicit */int) min((arr_8 [i_5 + 2]), (arr_8 [i_5 - 1])))) | (((((/* implicit */int) (signed char)-96)) | (((/* implicit */int) (short)0))))));
                        var_32 = ((/* implicit */_Bool) arr_9 [i_6]);
                    }
                } 
            } 
        } 
        var_33 *= ((/* implicit */unsigned short) var_1);
    }
    var_34 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1023521776)) ? (((/* implicit */long long int) -1023521777)) : (var_14)))) ? (((/* implicit */unsigned long long int) var_7)) : (9551135515679687760ULL))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */short) ((signed char) 4254697272U)))))));
}
