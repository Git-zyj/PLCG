/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117377
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
    var_10 = var_7;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [(unsigned char)6])) : (((/* implicit */int) var_8))))) != (max((9601188410130084159ULL), (((/* implicit */unsigned long long int) var_5)))))));
        arr_4 [(_Bool)1] = ((/* implicit */signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) max(((unsigned short)20357), (((/* implicit */unsigned short) arr_1 [i_0])))))))), ((short)-4498)));
        var_12 = ((/* implicit */signed char) arr_2 [(short)10]);
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned char) ((signed char) ((arr_7 [i_1]) * (var_7))));
            arr_12 [i_2] [i_1] [i_1] = ((/* implicit */int) (signed char)-64);
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_9))));
            var_14 ^= ((unsigned char) (((~(((/* implicit */int) (unsigned short)9824)))) * ((~(((/* implicit */int) (_Bool)1))))));
        }
        /* vectorizable */
        for (signed char i_3 = 4; i_3 < 10; i_3 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
            arr_15 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 - 4] [i_3 - 4] [i_3 - 4])) ? (arr_10 [i_3 - 4] [i_3 - 4] [i_3 + 1]) : (arr_10 [i_3 - 4] [i_3 - 4] [i_3 - 2])));
            var_16 = ((/* implicit */unsigned short) 1211701897U);
        }
        arr_16 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((arr_2 [8ULL]) ? (((/* implicit */int) arr_0 [i_1])) : (arr_8 [(signed char)0])))) >= ((((_Bool)0) ? (1211701917U) : (var_0)))))) >> (((((((/* implicit */unsigned int) var_6)) | (((((/* implicit */_Bool) -1901991729)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4037212478U))))) - (1579219145U)))));
        var_17 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)30393)) != (((/* implicit */int) (signed char)-116))))) * (((/* implicit */int) var_5))))), (arr_10 [(_Bool)1] [i_1] [(_Bool)1])));
    }
    var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) : ((-(var_0)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (31457280U))))))))));
}
