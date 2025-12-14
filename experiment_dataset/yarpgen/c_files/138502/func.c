/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138502
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) ((max(((-(((/* implicit */int) (unsigned char)60)))), ((+(((/* implicit */int) (_Bool)1)))))) > ((+(((/* implicit */int) (signed char)7))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)60), ((unsigned char)147)))) * (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
        arr_4 [(unsigned char)2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)164))));
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_7 [12LL] = min((((/* implicit */long long int) min(((~(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1))))))), ((+(min((((/* implicit */long long int) (_Bool)0)), (8609395436071249193LL))))));
        var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (signed char)-70))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) (short)0)), (3813933689665692244LL)))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (7261775651042448267LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166)))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_13 &= max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))), ((-(7142745725038585152LL))))), ((~(((((/* implicit */_Bool) 1913431053U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))));
        /* LoopNest 3 */
        for (long long int i_3 = 4; i_3 < 7; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        arr_18 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) != (((/* implicit */int) (signed char)127))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) max(((unsigned short)58820), (((/* implicit */unsigned short) (short)0))))) : (((/* implicit */int) max(((unsigned char)25), (((/* implicit */unsigned char) (_Bool)1)))))))));
                        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_2] [i_4] [i_4]))))) ? (var_9) : (((/* implicit */unsigned long long int) 0U)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)17))))) * (((/* implicit */int) (unsigned short)0)))))));
                        var_15 -= (!(((/* implicit */_Bool) max(((((-2147483647 - 1)) / (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned short)6722))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            var_16 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (((/* implicit */int) arr_1 [i_6 - 1])) : (((/* implicit */int) arr_1 [i_6 + 2]))));
            arr_21 [(unsigned char)0] [(unsigned char)0] [6LL] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned short)0))));
            arr_22 [i_2] [6LL] [6LL] |= ((/* implicit */unsigned char) -9223372036854775806LL);
        }
        /* vectorizable */
        for (unsigned char i_7 = 3; i_7 < 9; i_7 += 3) 
        {
            arr_27 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)223)))))));
            arr_28 [i_2] = ((/* implicit */_Bool) (+((+(1853264722)))));
            var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6917529027641081856LL))));
            arr_29 [(unsigned short)4] [(_Bool)1] [(unsigned short)4] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_2 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 3]))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                var_18 = ((/* implicit */unsigned int) 4515617361636518691ULL);
                var_19 &= ((/* implicit */signed char) arr_25 [(short)5] [i_7] [2]);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775794LL))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2])) < (((/* implicit */int) arr_10 [i_2]))));
                            var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23193)) ? (arr_25 [i_9] [i_10] [i_7 - 2]) : (((/* implicit */unsigned long long int) 6917529027641081840LL))));
                            arr_38 [i_2] [i_7] [i_2] [i_2] [i_2] [i_2] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */unsigned long long int) 6917529027641081856LL)) : (arr_25 [i_2 - 1] [i_7 + 1] [i_8])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 0LL))))));
            }
        }
        var_24 ^= (unsigned short)42336;
        var_25 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)84)) << (((((/* implicit */int) (signed char)96)) - (78)))));
    }
    var_26 |= ((/* implicit */long long int) var_7);
    var_27 ^= var_2;
}
