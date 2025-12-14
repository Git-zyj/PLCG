/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169673
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_2 [9U] = arr_1 [i_0];
        arr_3 [i_0] [12] = ((((/* implicit */_Bool) var_0)) ? ((~(-4483845662758583147LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))))));
        arr_4 [i_0] = arr_1 [i_0 - 2];
    }
    for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        arr_8 [(short)6] = ((/* implicit */short) (_Bool)0);
        arr_9 [(unsigned short)12] [1U] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_1 [5U])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [(short)10])) > (((/* implicit */int) (unsigned short)20244)))))) : (arr_7 [i_1 + 1]))));
        var_10 = ((/* implicit */long long int) 5086577275664044531ULL);
        var_11 = ((/* implicit */unsigned long long int) arr_1 [0LL]);
        var_12 = ((/* implicit */unsigned short) max((var_4), (var_7)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        arr_12 [i_2 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) (short)8468))), (13360166798045507085ULL))))));
        var_13 = ((/* implicit */unsigned char) max((1161729324618064764LL), (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)60893), (((/* implicit */unsigned short) var_7)))))) ^ (arr_11 [13ULL])))));
    }
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_14 = (-(((/* implicit */int) (unsigned short)20244)));
        var_15 |= ((/* implicit */short) arr_13 [i_3] [i_3]);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) (unsigned short)9664))), (max((13360166798045507085ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13360166798045507084ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55881))) : (arr_10 [i_4] [i_4]))))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (short)-32751))));
        arr_18 [(_Bool)1] = ((/* implicit */unsigned int) var_5);
    }
}
