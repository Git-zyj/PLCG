/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159095
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
    var_15 = ((/* implicit */unsigned long long int) var_4);
    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65532)) : (var_14)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1459)) << (((/* implicit */int) ((((/* implicit */_Bool) 738489235)) || (((/* implicit */_Bool) 2307879986073566364ULL))))))))));
    var_17 *= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_3 [(unsigned short)2] [18U] |= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [(unsigned char)12])) : (4991801962646789215ULL))) >> ((((~(((/* implicit */int) arr_1 [i_0] [0])))) - (77)))));
        var_18 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((int) -7491517603797656120LL)) / ((+(arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_1 [i_1] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))) ^ (arr_2 [i_1] [i_2])))));
                var_20 = ((/* implicit */unsigned long long int) (_Bool)0);
            }
        } 
    } 
}
