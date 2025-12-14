/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181398
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
    var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
    var_13 &= ((/* implicit */signed char) 8578189297449225775ULL);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) 8610916882429306652ULL))) : (((var_10) ? (9868554776260325841ULL) : (((/* implicit */unsigned long long int) -2682877266393814578LL)))))))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_6)));
        }
        var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-589)) ? (-2682877266393814569LL) : ((-(-8132876523926304543LL)))))));
    }
    for (int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        var_17 -= ((/* implicit */_Bool) ((int) (-(max((-2682877266393814578LL), (((/* implicit */long long int) -1503664370)))))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned long long int) max((276670948434056061LL), (min((((/* implicit */long long int) arr_6 [i_2 + 1] [i_2 - 2])), (-5888584950887114625LL)))));
        var_18 = (+(arr_7 [i_2]));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~((-(8976337820507477185LL)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) / ((-(arr_13 [i_3] [i_3])))))));
        var_19 *= ((/* implicit */unsigned int) ((1942602197) & (((/* implicit */int) ((signed char) arr_12 [(short)14])))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_10))));
        var_21 = ((/* implicit */unsigned char) ((int) (signed char)-85));
    }
}
