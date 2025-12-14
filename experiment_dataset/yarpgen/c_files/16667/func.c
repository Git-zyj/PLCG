/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16667
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((long long int) ((((/* implicit */int) var_5)) ^ (var_11)))))))));
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (((((/* implicit */int) min((var_1), (var_2)))) * (((/* implicit */int) ((unsigned char) (_Bool)0)))))));
    var_18 &= ((/* implicit */unsigned short) (short)(-32767 - 1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 &= ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32745)))) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
            var_21 &= arr_2 [i_0];
            /* LoopNest 2 */
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (short)32767))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_6 [i_2] [i_2] [i_2 + 2]) : (arr_6 [i_2] [i_2] [i_2 - 3])));
                        var_24 = ((/* implicit */unsigned short) var_10);
                        var_25 *= ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)3)) != (((/* implicit */int) arr_9 [(signed char)9] [0ULL] [i_2] [i_3]))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) ((int) arr_3 [i_1] [i_0]));
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (long long int i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    {
                        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)99)) && ((_Bool)1))) ? (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)24)))) : (((/* implicit */int) (_Bool)1))));
                        arr_18 [i_0] [i_0] [i_5] [i_5] [i_6 - 1] [i_6 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >> (((((unsigned long long int) arr_10 [i_0] [i_0])) - (46653ULL)))));
                        arr_19 [i_0] [i_4] [i_4] [i_5] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [16U] [i_6 + 1] [16U])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_14 [(unsigned short)7] [i_6 + 2] [i_5]))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_5] [i_5] [i_5]))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) var_9))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) var_6);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        {
                            arr_29 [i_4] = ((/* implicit */_Bool) (signed char)-96);
                            var_30 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (signed char)-7)))) - (((/* implicit */int) arr_20 [i_7]))));
                            arr_30 [i_0] [i_0] [i_7] [i_8] [i_9] = arr_25 [i_0] [i_0] [10U] [i_0] [i_8] [i_0];
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) ((arr_15 [i_4] [i_4]) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-32744)))))));
        }
    }
}
