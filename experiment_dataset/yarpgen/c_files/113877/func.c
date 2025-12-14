/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113877
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) * (((long long int) var_10))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((3176420449137727034LL) < (-3176420449137727034LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)25))) * (715707933U)))) : (6753388429008179257ULL))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
                    {
                        var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9270197531790064470ULL))));
                        arr_13 [i_1] [i_2] [i_2 + 1] [i_3] [i_2 + 3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) -3176420449137727025LL)) : (var_13))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned char) 30U);
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2 + 3] [i_4]))) : (((((/* implicit */_Bool) var_14)) ? (4294967265U) : (var_2))))))));
                    }
                    var_19 += ((/* implicit */unsigned char) var_13);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)2458)) ? (-3176420449137727020LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) == (7015490418929085401LL))) ? (((/* implicit */int) (unsigned short)7183)) : (((/* implicit */int) (unsigned short)25085))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (unsigned char)212))));
                                var_22 ^= ((/* implicit */unsigned short) (unsigned char)255);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((unsigned char) ((unsigned char) 2599775003U)))));
                                var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3262058971308371691LL)) ? (3579259363U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 3176420449137727024LL))));
}
