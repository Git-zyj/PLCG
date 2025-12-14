/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170910
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
    var_12 = ((/* implicit */int) var_10);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)20]))));
        var_14 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) 2487781002U))))))) : (((((/* implicit */_Bool) 1807186292U)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (unsigned short)61955))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) 2487781002U)) ? (((/* implicit */int) (signed char)-42)) : (-1755837858)))));
        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) - (884172778U)))));
        arr_7 [(short)6] = ((/* implicit */unsigned short) ((((unsigned int) (unsigned char)162)) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_16 = ((max(((-(((/* implicit */int) (signed char)43)))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (-1755837845) : (((/* implicit */int) (unsigned short)57136)))))) * (((/* implicit */int) var_8)));
        var_17 = ((/* implicit */long long int) ((int) var_4));
    }
    for (int i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) ((arr_8 [i_3 + 1]) && (((/* implicit */_Bool) -5804719506130919898LL))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned short)18511)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (1040167172) : (-1755837845)))))))));
        var_19 &= ((/* implicit */short) (+(arr_12 [4] [i_3])));
    }
    var_20 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */unsigned int) -1755837832)) != (1807186299U)))) != (((/* implicit */int) var_1))));
    var_21 = ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)58)) ? (1974419416) : (((/* implicit */int) var_5))))))) ^ ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58708))) - (var_4))))));
}
