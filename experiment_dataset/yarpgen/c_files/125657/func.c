/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125657
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_3 [i_0] [i_2])))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (var_1)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_18)) < (((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)))) : ((-(var_13)))))));
                            var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */long long int) arr_10 [i_0] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_0]) << ((((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) : (var_14))))) - (190LL)))));
                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) <= (var_0)));
                var_22 = ((/* implicit */_Bool) var_10);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_8)) * (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : ((+(var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2735280920077746301ULL)) ? (3219628319263244346LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))))))));
                    arr_23 [i_4] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) var_4))))))));
                }
            } 
        } 
        arr_24 [i_4] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))))));
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7])) : ((-((~(var_8)))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_40 [i_9] [i_9] [i_10] [i_10] [i_7]))))) ? (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) (unsigned short)33168))))));
                                arr_41 [i_8] [i_8] [i_7] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61359))) : (6787786963793827793LL)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_31 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (var_0)))) ? ((-(((/* implicit */int) var_9)))) : ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_1)))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(-676066076)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_7] [i_9] [i_10]))))) : ((~(var_13)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_13 = 3; i_13 < 20; i_13 += 4) 
                        {
                            arr_46 [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32360))))))))));
                            arr_47 [i_7] [i_8] [i_9] [i_13] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_7])))))))));
                            arr_48 [i_8] [i_7] = ((/* implicit */unsigned long long int) arr_29 [i_7]);
                            arr_49 [i_7] [i_7] [i_9] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_21 [i_7] [i_7]) << (((var_14) - (3910273507970307742LL)))))) ^ ((~(arr_35 [i_7] [i_7] [i_7])))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_15)) & (((/* implicit */int) var_17))))))) : (var_6));
                            var_26 = ((/* implicit */long long int) arr_43 [i_8] [i_8] [i_9] [i_8]);
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            arr_53 [i_9] [i_8] [i_9] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12]))) : (var_14));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_8)))) ? (var_13) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_36 [i_7] [i_8] [i_7] [i_12] [i_12])))))));
                            arr_54 [i_7] [i_8] [i_7] [i_12] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_6))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                        }
                        for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), ((~(((((/* implicit */_Bool) (~(var_13)))) ? (((((/* implicit */_Bool) arr_45 [i_7] [i_8] [i_8] [i_9] [i_15])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) var_11))))))))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_42 [(signed char)6] [i_8] [i_8] [i_9] [i_12] [i_15])) : (((/* implicit */int) arr_26 [i_7])))) : (((((/* implicit */_Bool) var_1)) ? (arr_43 [i_8] [i_9] [i_12] [i_15]) : (((/* implicit */int) var_12))))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [(unsigned char)22]))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [(signed char)18] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0)))))))))));
                            arr_57 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3194994383079321609ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12442))) : (3662085713U)))) ? ((~(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_17)))))) <= (((((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */int) var_12)))) / ((-(((/* implicit */int) var_12))))))));
                            var_30 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (var_8)))) ? (((/* implicit */unsigned long long int) arr_39 [i_7] [i_12] [i_12] [i_9] [i_9] [i_7] [i_7])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7] [i_7]))) : (var_16))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) var_14);
                            var_32 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_15 [i_8]))))))));
                            var_33 = ((/* implicit */unsigned char) var_5);
                        }
                        var_34 = ((/* implicit */unsigned short) arr_45 [i_7] [i_7] [i_7] [i_7] [i_7]);
                    }
                    arr_61 [i_7] = (~(((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_33 [i_7] [i_7])))) ? (((arr_58 [i_7] [i_8] [i_7] [i_9] [i_9] [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))));
                }
            } 
        } 
        arr_62 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) + (((var_7) - (var_7)))))) ? ((-(((((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))) : ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_60 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_18))))))));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            for (signed char i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                {
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_20 [i_7] [i_17] [i_17]))))))) ? ((+(((/* implicit */int) (unsigned short)32366)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6)))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) arr_56 [i_7] [i_7] [i_7] [i_7] [i_18]))))))));
                    arr_67 [i_7] [i_17] [i_17] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) var_17))));
                    arr_68 [i_18] [i_7] [i_7] [i_7] = var_17;
                    arr_69 [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)38455))));
                }
            } 
        } 
    }
}
