/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143477
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_0 [i_1 + 3] [i_1 + 2])))))))));
                var_17 = 857806919770731251LL;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */long long int) (~(arr_5 [i_2 - 1])));
        var_19 = ((/* implicit */_Bool) ((max((arr_5 [i_2 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_2 - 1])))) >> (((arr_5 [(unsigned char)3]) - (6433271260491926741ULL)))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_20 += ((/* implicit */unsigned long long int) ((unsigned char) 5728550635315431119LL));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_19 [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_4 - 2] [i_3]))));
                                arr_20 [i_3] [i_3] [i_3] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_3] [i_3])) - (((/* implicit */int) arr_15 [i_3] [i_3]))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3] [i_4 - 2])) ? (((/* implicit */int) arr_11 [i_3] [i_4 - 1])) : (((/* implicit */int) (signed char)-66))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 *= ((/* implicit */_Bool) (~(arr_12 [i_3] [i_3] [i_3] [i_3])));
        /* LoopSeq 3 */
        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((signed char) arr_16 [i_3] [i_3] [i_3] [i_3]));
            var_24 = (-(arr_8 [i_8]));
        }
        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 19; i_12 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3] [4ULL] [i_3] [i_3] [i_3]))) : (-4052032661470163573LL))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) arr_18 [i_12 - 1] [i_9] [i_10 + 2])) : (((/* implicit */int) (signed char)79)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -924377245501402970LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_9]))) : (arr_32 [i_10 + 2] [i_3] [i_10] [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (var_10)))));
                            var_28 -= ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_6 [i_3] [i_9]))))));
                            var_29 = ((/* implicit */long long int) max((var_29), ((-(((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_14] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) : (567026242080990886LL)))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)76)) ? (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (-567026242080990887LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3])))));
                            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_10 + 1] [i_10 + 2] [i_10] [(signed char)10] [i_10 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-60))))) : (((/* implicit */int) arr_21 [i_10 + 1]))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_36 [i_10 + 1] [i_10] [i_10 + 2]))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 2; i_16 < 19; i_16 += 3) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_16 - 2] [i_16] [i_3] [i_16] [i_16 + 1])) - (((((/* implicit */_Bool) arr_21 [i_17])) ? (((/* implicit */int) arr_36 [i_17] [i_16 + 1] [i_15])) : (((/* implicit */int) arr_41 [i_3] [i_3] [i_3] [5ULL]))))));
                            var_34 = ((/* implicit */_Bool) arr_23 [i_16 + 1] [i_16 + 1] [i_3]);
                            var_35 = ((/* implicit */unsigned char) (((-(arr_8 [i_3]))) >= (-7771482294298624697LL)));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_3] [i_9] [i_15] [i_15])) ? (arr_34 [2LL] [2LL] [i_9] [i_15]) : (2143377700875766332LL)));
                var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [(unsigned char)12] [i_9] [i_15] [i_9])) ? (arr_22 [i_3]) : (-4247318945266843860LL)));
            }
            var_38 = ((/* implicit */signed char) ((arr_39 [i_9] [i_3] [i_3] [i_3] [i_3]) <= (arr_39 [i_3] [i_3] [i_3] [i_9] [4ULL])));
            var_39 = ((/* implicit */signed char) (-(((long long int) arr_44 [i_3] [i_3] [i_3] [(_Bool)1] [i_9] [i_9]))));
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (long long int i_19 = 1; i_19 < 18; i_19 += 1) 
            {
                for (signed char i_20 = 2; i_20 < 16; i_20 += 4) 
                {
                    {
                        arr_53 [i_20] [i_18 - 1] |= ((/* implicit */long long int) ((4247318945266843860LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_18 - 1] [i_18 - 1] [i_18 - 1])))));
                        arr_54 [i_3] [i_3] [i_3] = ((long long int) 308045542790724701LL);
                        var_41 = arr_35 [i_20 + 1] [i_20] [i_3] [i_20 + 4] [i_18 - 1];
                    }
                } 
            } 
        }
        var_42 = ((/* implicit */signed char) ((long long int) arr_51 [i_3]));
    }
    var_43 = ((/* implicit */unsigned char) var_13);
}
