/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178661
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
    var_13 = ((/* implicit */_Bool) ((signed char) 0ULL));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            arr_13 [i_0] = ((((/* implicit */_Bool) ((signed char) (~(arr_5 [i_3]))))) ? ((+(((long long int) arr_7 [i_0 - 2] [i_0] [i_3] [i_4])))) : (((long long int) (-(((/* implicit */int) arr_7 [10ULL] [i_0] [i_0] [(signed char)4]))))));
                            var_14 |= ((/* implicit */_Bool) ((signed char) ((signed char) max((((/* implicit */long long int) arr_7 [16ULL] [4LL] [4LL] [(_Bool)1])), (arr_3 [i_0])))));
                        }
                        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_1]))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (min((((_Bool) min((arr_10 [1ULL] [(_Bool)1] [i_1] [i_1] [i_0 - 2]), (arr_5 [(signed char)9])))), (max((((_Bool) arr_1 [i_0])), ((!(((/* implicit */_Bool) arr_4 [(signed char)14] [i_2] [(signed char)14]))))))))));
                    }
                } 
            } 
            var_17 = ((_Bool) ((_Bool) (~(arr_12 [i_0 + 1] [i_1] [i_0]))));
            var_18 *= ((_Bool) ((unsigned long long int) ((arr_8 [1ULL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [2LL] [i_1] [i_0] [i_0] [2LL] [i_0]))) : (arr_10 [(signed char)2] [(signed char)8] [i_0 + 1] [i_0 - 2] [(signed char)2]))));
            var_19 = ((/* implicit */long long int) arr_1 [6ULL]);
            var_20 = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_1]));
        }
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_16 [7ULL] [7ULL] [i_0] = arr_11 [(_Bool)1] [i_0] [i_5] [i_5] [i_0] [i_0] [i_0];
            var_21 = ((/* implicit */long long int) arr_15 [i_0 - 1] [(_Bool)1]);
        }
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_4 [(_Bool)1] [i_0] [(_Bool)1]))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 *= ((/* implicit */_Bool) ((long long int) arr_7 [i_7] [(_Bool)1] [(_Bool)1] [i_0 - 1]));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((_Bool) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(_Bool)1] [(signed char)10]))) : (arr_12 [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned long long int) min((((_Bool) ((long long int) arr_1 [i_0]))), (min(((!(((/* implicit */_Bool) (signed char)-45)))), (arr_6 [i_0])))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) arr_25 [i_8]);
            var_26 &= ((/* implicit */signed char) (-(((/* implicit */int) arr_26 [(_Bool)1] [(_Bool)1]))));
            /* LoopSeq 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_27 = ((/* implicit */signed char) (-(((long long int) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) arr_29 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_8])))))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8])) ? (((long long int) ((unsigned long long int) arr_29 [i_8] [i_9] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_10])))))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (((_Bool) ((long long int) min((arr_27 [i_8] [8LL]), (arr_26 [i_8] [i_8])))))));
                var_30 = min((arr_24 [i_8]), (((_Bool) ((long long int) arr_28 [i_8] [i_8] [i_8] [(_Bool)1]))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    arr_33 [i_11] [i_11] [i_9] [i_9] [i_8] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((signed char) arr_25 [i_11]))) ? (((/* implicit */int) arr_26 [i_11] [i_9])) : (((/* implicit */int) max((arr_24 [i_9]), (arr_24 [i_9])))))), (((/* implicit */int) ((signed char) ((_Bool) arr_25 [i_10]))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((arr_24 [i_8]) ? (((/* implicit */int) arr_26 [0LL] [6ULL])) : (((/* implicit */int) arr_32 [i_10] [i_8] [i_8] [i_8]))))))) ? (((/* implicit */int) arr_32 [2ULL] [i_8] [2ULL] [(_Bool)1])) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 1ULL))))))));
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 1; i_14 < 16; i_14 += 3) 
                    {
                        {
                            arr_42 [16LL] [i_9] [i_9] [i_9] [i_13] [18ULL] |= arr_32 [i_8] [i_9] [i_12] [i_13];
                            var_32 -= ((/* implicit */_Bool) ((long long int) max((arr_28 [i_8] [i_8] [i_9] [i_14]), (((_Bool) arr_37 [i_8] [i_8] [i_8] [i_8])))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) 8839998906124981402LL)));
                arr_43 [i_8] [(signed char)14] [i_8] [i_8] = ((/* implicit */signed char) max((((unsigned long long int) (-(arr_30 [i_8])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) arr_36 [i_12] [i_9] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_26 [i_12] [i_8]))))) ? ((-(21ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_32 [i_8] [i_8] [i_12] [i_12]))))))));
                arr_44 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (-(arr_37 [i_8] [i_9] [i_8] [i_8])))) ? (((/* implicit */int) ((_Bool) arr_40 [i_8] [i_8] [15LL] [0LL] [i_8]))) : ((-(((/* implicit */int) arr_26 [i_8] [i_9])))))));
            }
        }
        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
        {
            var_34 = ((_Bool) ((_Bool) ((long long int) arr_25 [i_8])));
            var_35 += ((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_15]));
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((signed char) arr_28 [i_15] [i_15] [i_15] [i_15])))))))));
        }
        arr_47 [i_8] [i_8] = ((/* implicit */long long int) ((((_Bool) ((arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_29 [i_8] [i_8] [i_8]))))) ? ((-(((arr_29 [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_41 [i_8] [(_Bool)1] [(_Bool)1] [i_8] [i_8] [i_8])))))) : (((/* implicit */int) ((_Bool) ((_Bool) arr_35 [i_8] [i_8]))))));
        var_37 = ((/* implicit */unsigned long long int) max((var_37), ((-(((unsigned long long int) arr_45 [4ULL] [i_8] [i_8]))))));
        /* LoopSeq 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_38 |= ((/* implicit */signed char) ((_Bool) min((4ULL), (0ULL))));
            arr_50 [i_16] [i_8] [i_16] = ((/* implicit */signed char) ((_Bool) max((((unsigned long long int) arr_37 [i_16] [i_8] [i_8] [i_8])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [(_Bool)1] [i_8] [i_16] [i_16]))))))));
            var_39 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))));
            arr_51 [(_Bool)1] [i_8] = max((18446744073709551583ULL), (18446744073709551595ULL));
            var_40 = (!(((/* implicit */_Bool) 5902320601460516609ULL)));
        }
        for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            var_41 = ((/* implicit */signed char) ((_Bool) (+(((arr_41 [i_8] [i_8] [i_8] [i_17] [(_Bool)1] [i_17]) ? (((/* implicit */int) arr_41 [15LL] [i_8] [i_8] [(_Bool)1] [i_8] [i_8])) : (((/* implicit */int) arr_39 [i_8] [i_8] [i_17] [i_17] [i_17])))))));
            var_42 += ((/* implicit */_Bool) ((long long int) ((_Bool) ((long long int) arr_29 [i_17] [(signed char)16] [i_17]))));
            var_43 = ((/* implicit */long long int) ((unsigned long long int) arr_53 [0LL] [i_17]));
        }
        for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            arr_59 [i_8] [(_Bool)0] = arr_36 [i_18] [i_18] [i_18] [i_18] [i_8];
            var_44 = ((/* implicit */long long int) ((_Bool) arr_30 [i_18]));
        }
    }
    /* LoopSeq 2 */
    for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
    {
        arr_62 [i_19] [i_19] |= ((/* implicit */long long int) arr_25 [i_19]);
        var_45 = ((long long int) ((unsigned long long int) arr_25 [7ULL]));
    }
    for (long long int i_20 = 0; i_20 < 17; i_20 += 4) 
    {
        arr_66 [i_20] = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) ((_Bool) arr_34 [(_Bool)1] [i_20] [i_20] [i_20]))), (((((/* implicit */_Bool) arr_58 [i_20] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))) : (arr_12 [17ULL] [i_20] [i_20]))))));
        var_46 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (~(arr_45 [i_20] [i_20] [i_20])))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_32 [i_20] [i_20] [i_20] [12LL])), (arr_25 [i_20])))) : (((/* implicit */int) ((signed char) arr_55 [i_20] [i_20] [i_20]))))));
    }
}
