/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183992
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_10 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (12283842667287218640ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0 - 1] [i_0])), (((((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)1])) - (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))))) : (((((((/* implicit */_Bool) 12283842667287218640ULL)) ? (12283842667287218634ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) >> (((((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (6162901406422332995ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) - (6162901406422332943ULL)))))));
                        arr_11 [i_0] [i_1] = (-((-(((((/* implicit */int) arr_5 [i_1] [i_1])) / (((/* implicit */int) arr_5 [i_1] [i_1])))))));
                        arr_12 [i_1] [(unsigned short)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [(_Bool)1] [i_3]))) | (12283842667287218640ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-4964668302466693566LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [17] [i_0] [(_Bool)1] [i_0] [10ULL])) ? (((/* implicit */int) arr_9 [(short)14] [i_1] [(short)14] [i_1] [12LL] [i_1])) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) min((((/* implicit */short) min((((/* implicit */signed char) arr_7 [i_0] [i_1] [i_1])), (arr_5 [i_1] [i_1])))), (min((((/* implicit */short) (signed char)-16)), (arr_3 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) (signed char)-118))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min(((+(((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0 + 1])))), ((~(min((((/* implicit */int) arr_2 [i_3] [18] [18])), (689430904))))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [2] [i_0])) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) arr_7 [14] [(signed char)10] [i_0]))))))), (((((/* implicit */_Bool) max((arr_3 [13] [13] [i_0]), (((/* implicit */short) arr_7 [i_0] [(unsigned short)10] [4]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32839))))) : (max((6162901406422332995ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0 - 1]))))))));
        /* LoopSeq 4 */
        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 2])), (-1777121812)))) / ((+(6162901406422332995ULL))))))));
            arr_15 [6LL] [6LL] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) (-(-4985586476669696052LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] [i_4]))) + (368855054043645751ULL)))))));
        }
        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) max((14499289904792115076ULL), (((/* implicit */unsigned long long int) 23U))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0])))) / (((/* implicit */int) arr_22 [i_0])))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min(((-(arr_24 [i_0 - 2]))), (min(((+(((/* implicit */int) arr_19 [6ULL])))), (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)1)))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */short) (+((~(((/* implicit */int) (signed char)-62))))));
            arr_32 [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0])))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % ((+(5030320890582643590LL)))));
        }
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    {
                        arr_41 [i_0] [i_0] [(_Bool)1] [i_12] = ((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1809))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_12] [i_10])) ? (((/* implicit */int) arr_33 [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)0))))) : (5704575451267698051LL))), (((/* implicit */long long int) max((arr_38 [i_0 - 1]), (((/* implicit */int) (unsigned short)768)))))));
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            var_24 ^= (!(((((((/* implicit */int) arr_2 [6] [i_10] [6])) % (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10] [i_10])))));
                            arr_46 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((arr_37 [i_11] [i_11] [i_11] [i_12] [i_11]) ? (((((((/* implicit */_Bool) (signed char)0)) ? (arr_43 [i_12] [i_12] [i_12] [(unsigned short)4] [i_12] [i_12] [14]) : (((/* implicit */int) (_Bool)1)))) >> (min((299071795), (((/* implicit */int) (signed char)0)))))) : ((~(((/* implicit */int) min(((unsigned short)55180), (((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_0])))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_20 [i_14])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_0] [i_0 + 1] [i_0 + 1])))) : (((((/* implicit */_Bool) (signed char)-1)) ? (-1276982718947536236LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            arr_49 [i_14] [(signed char)15] [i_14] [(signed char)15] [i_14] [i_12] = ((/* implicit */_Bool) arr_29 [i_12] [i_11] [i_11] [i_11] [i_11]);
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_15 = 4; i_15 < 18; i_15 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_45 [i_10] [i_10]))))));
                            arr_52 [i_12] = (-(arr_51 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0]));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(arr_24 [i_0 - 2]))))));
                        }
                        for (short i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
                        {
                            var_28 &= (((-(((/* implicit */int) arr_40 [i_10])))) - ((-(((((/* implicit */_Bool) 3357170360376477823ULL)) ? (((/* implicit */int) arr_23 [3ULL] [3ULL] [i_11])) : (((/* implicit */int) (_Bool)0)))))));
                            var_29 = ((((/* implicit */_Bool) 68719476734ULL)) ? ((+(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_12] [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_11] [i_12] [i_11]))) : (10765924069869745903ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5704575451267698051LL)) ? (-1276982718947536236LL) : (-1668433123460255360LL)))));
                        }
                        /* vectorizable */
                        for (short i_17 = 0; i_17 < 20; i_17 += 1) /* same iter space */
                        {
                            arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1]))));
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_12] = ((/* implicit */unsigned short) -1014626996);
                        }
                        for (short i_18 = 0; i_18 < 20; i_18 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_18 [i_0]))))) ? (((/* implicit */int) min(((unsigned short)32907), (((/* implicit */unsigned short) arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))) : (((/* implicit */int) max((arr_48 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_12]), (((/* implicit */unsigned short) arr_25 [i_12] [i_12] [i_12])))))))) ? (((/* implicit */int) arr_19 [i_12])) : (((/* implicit */int) arr_47 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
                            var_31 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((~(((/* implicit */int) arr_7 [i_0] [i_12] [(signed char)13])))), (max((arr_43 [i_12] [i_12] [i_12] [i_12] [13] [i_12] [i_12]), (arr_24 [i_0])))))), ((~(arr_34 [i_0 - 2] [i_0])))));
                        }
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) min((var_32), ((signed char)-88)));
            arr_61 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) (signed char)-64)))) : (min((1777121812), (((/* implicit */int) (signed char)91))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_42 [i_10] [i_10])), (max(((short)15343), (((/* implicit */short) (_Bool)1)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_10] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [18ULL])) ^ (((/* implicit */int) arr_17 [i_10]))))) : (arr_26 [i_10] [i_10] [i_10] [i_10]))));
        }
        var_33 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_19 [(signed char)8])))))), (max((((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) arr_50 [i_0])) : (((/* implicit */int) arr_37 [i_0] [18LL] [18LL] [(signed char)18] [i_0])))), (((((/* implicit */int) arr_3 [7LL] [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))))));
        arr_62 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_55 [(unsigned short)6] [(unsigned short)6] [10LL]), (((/* implicit */unsigned short) arr_19 [8ULL])))))))), (((((unsigned long long int) arr_38 [i_0])) / (((/* implicit */unsigned long long int) (~(-1276982718947536227LL))))))));
    }
    var_34 = ((/* implicit */signed char) ((var_9) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1))))))));
}
