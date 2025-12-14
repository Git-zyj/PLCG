/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185944
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
    var_14 |= ((/* implicit */unsigned char) max((-7186733197558766983LL), (((/* implicit */long long int) var_2))));
    var_15 ^= ((/* implicit */unsigned char) ((_Bool) var_2));
    var_16 = ((/* implicit */signed char) var_5);
    var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (max((-7186733197558766983LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) && (var_9)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (max((7186733197558766983LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 - 2])))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_0 [i_0 + 1]))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 2])) / (((/* implicit */int) arr_0 [i_0 + 1]))))))))));
        var_20 = ((/* implicit */signed char) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) var_8))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_0)) / (arr_2 [i_0] [i_0]))))));
            var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) -7523541703397739598LL))));
        }
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (-(min((7186733197558766952LL), (-7186733197558766989LL))))))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) ((signed char) var_8))))))));
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */unsigned int) max((arr_4 [17ULL] [i_2]), (arr_4 [i_0] [i_0])))) : (max((1032057901U), (((/* implicit */unsigned int) var_1)))))))));
                var_26 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) (short)-32751)))));
            }
            /* vectorizable */
            for (int i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                arr_16 [i_2] = ((/* implicit */unsigned long long int) ((int) arr_7 [i_0 - 2]));
                arr_17 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2] = ((/* implicit */long long int) ((_Bool) var_13));
            }
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                arr_21 [i_2] = var_12;
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) (unsigned char)161)), (min((var_3), (((/* implicit */unsigned long long int) arr_11 [(unsigned char)11] [12] [i_5]))))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 22; i_7 += 4) 
                {
                    {
                        var_28 |= ((/* implicit */unsigned long long int) arr_7 [i_0 + 1]);
                        arr_28 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0 - 1] = ((/* implicit */signed char) 0);
                        var_29 |= ((/* implicit */int) ((((/* implicit */_Bool) (-((-(7186733197558767017LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (unsigned char)190)) ? (7186733197558766985LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)76)))))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_8 = 2; i_8 < 22; i_8 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) ((min((2LL), (((/* implicit */long long int) (signed char)101)))) % (((((/* implicit */_Bool) (-(2164132461812669477LL)))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) : (-803876396071857634LL))) : (((/* implicit */long long int) var_0))))));
        var_31 = ((/* implicit */int) ((short) max((arr_23 [i_8] [i_8 + 1] [i_8]), (arr_23 [i_8] [i_8 + 1] [i_8]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    for (unsigned short i_12 = 4; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((var_3) < (((/* implicit */unsigned long long int) arr_32 [i_8 + 1])))))));
                            arr_45 [i_12] [i_11] [i_11] [i_9] = ((/* implicit */unsigned char) ((var_0) > (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            } 
            var_34 |= ((/* implicit */unsigned short) ((signed char) (unsigned char)226));
        }
        for (unsigned int i_13 = 1; i_13 < 22; i_13 += 3) 
        {
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_24 [i_8] [i_8] [i_13] [(signed char)14])), (max((-7811530479924275395LL), (arr_22 [i_8] [i_13])))))), (max((((/* implicit */unsigned long long int) arr_8 [i_8])), (var_3))))))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                for (long long int i_15 = 2; i_15 < 21; i_15 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_16 = 0; i_16 < 23; i_16 += 1) 
                        {
                            var_36 -= ((/* implicit */signed char) (!((((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) 7811530479924275395LL))))));
                            arr_57 [i_16] [i_13] [i_13] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (!(arr_39 [i_13] [i_13] [i_15 + 1] [i_15 + 1] [i_13])))) - (((/* implicit */int) arr_39 [i_13] [i_13] [i_15 + 1] [i_15] [i_15 + 1]))));
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_19 [i_8 - 1] [i_8] [i_8 - 1] [(signed char)20]), (((/* implicit */unsigned long long int) 0))))) ? (max((((/* implicit */unsigned long long int) arr_38 [i_8 - 2] [i_13 - 1] [i_13 - 1])), (var_3))) : (((/* implicit */unsigned long long int) min((arr_38 [i_8 - 1] [i_13 - 1] [i_8 - 1]), (arr_5 [i_8 - 1])))))))));
                            var_38 |= ((/* implicit */long long int) var_9);
                        }
                        for (int i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            arr_60 [i_8] [i_13] [i_13] [i_13] [18U] = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_8] [i_8 + 1] [i_8 - 2])) - (((/* implicit */int) (unsigned short)18387))));
                            arr_61 [i_8] [(signed char)3] [i_14] [i_13] [i_13] = ((/* implicit */unsigned char) max(((+(var_12))), (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)24126)))))))));
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_15 + 2] [i_14] [i_14] [i_15 - 2] [i_8 - 1])) >> (((arr_51 [i_15 + 2] [i_13] [i_13 - 1] [i_13] [i_8 - 1]) - (1237753711)))))) - ((-(7891543807234891925LL)))));
                        }
                        for (int i_18 = 1; i_18 < 21; i_18 += 4) 
                        {
                            arr_65 [i_8 - 2] [i_13] [i_14] [i_13] [(signed char)5] [i_18] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7811530479924275405LL)) ? (var_12) : (((/* implicit */long long int) 4))))) && ((!(((/* implicit */_Bool) 8803931627315472567LL)))))) ? (((((/* implicit */_Bool) arr_58 [i_13] [i_8 - 2] [i_13] [i_13 - 1] [i_8 - 2] [i_15 + 2] [0ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)-115))))))));
                            var_40 = min((((/* implicit */long long int) (short)-12420)), (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) arr_3 [i_8 - 2])) : (-8803931627315472578LL))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) var_13))));
                        }
                        for (int i_19 = 1; i_19 < 22; i_19 += 1) 
                        {
                            arr_70 [i_8] [i_15] [i_14] [i_13 - 1] [i_8] [i_8] &= ((/* implicit */unsigned char) var_11);
                            var_42 = ((/* implicit */int) -7186733197558766986LL);
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_19 [i_15 + 1] [i_8] [i_8] [i_13]) : (((/* implicit */unsigned long long int) 4051377092U)))) : (((((/* implicit */_Bool) arr_11 [i_19 + 1] [i_19 + 1] [i_19 - 1])) ? (arr_19 [i_15 - 1] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                        }
                        arr_71 [i_13] [21] [i_13] [i_13] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) var_8)))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_20 = 2; i_20 < 22; i_20 += 4) /* same iter space */
    {
        var_44 = ((/* implicit */long long int) ((short) ((var_5) + (arr_38 [i_20] [(signed char)8] [(_Bool)1]))));
        arr_74 [21LL] [21LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((signed char) arr_7 [(unsigned char)21]))) : (((/* implicit */int) (unsigned short)18387))));
        var_45 -= ((/* implicit */long long int) ((int) arr_69 [i_20 - 2]));
    }
}
