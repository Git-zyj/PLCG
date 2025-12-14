/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173567
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_8))))))) ? (((/* implicit */int) (short)32373)) : (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16527))) : (-9223372036854775796LL))), (arr_0 [i_0 + 3]))), (min((((/* implicit */long long int) var_4)), (arr_0 [(short)11])))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_6))))) ^ (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))));
                var_16 *= ((/* implicit */signed char) -9223372036854775803LL);
                arr_7 [i_0] = ((/* implicit */_Bool) (unsigned short)43114);
                arr_8 [12] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)65535);
            }
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [(unsigned short)23]))))) - ((+(((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_2 [i_0])))))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_11 [i_0] [i_0 + 1] [i_1] [i_0] = ((unsigned char) max((arr_9 [i_0 - 1] [i_0 + 3] [i_0 + 4]), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
                var_18 = ((/* implicit */signed char) (-(max((((/* implicit */long long int) (+(((/* implicit */int) var_11))))), (min((-540344161157303190LL), (((/* implicit */long long int) var_2))))))));
                var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
            }
        }
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned char) max((max(((unsigned short)7), (((/* implicit */unsigned short) min(((short)-16528), (var_9)))))), (((/* implicit */unsigned short) (short)-23040))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_4])))) - (((/* implicit */int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
            var_22 += ((/* implicit */long long int) arr_1 [(short)18]);
        }
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
        {
            arr_18 [(unsigned char)11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)122), (((/* implicit */unsigned char) (_Bool)0))))) >> (((((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 1] [(short)7] [i_0 + 1])) >> (((((/* implicit */int) var_5)) - (41)))))));
            var_23 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) (unsigned char)9)))))))), ((~(((/* implicit */int) ((short) arr_13 [i_0 + 1])))))));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 2; i_6 < 24; i_6 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) (signed char)-103);
                arr_23 [i_5] [i_0] [(unsigned char)24] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2280446531173422174LL)) ? ((~(((/* implicit */int) (unsigned char)7)))) : (min((var_4), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) && (((/* implicit */_Bool) (short)-1397)))))))));
            }
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0] [i_0 + 3] [(short)10])) ? (((/* implicit */int) (short)-469)) : (((/* implicit */int) var_7))));
                var_26 = ((/* implicit */short) arr_3 [i_0] [i_0]);
                arr_28 [i_0] [i_5] [i_7] = ((/* implicit */signed char) max((((long long int) ((((/* implicit */int) (unsigned char)38)) >= (((/* implicit */int) (signed char)-82))))), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_27 [i_0 + 4] [i_0 + 4])))))))));
                arr_29 [i_0] [i_5] [i_7] = (!(((((/* implicit */_Bool) min((arr_15 [i_0 + 2] [(unsigned char)11] [i_0]), (((/* implicit */short) var_13))))) || (((/* implicit */_Bool) (short)3968)))));
            }
        }
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_17 [i_0 + 2])))), (((/* implicit */int) ((unsigned char) var_0))))))));
    }
    var_28 = ((/* implicit */_Bool) max((var_3), (((/* implicit */int) ((((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_8))))) == (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)63)))))))));
}
