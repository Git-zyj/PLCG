/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188969
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
    var_20 ^= ((/* implicit */long long int) var_16);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((((/* implicit */long long int) (+((-(((/* implicit */int) arr_1 [i_0]))))))) + (min((((/* implicit */long long int) ((((/* implicit */int) (short)-2192)) - (((/* implicit */int) var_0))))), (arr_0 [i_0]))));
        arr_2 [i_0] = max((((/* implicit */long long int) (((~(((/* implicit */int) (short)2192)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2192)))))))), (max((((/* implicit */long long int) (_Bool)1)), ((+(arr_0 [i_0]))))));
        arr_3 [(short)1] = (!((!(((/* implicit */_Bool) (unsigned short)3357)))));
        var_22 -= ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_0 [(signed char)8]), (((/* implicit */long long int) var_19))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)31396)) % (((/* implicit */int) (short)-31376))))) : (arr_0 [i_0]))) < (max((arr_0 [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-2192)))))))));
        var_23 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (((((var_18) + (9223372036854775807LL))) << (((4441575788989759149ULL) - (4441575788989759149ULL))))))));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_24 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 1])) % (((/* implicit */int) arr_5 [i_1 - 1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1]))) + (var_18)))));
        var_25 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1]))))) & (min((((/* implicit */long long int) arr_6 [(short)2])), (var_18))))));
        var_26 = ((/* implicit */unsigned short) 34359738367LL);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4441575788989759146ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) arr_8 [i_1 + 1]))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_4 [i_1])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                var_28 -= ((/* implicit */unsigned int) 2626248241611866507ULL);
                var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
            }
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 295592212U)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) || ((!(((/* implicit */_Bool) arr_8 [7U])))))) ? ((-(min((14005168284719792460ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (4441575788989759146ULL))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~(-1184141607632412261LL))))));
                        arr_21 [i_1] [i_1 + 1] [i_1] [i_4] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) var_12)), (0ULL))))), (((/* implicit */unsigned long long int) arr_11 [(short)17] [i_4] [12ULL] [i_6]))));
                    }
                } 
            } 
        }
        var_32 *= ((/* implicit */short) 33554431U);
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_33 ^= ((/* implicit */signed char) (-(arr_11 [i_7] [i_7] [i_7] [i_7])));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7])) % (((/* implicit */int) var_8))));
    }
    var_35 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (var_11)))) >= (2626248241611866507ULL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4441575788989759146ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_15))))))));
}
