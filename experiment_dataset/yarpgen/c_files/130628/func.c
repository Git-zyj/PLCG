/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130628
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
    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */int) (!(((/* implicit */_Bool) 6473348446556340168ULL))))) - (((/* implicit */int) max((var_12), (((/* implicit */short) var_2))))))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) var_9))))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (((-(((/* implicit */int) var_9)))) < (((/* implicit */int) var_5))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned char) arr_2 [i_0] [i_0]));
        var_19 = (+(((((int) arr_1 [i_0] [i_0])) / (((int) arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_20 -= ((/* implicit */signed char) var_0);
        var_21 = ((/* implicit */short) (((((-(((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) var_7)))))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)23110)) - (23108)))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)23110)) - ((((-(((/* implicit */int) var_11)))) ^ (var_1)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 4) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(arr_7 [i_1]))))));
        var_24 &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (((/* implicit */unsigned long long int) 4217103922U)) : (arr_6 [i_1 - 4]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (arr_6 [i_1 + 2])))));
        var_25 = ((/* implicit */unsigned char) ((unsigned short) (+(arr_6 [i_1 + 4]))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((signed char) var_16)))) && ((!(((/* implicit */_Bool) ((unsigned short) var_10)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) arr_11 [i_2] [i_2]);
        arr_12 [i_2] = ((/* implicit */long long int) (+(1392658977U)));
        arr_13 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_0 [i_2]))))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) arr_10 [(short)6]);
        var_27 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_3] [i_3]), (((/* implicit */unsigned short) var_11)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) 1392658977U)) : (var_0)))));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_5 [i_3] [i_3]))));
        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_3] [i_3])) >= ((-((-(((/* implicit */int) (unsigned short)23125))))))));
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (-(((long long int) (unsigned short)42419)))))));
        arr_19 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)53459)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_4]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_5 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4]))))) : (((/* implicit */unsigned long long int) min((1845401961), (((/* implicit */int) ((short) (unsigned short)23116))))))));
        var_31 = ((/* implicit */int) (((-(-9223372036854775780LL))) > (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
        var_32 = ((/* implicit */signed char) min(((-(arr_17 [i_4] [i_4]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) && (((/* implicit */_Bool) var_1)))))));
    }
}
