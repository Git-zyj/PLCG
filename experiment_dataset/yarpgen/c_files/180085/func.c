/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180085
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_10 = ((/* implicit */long long int) 2288761007U);
        var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)24434)) == (((/* implicit */int) (_Bool)1))))), ((-((~(-811423267)))))));
        var_12 = ((/* implicit */_Bool) max((((unsigned int) ((unsigned long long int) 2958663647U))), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) | (((unsigned int) var_7))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) -1503405344201657759LL))))) > (((/* implicit */int) ((unsigned char) 507134812U)))));
            var_14 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))) >> (((((507134805U) % (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (49U)))));
        }
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-107)))))));
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            arr_19 [9U] [i_5] [i_4] [(short)12] [i_6] = ((/* implicit */short) 2393929686U);
                            arr_20 [i_3] [i_3 + 2] [i_3] [i_5] [i_3 + 2] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) * (4294967287U)));
                            var_17 = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) var_2)));
                        }
                    } 
                } 
            } 
            arr_21 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)254)) << (((var_5) - (10759312135937214065ULL)))))));
        }
        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3179942382U)) ? ((~(((/* implicit */int) (unsigned char)103)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3521047612U)) == (4639132417969970626ULL))))));
            var_19 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))) / (5739959833951016553LL))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */int) (short)25004)) >> (((((unsigned long long int) var_7)) - (18446744072044338080ULL)))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_9))));
        }
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
    {
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (short i_10 = 2; i_10 < 16; i_10 += 4) 
            {
                {
                    var_23 |= ((((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) var_6)))))) || ((!(((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) var_8)))))));
                    arr_31 [i_10 + 2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (min(((unsigned char)235), (var_1)))))) != (((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) ((((/* implicit */int) (short)-24434)) != (var_8)))) : (-1059021050)))));
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */_Bool) var_2);
}
