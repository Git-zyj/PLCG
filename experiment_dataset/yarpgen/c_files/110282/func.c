/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110282
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 *= (_Bool)1;
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((((_Bool)1) ? (1125899906842624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0 + 1] [i_2 - 3] [i_3] [i_0 - 1]))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_6))) + (arr_8 [18U] [i_0] [7LL] [i_2] [(unsigned char)11] [(_Bool)1]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)3584)), (2097024U))))))));
                            var_21 = ((/* implicit */int) arr_6 [i_0] [0U] [i_0] [i_0]);
                            var_22 = ((/* implicit */unsigned int) arr_4 [i_2] [i_0]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 2]);
                arr_12 [18] [(signed char)0] [i_1] = ((/* implicit */short) arr_6 [(unsigned char)19] [i_1] [(unsigned short)19] [(unsigned char)19]);
                arr_13 [i_0] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) | ((~(1125899906842624ULL))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned char)241)), (((((/* implicit */_Bool) 524286U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)50695)))))) - (((((/* implicit */_Bool) 2097024U)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-25572)))) : (((int) 16384))))));
    var_25 = ((/* implicit */unsigned char) 2097031U);
    /* LoopSeq 3 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_14), (((/* implicit */signed char) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))))))))) / ((~(((((/* implicit */int) (unsigned char)241)) * (((/* implicit */int) (_Bool)1))))))));
        arr_17 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) & ((+(((/* implicit */int) arr_4 [i_4] [i_4]))))));
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((((/* implicit */unsigned long long int) 1818981031U)) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [(unsigned short)17]))) : (698331840975177083ULL))))), (max((((/* implicit */unsigned long long int) arr_3 [i_5])), (var_1))))))));
        arr_22 [(_Bool)1] [(short)11] = (~(max((max((((/* implicit */long long int) var_4)), (4611686018423193600LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_11)))))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
            {
                for (signed char i_8 = 4; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_28 = ((/* implicit */long long int) var_17);
                        var_29 = ((/* implicit */_Bool) (signed char)63);
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned short) 2147450880U);
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1125899906842622ULL))))), (2251524935778304ULL)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)512)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2615189187U))) - (var_15)))) : (((((/* implicit */_Bool) 10892562940758063649ULL)) ? (((/* implicit */long long int) arr_32 [i_9])) : (-9223372036854775802LL))))))));
    }
}
