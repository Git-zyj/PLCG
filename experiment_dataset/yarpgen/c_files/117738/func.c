/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117738
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */int) 8302567184596567855LL);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4088715275015211130LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) 0LL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) : (max((var_6), (((/* implicit */long long int) var_3))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) var_9);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_10);
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)31))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))));
        var_18 = ((/* implicit */long long int) arr_0 [i_1]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (var_9)))) ? (((/* implicit */int) arr_3 [i_6])) : (((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (var_1) : (((/* implicit */int) var_8)))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
            {
                var_20 = ((/* implicit */unsigned long long int) var_12);
                arr_29 [i_7 - 1] [i_7] [i_8 - 2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned long long int) -1LL)) : (11726471202321527721ULL)));
                var_21 = ((/* implicit */short) arr_6 [i_8]);
            }
            var_22 -= (!(((/* implicit */_Bool) arr_13 [i_7] [i_7 + 1] [i_7 - 1])));
            var_23 = ((/* implicit */unsigned long long int) var_6);
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
            {
                var_24 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))));
                var_25 = ((/* implicit */unsigned short) 8374076312674040619LL);
            }
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
            {
                var_26 |= ((/* implicit */unsigned char) (-(arr_24 [i_7 - 1])));
                var_27 = ((/* implicit */short) var_3);
            }
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_38 [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_24 [i_11]), (((/* implicit */long long int) var_0)))))));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_13 = 3; i_13 < 17; i_13 += 4) 
            {
                for (long long int i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned int i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_14] [i_14 - 1] [i_14])))))));
                            arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [i_13] [i_11] = ((/* implicit */unsigned long long int) 0U);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_16 = 3; i_16 < 15; i_16 += 2) 
            {
                for (unsigned short i_17 = 3; i_17 < 15; i_17 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) (-(var_11)));
                        var_30 ^= (!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_5))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_18 = 2; i_18 < 15; i_18 += 1) /* same iter space */
            {
                var_31 *= ((/* implicit */short) var_2);
                var_32 = ((/* implicit */unsigned long long int) var_10);
                var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-7167276271884914879LL), (((/* implicit */long long int) arr_54 [i_18 + 3] [i_18] [i_18 + 4] [i_18 + 4] [i_18 + 3]))))) ? ((~(0LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
            }
            for (int i_19 = 2; i_19 < 15; i_19 += 1) /* same iter space */
            {
                arr_63 [i_11] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_19 + 4] [i_19 + 3] [i_19 + 2] [i_19 - 1]), (arr_16 [i_19 - 2] [i_19 - 2] [i_19 + 2] [i_19 + 4])))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (24LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_11] [i_12])) ? (var_9) : (((/* implicit */unsigned int) var_1)))))));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
                {
                    for (unsigned char i_21 = 1; i_21 < 18; i_21 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) max((105966559U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))));
                            arr_69 [i_11] [i_12] [i_19] [i_20] [i_21] = ((/* implicit */signed char) min((((/* implicit */int) var_8)), (((arr_5 [i_19] [i_21 + 1]) ? (var_0) : (((/* implicit */int) var_10))))));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)245)) ? (max((((/* implicit */unsigned int) -376342705)), (105966559U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                            var_36 = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */unsigned short) var_5);
            var_38 *= ((/* implicit */signed char) (unsigned char)255);
        }
        for (unsigned int i_22 = 1; i_22 < 15; i_22 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_23 = 0; i_23 < 19; i_23 += 2) 
            {
                arr_77 [i_23] [i_22] [i_11] = ((/* implicit */signed char) var_4);
                var_39 = ((/* implicit */unsigned int) var_6);
            }
            arr_78 [i_22] [i_11] [i_11] = ((/* implicit */unsigned short) var_11);
        }
        var_40 ^= ((/* implicit */_Bool) var_4);
    }
    var_41 = var_1;
}
