/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108519
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
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) 1456897108U))));
    var_17 = ((/* implicit */int) ((short) -530766615));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) -530766613)) - (3022855252U)));
        var_19 ^= ((/* implicit */signed char) ((unsigned short) (short)4119));
        var_20 = ((/* implicit */unsigned char) ((((9007199120523264ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)45005))));
        var_22 *= ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_4 [4U]) / (2147483647))))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) -530766618)), (1320752456U)))), (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) var_14);
        arr_6 [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 2596978066U)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (unsigned short)43479)))));
        var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -8458606787796566650LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (4294967275U))), (((/* implicit */unsigned int) var_4))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */int) (~(0U)));
        arr_11 [i_2] = ((/* implicit */int) ((7392637901270084873ULL) > (((/* implicit */unsigned long long int) -3112534362425099414LL))));
    }
    var_24 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5838807469186247467LL)) ? (((/* implicit */int) (unsigned short)43479)) : (((/* implicit */int) (signed char)88)))))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)3735))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16128)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_3]))));
    }
}
