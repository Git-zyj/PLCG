/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155608
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)100)) || (((/* implicit */_Bool) 16969211987131021918ULL))));
        var_12 *= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) * (((/* implicit */int) arr_1 [i_0 - 1]))));
        var_13 -= (((!(((/* implicit */_Bool) var_11)))) ? ((~(16969211987131021901ULL))) : (1477532086578529700ULL));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) 1477532086578529700ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23015))) : (1735545762U)));
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1]))));
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                arr_10 [i_0] [i_2] [i_2] [(signed char)4] = ((/* implicit */int) var_10);
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_9 [i_0 + 1]))));
                var_17 ^= ((/* implicit */unsigned short) (short)26713);
                var_18 ^= ((/* implicit */unsigned short) ((short) arr_7 [15LL] [i_0 + 1]));
                var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) * (arr_6 [i_0])));
            }
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
            {
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)689)) >= (((/* implicit */int) (signed char)(-127 - 1)))));
                var_21 = ((/* implicit */short) ((((/* implicit */int) ((329084991035499823ULL) > (0ULL)))) ^ ((-(((/* implicit */int) (_Bool)1))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)64863)) + (((/* implicit */int) (signed char)(-127 - 1)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) var_2);
                    var_24 = ((/* implicit */signed char) var_1);
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_2] [i_4] [i_5] = (-(((/* implicit */int) var_7)));
                        arr_21 [i_0] [i_0] [i_0 - 1] [10U] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_6 + 1] [i_6] [i_6])) ? (848458601U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_6 - 4] [i_6] [(_Bool)1])))));
                    }
                }
            }
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) arr_13 [(unsigned char)3] [i_0] [i_0 + 1] [i_0]);
                var_28 = (!(((/* implicit */_Bool) 2147483647)));
                arr_24 [i_0] [i_2] [i_7] = ((/* implicit */int) arr_3 [i_7]);
            }
            var_29 -= ((/* implicit */signed char) (unsigned short)64851);
            var_30 = ((/* implicit */_Bool) arr_11 [i_0]);
        }
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_31 -= ((/* implicit */signed char) var_9);
            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 848458590U))));
            arr_28 [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((arr_11 [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (short)32564)))));
            var_33 *= ((848458601U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
        }
        var_34 = ((/* implicit */short) arr_19 [i_0 + 1] [i_0 - 1] [i_0 + 2]);
    }
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (((((/* implicit */_Bool) var_5)) ? (min((3446508694U), (((/* implicit */unsigned int) var_5)))) : (min((((/* implicit */unsigned int) (signed char)-6)), (2065793608U)))))));
    var_36 = ((/* implicit */short) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_5)))) == (((/* implicit */int) var_7)))))));
    var_37 = (unsigned short)25;
    var_38 ^= ((/* implicit */int) min((((/* implicit */short) ((((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)10)))) == (((/* implicit */int) var_7))))), (var_4)));
}
