/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16417
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
    var_10 &= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((unsigned short) (~(((/* implicit */int) (unsigned short)53246))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))));
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_4] &= ((((((/* implicit */int) var_7)) + (2147483647))) << (((var_6) - (13688255781694112760ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_12 &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) >> (((/* implicit */int) (unsigned short)20))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53246))))) : (((((/* implicit */_Bool) 24U)) ? (((/* implicit */int) arr_4 [i_6] [i_1 + 2] [i_0])) : (((/* implicit */int) var_2))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_7 = 1; i_7 < 16; i_7 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : ((((_Bool)1) ? (((/* implicit */int) var_1)) : (-1270710183)))))) ? (((((long long int) var_0)) << (((((/* implicit */int) arr_19 [(_Bool)1])) & (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [10U] [10U]))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)17))))) ? (706282105U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (_Bool)1)) : (-160726418))))));
    }
    for (short i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)16), (arr_16 [i_8] [i_8] [i_8] [i_8] [(unsigned char)2]))))) % (((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8] [i_8])) ? (-7567751633528514520LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)48)), ((short)30573))))))) : (((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967295U))) | (((/* implicit */unsigned int) 2147483647))))));
        var_17 = ((/* implicit */signed char) var_0);
    }
}
