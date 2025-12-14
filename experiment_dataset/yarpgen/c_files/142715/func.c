/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142715
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])) ? (((/* implicit */long long int) 2147483643)) : (arr_4 [i_0] [i_0])))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (var_13)));
                        var_18 *= ((/* implicit */_Bool) (short)29848);
                    }
                } 
            } 
            var_19 *= ((/* implicit */unsigned int) -2147483644);
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_14 [10U] [(short)6] [i_4] [i_0] = ((/* implicit */int) var_0);
                        arr_15 [i_0] [13U] [i_4] [i_0] [i_0] [13U] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_1] [i_5]);
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) (unsigned short)33094);
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_21 ^= ((/* implicit */int) var_5);
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_6])) ? (var_14) : (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_6] [i_0 - 1] [i_0 - 1]))));
            arr_20 [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) arr_16 [i_0 + 2] [i_0 + 2]))));
        }
        arr_21 [(unsigned short)20] |= ((/* implicit */unsigned short) 3636640757U);
        /* LoopSeq 1 */
        for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (short i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */int) arr_29 [i_0] [i_7 + 1] [i_8 + 1] [i_7] [i_0])), (((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) arr_17 [i_0] [i_0] [i_8]))))) ? (((((/* implicit */_Bool) 2073166464)) ? (((/* implicit */int) arr_18 [i_7] [i_7])) : (var_8))) : ((-(var_7)))))));
                        var_24 += ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)224)), (2147483641)))) / ((((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
            var_25 = arr_13 [i_7 - 1] [i_7] [i_7] [i_0 - 2];
        }
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            var_26 = ((/* implicit */long long int) var_12);
            var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (-2147483637)))) : (min((var_14), (((/* implicit */unsigned long long int) arr_9 [(signed char)20] [i_10] [i_10] [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (+(2147483645)))) ? (min((0U), (((/* implicit */unsigned int) -2147483647)))) : (((/* implicit */unsigned int) -2147483635)))) : ((+((~(625258088U)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                            var_29 ^= ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_10] [i_10] [i_13])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((13711517877428614935ULL), (((/* implicit */unsigned long long int) ((unsigned char) 3669709207U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(var_13))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0]))))))) : (((arr_28 [i_0 + 1]) ? (((/* implicit */unsigned int) (+((-2147483647 - 1))))) : (625258074U)))));
            var_31 = ((/* implicit */int) min((var_31), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-11552)))))))));
            var_32 = ((/* implicit */unsigned int) ((arr_19 [i_0 + 1] [i_0]) >= (arr_19 [i_0 - 3] [i_0])));
            var_33 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_14), (arr_33 [i_0] [i_14] [i_14]))), (((/* implicit */unsigned long long int) (signed char)15))))) ? (min((((((/* implicit */_Bool) (short)-11546)) ? (arr_12 [i_14] [i_14] [i_0] [i_0] [i_14] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_14]))))), (((/* implicit */long long int) arr_23 [i_0 - 1] [i_0 - 1])))) : (var_10)));
        }
    }
    /* vectorizable */
    for (short i_15 = 1; i_15 < 13; i_15 += 2) 
    {
        arr_46 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483644)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_15])))))) ? (var_10) : (((long long int) 0ULL))));
        arr_47 [i_15] = ((/* implicit */short) ((arr_39 [i_15 - 1] [i_15] [(_Bool)1] [i_15] [i_15 - 1] [i_15] [i_15]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -2147483644)) <= (arr_16 [i_15 + 2] [i_15]))))) : (var_9)));
    }
    var_34 = ((/* implicit */signed char) ((unsigned int) var_10));
}
