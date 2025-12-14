/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139668
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((short) (unsigned char)177));
        var_11 = ((((/* implicit */int) ((((/* implicit */_Bool) -407692413)) || (((((/* implicit */int) arr_2 [i_0])) <= (-1312033702)))))) >= (((((-2024599861) + (2147483647))) >> (((((/* implicit */int) (signed char)-28)) + (40))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) + (((/* implicit */int) (unsigned char)4))))) && (((/* implicit */_Bool) ((arr_1 [(_Bool)1] [i_0]) / (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((1090806138) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (arr_1 [i_0] [i_1])))) && (((/* implicit */_Bool) -120137397))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (signed char)-72)) | (var_5))));
        }
        for (int i_2 = 1; i_2 < 20; i_2 += 2) /* same iter space */
        {
            var_12 = ((/* implicit */int) var_8);
            arr_11 [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0]))))) * (var_10)))));
            var_13 = var_5;
        }
        for (int i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
        {
            arr_14 [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0] [i_3] [i_3]) != (1312033702))))) | (((arr_13 [i_0] [i_0] [i_3]) << (((2147483647) - (2147483638))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
            {
                var_14 = ((((/* implicit */int) (unsigned char)16)) ^ (((/* implicit */int) ((((/* implicit */_Bool) -8494984361790200335LL)) || (((/* implicit */_Bool) var_6))))));
                arr_19 [(_Bool)1] [i_0] [i_4] &= ((((/* implicit */unsigned int) -238851006)) > (var_0));
            }
            for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
            {
                arr_24 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_4)) >> (((/* implicit */int) ((_Bool) ((var_9) | (((/* implicit */int) (_Bool)1))))))));
                arr_25 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_3])) - (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_3] [i_5])) > (((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 1])))))));
                var_15 = ((/* implicit */_Bool) ((((arr_1 [i_3 - 1] [i_3 + 1]) / (arr_1 [i_3 + 1] [i_3 + 2]))) + (arr_1 [i_3 + 2] [i_3 + 1])));
            }
            /* LoopSeq 2 */
            for (int i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                var_16 = ((((var_8) + (9223372036854775807LL))) << (((((((arr_5 [i_3 + 1]) + (((/* implicit */long long int) var_5)))) + (1964079317646358113LL))) - (32LL))));
                var_17 = ((/* implicit */unsigned char) ((_Bool) -67659757));
            }
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) arr_30 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_35 [i_0] [i_8] [i_0] |= ((/* implicit */short) ((((-5196919959591140527LL) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) | (((/* implicit */long long int) ((var_5) << (((((/* implicit */int) (unsigned char)160)) - (160))))))));
                    var_19 |= ((arr_27 [i_8]) - (((-1312033716) ^ (((/* implicit */int) (_Bool)1)))));
                }
            }
            var_20 ^= arr_22 [i_0];
            var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */int) ((((arr_10 [i_3] [i_0] [i_0]) / (var_10))) <= (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_3 + 1])))))))) + (-263834520)))));
        }
    }
    for (int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        arr_40 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((4294967295U) >= (((/* implicit */unsigned int) var_6))))))) * (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_29 [i_9] [i_9] [i_9] [i_9])) == (var_2))))) & (var_8)))));
        arr_41 [i_9] = ((/* implicit */_Bool) ((-238850978) % (((arr_39 [i_9] [i_9]) / (arr_28 [i_9])))));
        arr_42 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((_Bool) arr_12 [i_9] [i_9]))) | (((-975555101) - (238851005))))) > (((/* implicit */int) ((((int) 2147483647)) == (((/* implicit */int) ((((/* implicit */int) arr_6 [i_9] [i_9])) != (((/* implicit */int) var_4))))))))));
    }
    for (int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
    {
        var_22 = ((((/* implicit */int) ((((/* implicit */unsigned int) var_9)) > (arr_37 [i_10] [i_10])))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((int) (signed char)13))) >= (3180761151U)))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((var_1) >> (((((((/* implicit */int) ((signed char) arr_1 [i_10] [i_10]))) + (2147483647))) >> (((((var_2) | (((/* implicit */long long int) var_5)))) + (8717003637440020709LL))))))))));
        var_24 = ((/* implicit */int) ((short) ((_Bool) (signed char)127)));
        arr_45 [i_10] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_10]))) - (arr_5 [i_10]))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
    {
        arr_49 [(signed char)8] |= ((((/* implicit */int) arr_31 [i_11] [i_11] [(_Bool)1])) != (arr_15 [i_11] [i_11] [i_11]));
        var_25 = ((/* implicit */int) min((var_25), (var_6)));
    }
    var_26 = ((/* implicit */_Bool) (signed char)12);
    var_27 |= ((/* implicit */int) ((4U) + (((/* implicit */unsigned int) -309092734))));
}
