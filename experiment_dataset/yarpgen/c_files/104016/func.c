/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104016
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
    var_18 = ((/* implicit */int) var_17);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << (((/* implicit */int) ((var_3) < (((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((var_17) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (var_5))))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (var_5))))))))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) | (var_5))) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))) << (((/* implicit */int) var_15))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_9))))) < (((((/* implicit */long long int) var_3)) / (var_11))))))));
            var_23 |= ((/* implicit */long long int) ((((/* implicit */int) var_10)) | (var_3)));
        }
        for (int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) | (((((((/* implicit */int) var_4)) + (2147483647))) << (((((var_16) + (1853294616))) - (12))))))) ^ (((/* implicit */int) ((2147483647) >= ((-2147483647 - 1)))))));
            arr_9 [i_2] [i_2] = ((var_5) > (var_17));
        }
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_20 [i_0] [i_3] [11LL] [11LL] = ((var_17) <= (((var_5) >> (((((/* implicit */int) var_10)) + (621))))));
                        arr_21 [i_0] [i_3] [i_4] [16ULL] = ((/* implicit */short) var_11);
                        var_25 = ((/* implicit */_Bool) var_3);
                        arr_22 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_11);
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_8))));
            var_27 |= ((/* implicit */unsigned long long int) var_9);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_0))));
                        var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_16)))) || (((var_2) && (((/* implicit */_Bool) var_5))))));
                        var_30 = ((/* implicit */short) ((var_12) ^ (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((/* implicit */int) var_13)))))));
                    }
                } 
            } 
            var_31 += ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_10)))))));
        }
        for (long long int i_8 = 1; i_8 < 17; i_8 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_6))))))))) == (var_17))))));
            arr_31 [i_0] [8LL] [i_0] &= ((((/* implicit */int) ((((((var_1) + (2147483647))) << (((/* implicit */int) var_6)))) == (((/* implicit */int) var_14))))) >> (((((var_17) ^ (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (-959648238)))))) - (469783367231236438LL))));
            var_33 = ((((959648246) << (((18446744073709551615ULL) - (18446744073709551615ULL))))) | (((/* implicit */int) (short)-24896)));
        }
        arr_32 [i_0] [5LL] = ((/* implicit */int) var_15);
    }
    for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        var_34 &= var_11;
        var_35 = ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 6366580707567856329LL)) * (2305841909702066176ULL)));
                var_37 = ((/* implicit */long long int) var_1);
                var_38 = ((/* implicit */short) ((((((var_3) + (2147483647))) << (((/* implicit */int) ((959648237) <= (((/* implicit */int) (_Bool)0))))))) >= (((((/* implicit */int) var_15)) << (((((((var_1) + (2147483647))) >> (((/* implicit */int) var_14)))) - (210519641)))))));
                var_39 = ((/* implicit */_Bool) var_17);
            }
            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
            var_41 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_6))));
            var_42 = ((/* implicit */long long int) ((var_15) && (((((((/* implicit */int) var_7)) - (((/* implicit */int) var_2)))) >= (var_1)))));
        }
        for (short i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            var_43 = ((/* implicit */long long int) ((var_2) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_5))))));
            var_44 = var_14;
        }
        var_45 = var_8;
    }
}
