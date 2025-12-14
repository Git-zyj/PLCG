/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143110
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) /* same iter space */
        {
            var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_18)) - (7201583702725769080ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) 2091413166U)) ? (1897116798413495683LL) : (var_18)))));
            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2561768207U)) ? (-1897116798413495686LL) : (1897116798413495697LL)));
        }
        for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                arr_9 [i_0] [i_0] [i_0] [10LL] = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) 4214725073U)) : (-5297483382013240305LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) != (var_6))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (1897116798413495683LL) : (((long long int) 6752335343405589992ULL))));
                var_22 = ((/* implicit */long long int) var_17);
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_4] [14U] [i_0] [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) var_6));
                            arr_18 [i_0] [i_2 + 3] [(unsigned short)6] [i_5] [i_6] = ((/* implicit */unsigned int) var_12);
                            arr_19 [i_2] [(signed char)2] [(unsigned short)10] [i_5] [i_0] [i_6] = ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 + 4] [i_2 + 3] [i_2 - 1])) ? (((/* implicit */long long int) arr_16 [i_2 + 2] [i_2 - 2])) : (-1897116798413495683LL));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45621)) ? (1897116798413495705LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                            var_24 ^= ((((/* implicit */_Bool) ((6752335343405589984ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45630)))))) ? (var_5) : (var_10));
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) 9221120237041090560LL)) : (0ULL)))) && (((/* implicit */_Bool) ((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                /* LoopSeq 1 */
                for (signed char i_7 = 3; i_7 < 15; i_7 += 1) 
                {
                    arr_25 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((long long int) var_13));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6))) : (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
                }
            }
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
            {
                arr_28 [i_8] [i_8] = ((/* implicit */int) ((unsigned long long int) var_1));
                arr_29 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2 - 2] [i_2] [i_2] [i_2 + 4] [i_2 + 3] [i_2 + 4])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767)))));
                arr_30 [i_8] = arr_4 [i_0];
                arr_31 [13LL] [i_2] [i_8] [i_8] = var_13;
                arr_32 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_2 + 4] [i_2] [i_8]))));
            }
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_26 [i_0] [i_0]))));
            arr_33 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1243245803)) ? (((((/* implicit */_Bool) arr_6 [(unsigned short)11])) ? (((/* implicit */long long int) -1243245808)) : (var_3))) : (((((/* implicit */_Bool) var_6)) ? (-2037829883630470451LL) : (var_18)))));
        }
        for (unsigned char i_9 = 3; i_9 < 12; i_9 += 2) /* same iter space */
        {
            arr_38 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9 - 2] [i_9 + 3] [i_9] [i_9] [i_9])))));
            var_27 = ((/* implicit */unsigned int) var_5);
            var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 500319289324608149LL)) && (((/* implicit */_Bool) var_17))));
            arr_39 [i_9] [(unsigned short)7] = (-(((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9 + 4]))))));
        }
        var_29 = ((/* implicit */unsigned short) var_10);
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_1))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) ^ (7LL)))));
        var_31 |= ((/* implicit */long long int) ((unsigned long long int) 1795643731));
    }
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) (signed char)79))))))));
    var_33 = ((/* implicit */unsigned short) (signed char)-25);
    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (var_13)))))) : (var_6))))));
    var_35 = ((/* implicit */long long int) var_17);
}
