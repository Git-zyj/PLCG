/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127983
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
    var_12 = ((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)8186)) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((short) ((((/* implicit */int) ((unsigned short) (unsigned char)32))) + (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_9)))))))));
                        arr_11 [i_0 - 2] [i_0 - 2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2]))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)224)), (min((((/* implicit */unsigned short) arr_3 [(short)3])), (var_6)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) var_10)) : (4958431563460364618ULL)))) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                        var_16 = ((/* implicit */unsigned short) (+((-(18446744073709551608ULL)))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) (-((+(((((/* implicit */int) var_5)) / (-1)))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2])) ? (8) : (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 - 2])))) : (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((26LL), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((+(534823108961048340ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : ((~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1538764709U)))))));
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_4])))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 15; i_8 += 1) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)27)) + (((/* implicit */int) (signed char)99))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15489))) : (arr_18 [i_6])))) : (((((/* implicit */_Bool) arr_24 [i_6] [(_Bool)1] [(_Bool)1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (15206978794801994367ULL))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15)) ? (var_4) : (((/* implicit */unsigned int) arr_23 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]))));
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1042071974)) ? (-14) : (((/* implicit */int) var_6))))) >= (var_7)));
                    arr_25 [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1])) ? (arr_23 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1]) : (-865251453)));
                }
            } 
        } 
        var_24 = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16461))) == (arr_20 [i_6] [i_6]))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))));
        /* LoopNest 3 */
        for (short i_9 = 3; i_9 < 15; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (-(arr_32 [i_6] [i_10])));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((((/* implicit */_Bool) 8249005775029603386LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                    }
                } 
            } 
        } 
    }
}
