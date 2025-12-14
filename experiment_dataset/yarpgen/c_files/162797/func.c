/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162797
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
    var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_2)))));
    var_12 = var_10;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_1 [i_0] [i_0])));
        arr_2 [(_Bool)1] = ((((/* implicit */int) (signed char)0)) * (var_9));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_14 = ((/* implicit */int) ((long long int) 63LL));
                var_15 = ((/* implicit */_Bool) var_8);
                var_16 = ((/* implicit */long long int) (~(((int) arr_0 [i_0] [7]))));
            }
            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(49LL))))));
            var_18 = ((/* implicit */unsigned char) var_7);
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
        }
        for (int i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [9LL] [9LL])) ? (((/* implicit */long long int) 2180346361U)) : (9223372036854775789LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) 536805376)) >= (57LL)))) : (((/* implicit */int) var_6))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 4; i_4 < 7; i_4 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -9223372036854775790LL)) ? (-9223372036854775769LL) : (((/* implicit */long long int) 1571187082U)))) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1)))))));
                arr_14 [i_0] [i_0] = (~((-2147483647 - 1)));
            }
            for (unsigned long long int i_5 = 4; i_5 < 7; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -555633983932994333LL)) || (((((/* implicit */int) arr_19 [i_6] [i_0] [i_0] [i_0])) > (var_5))))))));
                    arr_20 [i_0] [i_3] [i_5] [i_6 - 1] [i_0] [7] = ((-9223372036854775785LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-55))));
                    var_22 *= ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (-142833489))) < (((((/* implicit */_Bool) 1187631141U)) ? (((/* implicit */int) arr_18 [(signed char)4] [(_Bool)1] [(signed char)4] [(signed char)4])) : (var_5)))));
                    arr_21 [i_0] [i_5] = ((/* implicit */int) arr_3 [i_5]);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775784LL)) ? (((9200420955895199080ULL) + (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3 - 2] [i_5] [i_5 - 3] [i_6 + 2])))));
                }
                arr_22 [i_5] [i_3] [i_5 - 4] [(_Bool)1] = ((/* implicit */signed char) ((long long int) 61LL));
                arr_23 [i_5] [1LL] [i_5] = ((/* implicit */unsigned long long int) ((var_7) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_0 [i_3] [i_3 - 3])))) : (((/* implicit */int) arr_6 [i_5] [i_0] [i_5] [i_5 + 1]))));
                arr_24 [i_5] = ((/* implicit */signed char) ((_Bool) arr_12 [i_0] [4LL] [i_3 - 2]));
            }
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((arr_11 [i_3 - 1] [i_3 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [8ULL] [6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            var_25 *= ((/* implicit */signed char) (+(arr_27 [i_0])));
            var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [3LL] [i_0] [i_0]))));
            arr_28 [i_0] [i_7] [i_0] = ((/* implicit */_Bool) var_1);
            var_27 *= ((/* implicit */unsigned long long int) ((4406137048533445990LL) << (((((((-1356868909809562736LL) / (17592051826688LL))) + (77151LL))) - (21LL)))));
        }
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_0))));
            arr_32 [i_0] [i_8] = ((/* implicit */_Bool) ((var_9) & (var_5)));
        }
    }
}
