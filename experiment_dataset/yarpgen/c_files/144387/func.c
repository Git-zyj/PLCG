/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144387
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7788822894927149743LL) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (arr_0 [i_0]) : (((var_9) ^ (arr_0 [i_0])))))) : (((var_0) % (((/* implicit */unsigned long long int) 7788822894927149721LL)))))))));
            var_13 = ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6144)) >> (((((/* implicit */int) arr_3 [i_0])) + (9955)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 2])) + (arr_2 [i_0] [i_1 + 2])))))) ? ((-(((((/* implicit */_Bool) 225396153244947329LL)) ? (arr_0 [i_1]) : (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)59388)) : (((/* implicit */int) var_1))))))));
        }
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_0 [(_Bool)1]))));
        arr_4 [6LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4894))) : (arr_1 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */short) arr_0 [i_2]);
        var_16 ^= ((/* implicit */unsigned char) (((-(-225396153244947354LL))) | (((((/* implicit */_Bool) arr_6 [i_2])) ? (var_10) : (arr_6 [i_2])))));
        /* LoopSeq 2 */
        for (short i_3 = 4; i_3 < 11; i_3 += 4) 
        {
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [(short)1] [i_2]))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                var_18 = ((/* implicit */short) max((var_18), (arr_8 [2ULL] [i_3])));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) / (arr_1 [i_3 - 3])))) ? (((/* implicit */long long int) 548993978U)) : (-4163556309028376706LL)));
            }
            arr_12 [i_2] [i_3 + 1] = ((/* implicit */short) arr_5 [i_2] [i_3]);
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-7802456975908997990LL) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 - 4] [i_3 - 2])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [10LL] [(signed char)10] [i_3 - 2]))) - (arr_0 [2LL])))) - ((+(arr_1 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_3])))));
            arr_13 [i_2] [i_2] [5ULL] = ((/* implicit */unsigned long long int) (((-(6869366599416333129LL))) * (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) * (((/* implicit */int) arr_3 [i_3]))))) ? (((((/* implicit */long long int) 8126464)) / (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (short)511)))))));
        }
        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)56)) + (((/* implicit */int) (((+(var_7))) == ((+(arr_2 [i_2] [i_2]))))))));
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                var_22 += ((/* implicit */signed char) arr_2 [i_2] [i_2]);
                arr_19 [i_6] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2])) ? ((+(((/* implicit */int) (unsigned short)65531)))) : (((((/* implicit */int) (unsigned char)246)) / (var_7)))))) ? (((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_11)) : (arr_17 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)504)) - (((/* implicit */int) (short)6219))))))) : (var_9));
                arr_20 [7LL] [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_16 [i_6 - 1]);
                var_23 &= ((/* implicit */signed char) ((((/* implicit */int) ((-763859865465994652LL) != (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2] [i_5])))))))) ^ (((((/* implicit */int) ((((/* implicit */_Bool) (short)-5194)) && (((/* implicit */_Bool) var_3))))) ^ (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 + 1] [i_2]))))))))));
                var_24 = ((/* implicit */unsigned char) var_0);
            }
            for (unsigned char i_7 = 4; i_7 < 11; i_7 += 3) 
            {
                arr_24 [i_7] [i_5] [i_7] = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)0))))));
                var_25 |= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            }
            var_26 += ((/* implicit */short) var_8);
        }
    }
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_8))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_8] [i_8]))))) ? (((((((/* implicit */unsigned long long int) var_7)) >= (var_0))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18996))) : (((((/* implicit */_Bool) 1LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8]))) : (arr_23 [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [(short)3] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [12LL]))) : (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) ((arr_16 [i_8]) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))))))));
        arr_28 [i_8] [i_8] = var_8;
    }
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_9))));
}
