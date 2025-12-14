/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11914
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
    var_14 += ((/* implicit */signed char) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */short) (unsigned char)172)), (var_10)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] &= ((/* implicit */unsigned short) var_1);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                arr_12 [i_0] [i_2] [i_2] = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (8490427915040844483LL) : (((/* implicit */long long int) var_8))))))));
                var_15 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) ((short) var_0)))))) % (max((((/* implicit */long long int) (unsigned char)191)), (732277665761750530LL)))));
                arr_13 [i_0] [i_0] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_1]) % (arr_5 [i_0] [i_1] [i_2])))) ? (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((2233302809559415082LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1])))))));
            }
        }
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            arr_16 [i_0] [i_0 + 1] = ((((((((/* implicit */long long int) var_8)) % (arr_14 [i_0 - 1] [i_0 - 1]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_3] [i_0 + 1])) : (((/* implicit */int) (unsigned char)181))))))) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3]))));
            var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) 2028470033)) ? (((/* implicit */int) (unsigned short)41838)) : (((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 3; i_5 < 16; i_5 += 3) 
            {
                var_18 -= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_11 [i_5 - 1] [i_5])) % (((/* implicit */int) arr_11 [i_5 + 1] [i_5])))) % (((/* implicit */int) arr_8 [i_0] [i_4]))));
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_17 [i_5 - 3]) % (((/* implicit */unsigned int) arr_2 [i_4 - 1]))))) % (((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18968)) ? (max((((/* implicit */int) (_Bool)1)), (491536362))) : ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (_Bool)1))))))));
                arr_28 [(unsigned short)16] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (unsigned short)60141))))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    var_21 = ((/* implicit */long long int) ((unsigned int) (-((+(arr_0 [i_0]))))));
                    var_22 = ((/* implicit */unsigned short) (unsigned char)181);
                }
                /* vectorizable */
                for (short i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    arr_36 [i_0 + 1] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_2 [i_4 - 1]) : (((/* implicit */int) arr_35 [i_8 + 1] [i_4] [i_6]))));
                    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) % (var_7)));
                    var_24 = ((/* implicit */unsigned short) ((var_1) % (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_6])))))));
                    arr_37 [i_0] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23697)) ? (((/* implicit */unsigned long long int) var_12)) : (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                arr_38 [i_0] [i_0] [16LL] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) % (8312179047563933754ULL)));
                var_25 = (~(((unsigned long long int) arr_6 [i_0] [i_4])));
            }
            var_26 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (min((((/* implicit */unsigned long long int) (+(var_5)))), (var_9)))));
            arr_39 [i_0] [i_0] = ((/* implicit */long long int) var_10);
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_2 [i_0]))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_42 [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_9])) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_30 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_28 = ((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) % (((/* implicit */int) var_11))))));
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1]))))) ? (((var_7) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1]))))))))));
        }
    }
    for (short i_10 = 3; i_10 < 22; i_10 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) arr_44 [i_10]);
        var_31 ^= ((/* implicit */short) (_Bool)0);
        var_32 -= arr_44 [i_10];
    }
}
