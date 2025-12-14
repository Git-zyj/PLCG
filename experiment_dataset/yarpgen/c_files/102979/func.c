/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102979
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
    var_10 = ((/* implicit */unsigned int) (short)32767);
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_4))))) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)227)) + (((/* implicit */int) var_4))))));
        arr_2 [i_0] = var_7;
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) var_9))))) > (((/* implicit */int) arr_3 [i_1]))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) * ((+(((/* implicit */int) var_1))))));
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)35786)))))));
        var_16 *= ((/* implicit */_Bool) min(((~((+(((/* implicit */int) (unsigned short)25763)))))), (((/* implicit */int) arr_3 [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)1792)), (3375362607U)));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((min(((unsigned char)112), ((unsigned char)12))), ((unsigned char)230))))) > (((919604709U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2])))))));
        var_19 = ((((/* implicit */_Bool) (short)-7834)) ? (6670637420789890281ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))));
    }
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)26572))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) (((-(7122668591632962007ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 1])))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (arr_8 [i_3 - 1] [i_3])));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 1])) ? (arr_8 [i_3 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) * (var_7))))));
        arr_10 [i_3] = ((/* implicit */short) ((arr_8 [i_3 - 1] [i_3 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111)))));
    }
    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) max((arr_8 [i_4 - 1] [i_4]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)25763), (((/* implicit */unsigned short) (unsigned char)9))))))))));
        var_24 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_4 + 1]))))), (min((((/* implicit */unsigned int) arr_11 [i_4 - 1])), (var_7)))));
    }
    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : ((-(arr_8 [i_5] [i_5])))));
        arr_20 [i_5] = arr_14 [i_5];
        var_26 = ((/* implicit */_Bool) arr_19 [i_5]);
    }
}
