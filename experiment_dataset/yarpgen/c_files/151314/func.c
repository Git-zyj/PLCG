/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151314
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) arr_7 [i_0] [i_1] [4] [i_3]))));
                        var_12 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_5)))))), (min((min((var_10), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((770257416U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_3]))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_13 |= ((/* implicit */long long int) (short)-17485);
                            var_14 = ((/* implicit */int) (((-(((long long int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_1])))) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0])))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_9))));
                            var_16 = ((/* implicit */unsigned long long int) var_6);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_16 [(unsigned char)16] [i_0] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (short)29474)))));
            arr_17 [i_5] [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 11079767603831685361ULL)) || (((/* implicit */_Bool) arr_3 [i_5]))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)-26198))))));
                        var_18 = ((/* implicit */_Bool) ((short) arr_11 [i_8] [i_8] [i_8] [i_8 + 2] [18] [i_8]));
                        arr_28 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_7 [i_6 + 1] [i_7] [i_8 - 1] [i_8 + 2]))));
                    }
                    arr_29 [i_0] [i_0] [i_6] [(unsigned char)13] [i_6] [i_6] = arr_27 [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6];
                }
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) arr_6 [7U] [7U]);
                    var_20 = ((/* implicit */signed char) ((arr_30 [i_5] [i_9]) ^ (((unsigned int) ((((/* implicit */_Bool) 3586642139043883839LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])))))));
                    arr_32 [i_0] [i_5] [i_6 + 1] = ((/* implicit */long long int) min((((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_19 [i_6 + 2] [i_6 - 1] [i_6 + 2])))), (min((arr_8 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6 + 2]), (arr_8 [i_6 + 2] [i_6 + 1] [i_6 - 1] [i_6 - 1])))));
                }
                var_21 |= ((/* implicit */unsigned char) ((arr_21 [i_5]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)25662))) ^ (arr_21 [i_6]))))))))));
                arr_33 [18U] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-1545350810), (((/* implicit */int) var_1))))) ? (((max((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [10LL] [i_6 - 1])), (arr_18 [i_0] [i_5] [i_5]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39363))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17485)))));
            }
            arr_34 [(_Bool)1] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7491126128309798801LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64210))) : (-2882511629635104352LL)));
        }
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)4] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10)))) ? (((/* implicit */int) ((unsigned char) (short)-6864))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_10]))))))), (((((/* implicit */_Bool) arr_30 [i_0] [i_10])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17716))) < (arr_21 [i_10])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) -1294204382))));
            var_24 = ((unsigned char) arr_3 [i_10]);
            var_25 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_10] [i_0] [i_10])))) % (((/* implicit */int) min((arr_19 [i_10] [17] [17]), (((/* implicit */unsigned short) (_Bool)1)))))));
        }
        var_26 = ((/* implicit */short) var_0);
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (short i_12 = 1; i_12 < 18; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 17; i_14 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) arr_20 [i_11] [(signed char)7] [(signed char)7]);
                            var_28 = ((/* implicit */short) min((var_28), ((short)-17467)));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ ((-(((/* implicit */int) var_8))))))) ? (arr_39 [2ULL] [i_0]) : (arr_12 [i_0] [i_11] [i_11])));
        }
    }
    /* vectorizable */
    for (unsigned short i_15 = 1; i_15 < 17; i_15 += 4) 
    {
        arr_50 [i_15] = ((((/* implicit */unsigned long long int) 8756624193800771027LL)) - (arr_47 [i_15 - 1]));
        arr_51 [i_15] = ((/* implicit */unsigned char) -3586642139043883840LL);
        var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_15 + 1])) ? ((~(3586642139043883845LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned short)52367))))))));
    }
    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
    {
        var_31 &= ((/* implicit */long long int) arr_53 [i_16] [4LL]);
        arr_54 [i_16] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_53 [i_16] [i_16]))))));
        /* LoopNest 2 */
        for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
        {
            for (int i_18 = 1; i_18 < 21; i_18 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
                    {
                        var_32 *= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_57 [i_18 + 2] [i_18 + 2] [i_18 + 2] [i_18 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)29065))))));
                        var_33 = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((unsigned char)74), (((/* implicit */unsigned char) arr_56 [i_18 - 1] [i_18] [i_18 - 1])))))))), (arr_57 [i_16] [i_16] [i_18] [i_19]));
                    }
                    for (long long int i_20 = 0; i_20 < 24; i_20 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_21 = 3; i_21 < 22; i_21 += 2) 
                        {
                            arr_70 [i_18] [i_18] [i_16] [(unsigned short)16] [i_18 + 3] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_63 [i_16] [i_17] [i_18 + 2] [i_18 + 2] [i_20] [i_21])))), (((/* implicit */int) (unsigned char)55))));
                            var_34 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)223)))) * (((((/* implicit */int) arr_66 [i_16] [i_21 - 1])) + (((/* implicit */int) (unsigned short)35159))))));
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */int) (signed char)-12)) < (((/* implicit */int) var_5))))))))))));
                        }
                        for (signed char i_22 = 0; i_22 < 24; i_22 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned int) min((min((arr_72 [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)21)) != (((/* implicit */int) (short)27680))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_58 [i_16] [i_17] [i_18] [i_17])), (arr_69 [i_16] [i_17] [i_18] [i_20] [i_16]))))));
                            var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_62 [i_16] [i_16] [i_18 + 1] [i_16])) <= (((/* implicit */int) arr_62 [i_16] [i_18] [i_18 + 1] [i_16]))))), (max((arr_62 [i_17] [i_17] [i_18 + 1] [i_16]), (((/* implicit */unsigned char) arr_63 [i_16] [i_18] [i_18 + 1] [i_18 + 2] [6ULL] [i_18]))))));
                            arr_73 [i_20] [i_17] [i_18] [i_20] [i_16] = ((/* implicit */long long int) ((signed char) (unsigned char)77));
                        }
                        for (short i_23 = 1; i_23 < 21; i_23 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) var_10)) > (((2462297068234724816ULL) << (((/* implicit */int) arr_56 [i_16] [i_17] [i_20]))))))));
                            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */int) var_5)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4996))))))))));
                        }
                        arr_76 [i_16] [i_20] [(unsigned char)12] [i_20] [(unsigned char)12] [i_20] = ((/* implicit */unsigned short) (~(var_6)));
                    }
                    for (long long int i_24 = 0; i_24 < 24; i_24 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_25 = 0; i_25 < 24; i_25 += 4) 
                        {
                            arr_84 [i_25] [i_16] [i_16] [i_17] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)34703))));
                            var_40 &= ((/* implicit */unsigned char) max((min((arr_74 [i_16] [i_18 - 1] [i_18] [i_24] [i_25]), (arr_74 [i_16] [i_18 + 2] [i_18] [i_25] [2LL]))), (((/* implicit */unsigned long long int) ((long long int) arr_74 [i_16] [i_18 + 3] [i_18 + 3] [i_24] [i_16])))));
                        }
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((var_0) && ((((-(((/* implicit */int) var_2)))) == (((/* implicit */int) var_8)))))))));
                    }
                    var_42 |= ((/* implicit */signed char) (+((-(((/* implicit */int) (short)17443))))));
                }
            } 
        } 
    }
    for (unsigned char i_26 = 0; i_26 < 10; i_26 += 3) 
    {
        arr_87 [i_26] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) (short)24378)), (3008689175U)))));
        var_43 = ((unsigned int) (-(min((((/* implicit */int) var_3)), (arr_83 [i_26] [i_26] [i_26] [i_26] [i_26])))));
        arr_88 [i_26] [i_26] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_74 [21] [i_26] [i_26] [i_26] [19]))))));
        arr_89 [i_26] = ((/* implicit */unsigned short) ((unsigned char) arr_63 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]));
    }
    var_44 = ((/* implicit */short) (_Bool)0);
}
