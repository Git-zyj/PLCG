/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119983
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
    var_15 = var_10;
    var_16 = ((/* implicit */_Bool) max((((min((var_7), (((/* implicit */long long int) var_11)))) / (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)22)) / (((/* implicit */int) (unsigned char)22)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) (unsigned char)233);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)21)) <= (((/* implicit */int) (unsigned char)22))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) (+(arr_1 [i_1] [i_1])));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1])));
        var_20 -= ((/* implicit */unsigned long long int) var_11);
    }
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (unsigned short)39923);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 3]))) : (arr_7 [i_2 + 2] [i_2 + 1]))) >= ((~(arr_7 [i_2] [i_2])))));
        /* LoopSeq 2 */
        for (short i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            arr_14 [i_2] [i_3] = ((/* implicit */long long int) 10335351491342748459ULL);
            var_21 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)141))));
            var_22 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))))) >= ((-(((/* implicit */int) (_Bool)1)))))));
            var_23 = ((/* implicit */int) ((signed char) 5276576376066389561ULL));
        }
        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) (unsigned char)241);
            var_25 ^= ((/* implicit */unsigned char) arr_7 [i_2] [i_4]);
            var_26 = ((/* implicit */unsigned long long int) (signed char)-63);
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) 10699042654524333820ULL)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-120)), ((short)29206)))) : ((+(((/* implicit */int) (unsigned char)241)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)160))))) >= (arr_7 [i_4] [i_2]))))));
        }
    }
    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
    {
        var_28 = ((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)63)))))));
        var_29 = ((/* implicit */long long int) (short)26778);
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */int) (signed char)-70)) | (((/* implicit */int) (signed char)62)))) : (((/* implicit */int) var_1))))) ? (var_5) : (((/* implicit */int) (signed char)-55))));
    }
}
