/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131043
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            arr_4 [i_0] [i_1 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 1477744547))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18LL)))) : (max((arr_2 [i_0] [i_1 - 1]), (arr_2 [i_0] [i_1 - 1])))));
            var_12 = ((/* implicit */long long int) (short)2032);
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (short)-22146)) : (((/* implicit */int) (signed char)18))));
            var_13 = var_2;
            var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) -8483270264048557709LL)) ? (8483270264048557735LL) : (var_5))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (-1LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1855752116)) != (-2437201348046492601LL))))) : (min((34359738367LL), (((/* implicit */long long int) (signed char)25)))));
        }
        var_15 &= ((((/* implicit */_Bool) -1578514738)) ? (var_5) : (arr_2 [(short)2] [(short)2]));
    }
    for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((max((((long long int) var_9)), (((((/* implicit */_Bool) 8483270264048557711LL)) ? (3622283003452094476LL) : (-8483270264048557715LL))))) != (max((min((((/* implicit */long long int) 268435455)), (2437201348046492607LL))), (min((((/* implicit */long long int) var_3)), (var_10)))))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (int i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                {
                    var_16 -= ((/* implicit */long long int) (short)8749);
                    var_17 = ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) -268435456)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-25))))) <= (min((((/* implicit */long long int) (signed char)65)), (var_2))))) ? (((((/* implicit */long long int) -564816038)) / (arr_11 [i_3]))) : (var_5)));
                    /* LoopSeq 3 */
                    for (int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (max((((/* implicit */long long int) arr_9 [i_5])), (max((((/* implicit */long long int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (7662881345753380200LL)))))));
                        arr_19 [i_3] [i_4] = ((/* implicit */int) (!(((arr_14 [i_3] [i_3 + 3] [i_4] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -9)) < (-8483270264048557710LL)))))))));
                        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) -2437201348046492600LL)) ? (32736) : (((/* implicit */int) (signed char)109)))), (((/* implicit */int) (short)-17674))));
                        var_20 = ((/* implicit */signed char) ((var_0) <= (-1888990401)));
                        arr_20 [i_5] [i_3] [i_4 - 1] [i_3] [i_3] [i_2] = ((/* implicit */int) var_10);
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((signed char) arr_7 [i_3 + 3] [i_3 + 3])))));
                        arr_23 [(signed char)2] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-23)) ? ((-(8483270264048557727LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)4))))));
                        var_22 ^= ((/* implicit */short) (+(arr_17 [i_2 + 1] [(signed char)1] [i_2 + 1] [i_3 - 1] [i_6])));
                        var_23 &= ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)110)) ? (8483270264048557742LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))))));
                        var_24 = ((/* implicit */short) -9223372036854775791LL);
                    }
                    for (short i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        arr_26 [i_3] [14LL] [i_3] [i_3] = ((/* implicit */int) min((max((((/* implicit */long long int) (signed char)12)), (max((1451459859951075347LL), (6213273245701536496LL))))), (((/* implicit */long long int) var_1))));
                        var_25 = ((/* implicit */int) (-(min((arr_14 [i_3] [i_4 - 1] [i_3 + 2] [i_3]), (arr_14 [i_3] [(short)12] [i_4 - 2] [(short)12])))));
                    }
                }
            } 
        } 
    }
    for (short i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        var_26 = ((/* implicit */int) var_4);
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (long long int i_10 = 3; i_10 < 12; i_10 += 3) 
            {
                {
                    var_27 = ((/* implicit */signed char) (short)7460);
                    arr_35 [i_8] [i_9] [i_10] [i_10 - 1] = min((min((((((/* implicit */_Bool) (signed char)-1)) ? (-1152921504606846976LL) : (((/* implicit */long long int) 1741479197)))), (((/* implicit */long long int) var_0)))), (min((((((/* implicit */_Bool) arr_14 [(signed char)16] [i_10 + 1] [(signed char)16] [(signed char)16])) ? (-4474521634336519073LL) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((var_2) <= (-8483270264048557739LL)))))));
                    var_28 = ((/* implicit */signed char) var_6);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_11 = 4; i_11 < 12; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                for (signed char i_13 = 4; i_13 < 12; i_13 += 3) 
                {
                    {
                        arr_46 [5] [i_11] [i_13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 8483270264048557707LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13435))) : (-1LL))) < (var_5)));
                        arr_47 [i_11] [i_11] [i_12] [i_12] = ((/* implicit */short) (-(max((((/* implicit */long long int) arr_22 [i_13 - 2] [i_13 - 4] [i_13 - 2] [i_13 - 4])), (arr_14 [i_11] [i_13 - 4] [i_13 - 1] [i_13 - 4])))));
                        arr_48 [i_11] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [(signed char)11] [i_11 - 1] [i_11 - 2])) && (((/* implicit */_Bool) arr_34 [i_11] [i_11 - 1] [i_11 + 1])))))));
                        var_29 += max((((/* implicit */long long int) (+(((/* implicit */int) ((arr_36 [i_8 + 1]) <= (((/* implicit */long long int) 935843925)))))))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-13440)) : (((/* implicit */int) arr_9 [(short)5]))))) : (-8812395271944193097LL))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (signed char)124))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
        {
            arr_51 [8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 + 1])), (8483270264048557745LL)))) ? (((((/* implicit */_Bool) arr_22 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1])) ? (-6213273245701536507LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))))));
            /* LoopNest 2 */
            for (signed char i_15 = 3; i_15 < 11; i_15 += 3) 
            {
                for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    {
                        arr_57 [i_15] [i_15] [i_15] [(signed char)9] [i_8] = ((/* implicit */short) min((((/* implicit */long long int) arr_21 [i_8] [6] [4] [i_8])), (6213273245701536520LL)));
                        arr_58 [i_8 + 1] [(signed char)9] [(signed char)9] [i_15] [(signed char)9] [i_16] = ((/* implicit */short) var_5);
                    }
                } 
            } 
        }
        for (signed char i_17 = 0; i_17 < 13; i_17 += 3) /* same iter space */
        {
            arr_61 [i_17] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18))))) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5808)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) : ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) (short)-32760)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                arr_64 [i_17] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) (short)(-32767 - 1)))));
                var_31 &= var_9;
            }
        }
    }
    var_32 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 1100481841)) ? (131031699) : (((/* implicit */int) (short)-7471)))), ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)115)) : (var_8)))))));
}
