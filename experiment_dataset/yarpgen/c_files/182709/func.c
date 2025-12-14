/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182709
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((((arr_1 [i_0]) + (2147483647))) >> (((((/* implicit */int) var_13)) - (54994))))) >> (((/* implicit */int) ((_Bool) (_Bool)0)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (arr_1 [i_0])))) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) var_14))));
            var_16 ^= ((/* implicit */unsigned int) ((var_7) & (var_8)));
            arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0 + 1])) < (((((/* implicit */_Bool) -5194904098716113544LL)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned char)164))))));
            arr_7 [i_0] [i_1] = (unsigned char)59;
        }
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))) & (arr_5 [i_0] [i_0] [i_0 + 3])));
        var_17 = ((/* implicit */unsigned char) -857194401398405002LL);
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (arr_5 [i_0 + 2] [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((var_3) - (3074750229U)))))) ? (var_7) : (((/* implicit */unsigned long long int) arr_10 [i_2]))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (var_0)));
        arr_11 [i_2] = ((/* implicit */short) var_1);
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        arr_15 [i_3] [10ULL] |= ((/* implicit */unsigned char) ((int) ((((long long int) arr_12 [i_3])) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))))));
        var_21 = min((1122231781507715931LL), (max((((/* implicit */long long int) 4294967268U)), (857194401398405001LL))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(arr_12 [i_3])))) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) (short)14504)) ? (5718845196195725056ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) var_9);
        var_23 = ((/* implicit */short) (+(((((/* implicit */int) arr_3 [i_3] [6LL])) * (((/* implicit */int) (unsigned short)55337))))));
    }
    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (var_5)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (994227379U)))) : (((((/* implicit */_Bool) (signed char)81)) ? (var_7) : (17132537391194336919ULL))))) < (((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >> (((max((3747493141U), (((/* implicit */unsigned int) (unsigned short)0)))) - (3747493079U)))))));
    var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_10)))) ? ((~(3859432568U))) : (var_0)))));
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_1))));
}
