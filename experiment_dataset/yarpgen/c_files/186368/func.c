/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186368
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) var_17);
            var_21 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (((((/* implicit */_Bool) (signed char)-1)) ? (-6039525090663811510LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_6))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 4; i_3 < 19; i_3 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11))) : (((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-61)) && (((/* implicit */_Bool) (short)12632))));
                var_25 = ((/* implicit */unsigned int) ((int) ((var_19) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))));
                var_26 = ((((/* implicit */int) (signed char)-47)) & (((/* implicit */int) (signed char)47)));
            }
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                arr_13 [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) 6242534370073800168LL))) + (2147483647))) >> (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_1)) : (var_19))) - (18446744072478373265ULL)))));
                var_27 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_5))))));
                var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                arr_14 [i_0] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            }
            for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                var_29 = ((((((/* implicit */int) (signed char)-67)) % (266338304))) <= (((/* implicit */int) var_9)));
                arr_18 [i_0] [i_2] [i_5] [i_5] = ((int) ((((/* implicit */_Bool) var_5)) || (var_9)));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((4294967295U) - (4294967282U)))));
                arr_19 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_13)))));
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_22 [i_5] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (12778797728374549410ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25474)))))));
                    var_31 ^= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_9)))));
                }
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) 1239295008481127470LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) -358730853)))) >> ((((~(var_15))) - (3047105971U)))));
                        var_33 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0)))))) <= (((((/* implicit */_Bool) var_18)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                        var_34 = ((/* implicit */_Bool) var_5);
                    }
                    var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (var_19))))) >= (((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
                    arr_28 [i_5] [i_7] = ((var_2) & (var_2));
                    arr_29 [i_7 + 1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) - (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) var_17))));
                }
                for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    arr_34 [i_0] [i_2] [i_5] = ((/* implicit */unsigned int) ((((int) var_4)) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) + (73)))));
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                }
            }
            var_37 = ((/* implicit */unsigned int) ((int) var_8));
        }
        var_38 = ((unsigned long long int) var_5);
        arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_17)));
    }
    var_39 ^= ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((var_19) == (((/* implicit */unsigned long long int) var_1)))) ? (((/* implicit */int) var_13)) : (max((var_1), (((/* implicit */int) var_14))))))));
}
