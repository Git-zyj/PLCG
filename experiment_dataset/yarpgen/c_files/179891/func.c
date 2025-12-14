/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179891
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
    var_16 = (~(max((((var_11) / (((/* implicit */long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (short)511))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */int) (short)-12)) < (((/* implicit */int) ((((((/* implicit */int) (unsigned char)72)) << (((var_4) - (1612405063149469113ULL))))) >= (((((/* implicit */int) var_6)) << (((((var_14) + (5101648269754265382LL))) - (14LL))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) < (arr_1 [i_0])))) : (((/* implicit */int) (unsigned char)196))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) 4231680478923327218ULL);
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_20 = ((/* implicit */short) (-(min((12264482764644961470ULL), (var_15)))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_12))));
                arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((144115188075855871ULL), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_11)))) : (min((((/* implicit */unsigned long long int) (short)-501)), (12264482764644961481ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1 - 1] [i_1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_1]))))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_1])), (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_12)), (var_5))))) : (((((/* implicit */_Bool) (short)-8192)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [(unsigned char)2])))))))));
                /* LoopSeq 2 */
                for (long long int i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) 6182261309064590130ULL))))))));
                    var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_8 [i_1] [i_1] [(short)12])))) ? (12264482764644961470ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_2), ((unsigned char)178)))), (3473699807289374293LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3319357263157644211ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)500))) & (9831685271554753365ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 3])))))));
                }
                for (long long int i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    var_24 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_13 [i_1 - 3] [i_4 - 3])) && (((/* implicit */_Bool) arr_13 [(unsigned char)9] [i_4 + 1])))), (((((/* implicit */_Bool) arr_13 [i_1 + 4] [i_4 + 1])) && (((/* implicit */_Bool) 7618501648745517254ULL))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((unsigned char) (!(((/* implicit */_Bool) min(((unsigned char)25), ((unsigned char)229)))))))));
                    arr_15 [i_1] [i_1] [(unsigned char)8] [i_1] &= ((((/* implicit */_Bool) 14215063594786224406ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)102)) << (((((/* implicit */int) (unsigned char)234)) - (224)))))) ? (((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (18014398509481983LL)))))) : (min((((/* implicit */unsigned long long int) var_10)), (max((14215063594786224383ULL), (688580699696881208ULL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_26 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_5])) - (((/* implicit */int) (short)-521))));
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 18014398509481972LL)) + (var_4)))) ? (11585325267313729491ULL) : (((/* implicit */unsigned long long int) 193975709517484885LL))));
                    }
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((unsigned char) ((unsigned char) min(((short)27857), ((short)28819)))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-28827)) ^ (((/* implicit */int) (short)-28838))))) ? (((/* implicit */int) min((var_7), ((short)6)))) : (((/* implicit */int) var_9)))));
                    var_29 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) 4611686018423193600ULL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)-522))))))), (var_8)));
                }
            }
        } 
    } 
}
