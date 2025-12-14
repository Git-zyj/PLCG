/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147671
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
    var_16 = ((/* implicit */_Bool) 4440761537195313677ULL);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35209))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33815))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30308)) ? (((/* implicit */int) (unsigned short)59487)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_14))))) : ((+(var_8)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */signed char) (((-2147483647 - 1)) | (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(arr_0 [i_0]))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)4080)) : (((/* implicit */int) (unsigned short)57362))))) : ((-(var_15)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 12860232256157194875ULL))));
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_2 [i_1]))))));
        var_23 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)61102))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_1])))) ? (var_8) : (((/* implicit */unsigned int) (-(((((/* implicit */int) var_9)) - (((/* implicit */int) var_9)))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2])))));
        var_26 ^= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_11))))));
    }
    var_27 = ((/* implicit */unsigned short) var_8);
    var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)96)) >= (((/* implicit */int) var_2))))), (min((((/* implicit */unsigned long long int) var_12)), (400238561892917897ULL)))))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (signed char)-97)), (3434226972U))))))));
}
