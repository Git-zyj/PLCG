/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18751
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 859791691U)) ? (0ULL) : (((/* implicit */unsigned long long int) -75853145))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (1771502453)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((var_8) >= (((/* implicit */long long int) var_9))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) - (((((/* implicit */_Bool) 3297394505U)) ? (31U) : (((/* implicit */unsigned int) -1771502460))))));
                                arr_15 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((((unsigned long long int) var_11)) * (((/* implicit */unsigned long long int) -1559091829))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 322378338U))));
                                arr_16 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                            }
                        } 
                    } 
                    var_19 += (-(((649968151349392859ULL) >> (((var_9) - (1863263881U))))));
                    var_20 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 3097978708U)) : (9272872081266288372ULL)))));
                    arr_17 [11ULL] &= ((/* implicit */short) ((var_7) >= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)2)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0 + 4] [i_0] [i_0])) - (((/* implicit */int) var_0))))) ? (-7726229224604361240LL) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)73))) : (arr_14 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2]))))))));
        arr_18 [i_0 - 2] [i_0] = -7726229224604361239LL;
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_22 &= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) : (arr_19 [i_5] [i_5]))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_20 [i_5]))));
        var_24 |= ((/* implicit */unsigned int) (+(min((((/* implicit */int) ((short) 10999051839600253423ULL))), (-644862948)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_9] [i_8] [(short)11] [(short)11] [(short)11]))))) && (((/* implicit */_Bool) 6912530720083314123LL)))))));
                            var_26 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_28 [i_5] [i_6] [i_7] [i_7] [i_9]), (((/* implicit */signed char) var_6)))))) * (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? ((((~(var_5))) / (min((-1073150394), (((/* implicit */int) var_11)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)162)) && (((/* implicit */_Bool) (signed char)117))))));
                        }
                    } 
                } 
            } 
            var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6494804409197522282LL)) && (((/* implicit */_Bool) -6912530720083314123LL))));
            var_28 = ((/* implicit */long long int) (signed char)10);
            arr_30 [i_5] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2813449578U)) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_5] [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1]))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)208)) && (((/* implicit */_Bool) (short)-18619))))))));
            var_29 += 8380416;
        }
        /* vectorizable */
        for (unsigned int i_10 = 2; i_10 < 12; i_10 += 2) 
        {
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */unsigned long long int) (+(4294967295U)))) & (((((/* implicit */_Bool) arr_29 [i_5] [i_5] [9ULL] [i_10] [i_10])) ? (arr_32 [i_5]) : (((/* implicit */unsigned long long int) 4294967295U))))))));
            var_31 &= ((/* implicit */unsigned int) var_1);
        }
        var_32 = ((/* implicit */long long int) ((((long long int) ((int) arr_33 [i_5]))) < (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -4312652612973959363LL)) ? (((/* implicit */unsigned long long int) 7065186625980393175LL)) : (arr_32 [i_5])))))));
    }
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (short)-29839))));
        var_34 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((-7065186625980393175LL), (arr_34 [i_11] [i_11]))))));
    }
    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (((!(((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_13)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (((4294967295U) >> (((var_9) - (1863263874U))))))) : (((/* implicit */unsigned int) -1771502454)))))));
    /* LoopSeq 1 */
    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
    {
        var_36 = ((/* implicit */_Bool) max((var_36), ((!(((/* implicit */_Bool) ((6603251743817020782LL) - (((/* implicit */long long int) ((/* implicit */int) max((arr_39 [i_12]), ((unsigned char)194))))))))))));
        /* LoopSeq 4 */
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            var_37 = ((/* implicit */signed char) (+(((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))));
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) min((783242636U), (10U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29623))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2534538155U))))) : ((+(((/* implicit */int) (signed char)-59))))))) : (((((/* implicit */_Bool) arr_37 [i_12])) ? (4294967280U) : (((unsigned int) (unsigned char)165)))))))));
            var_39 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_13]))) > (var_15))))));
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [i_12])) > (((/* implicit */int) var_6)))))))))))));
            arr_42 [i_12] [i_12] = ((/* implicit */unsigned long long int) (+(min((((var_8) / (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (signed char)32))))));
        }
        for (long long int i_14 = 2; i_14 < 24; i_14 += 4) 
        {
            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_9)))))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)35913)))) ? (((/* implicit */unsigned long long int) var_9)) : (var_15))))))));
            arr_47 [i_14 - 1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_39 [i_14])))) != (((/* implicit */int) (short)13579))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 3) 
                    {
                        {
                            arr_56 [i_12] [i_15] [i_12] [i_12] [i_18] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_10)))))) ? (((int) arr_53 [i_18] [i_17] [i_16] [i_15] [i_12])) : (((/* implicit */int) arr_39 [i_17]))));
                            arr_57 [(unsigned char)0] [i_17] [i_18] [i_17] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)196)) >> (((((/* implicit */int) (unsigned char)196)) - (196))))) & ((~((+(((/* implicit */int) (_Bool)0))))))));
                            arr_58 [i_18] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 227040705U)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) << (((((/* implicit */int) (unsigned short)6959)) - (6943)))))))))) != (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (1791385435U)))) ? (3972588977U) : (((/* implicit */unsigned int) ((int) var_5)))))));
                            var_42 = ((/* implicit */signed char) (unsigned char)58);
                        }
                    } 
                } 
            } 
            arr_59 [i_12] [i_15] = ((short) 8191);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */int) (short)6144)) == (((/* implicit */int) var_2)))) && (((/* implicit */_Bool) min(((unsigned char)196), (((/* implicit */unsigned char) (_Bool)0)))))))) >= (((/* implicit */int) ((((unsigned int) 2463465754U)) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))))))));
            arr_63 [(signed char)14] &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (((((/* implicit */_Bool) var_14)) ? (9002801208229888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35924))))))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_20 = 4; i_20 < 10; i_20 += 4) 
    {
        arr_67 [i_20 + 1] = ((/* implicit */short) (unsigned char)96);
        var_44 |= ((/* implicit */unsigned int) (unsigned short)29590);
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            for (long long int i_22 = 0; i_22 < 11; i_22 += 3) 
            {
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 2) 
                {
                    {
                        var_45 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_14 [i_20 - 2] [0] [i_20] [2U] [i_20 + 1])))), ((_Bool)1)));
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)29611)))))) * (((/* implicit */int) var_11))));
                        var_47 *= ((/* implicit */unsigned int) (unsigned char)26);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_24 = 0; i_24 < 11; i_24 += 2) 
        {
            for (signed char i_25 = 2; i_25 < 10; i_25 += 3) 
            {
                {
                    var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 16045932608980048124ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (3919953445058582326ULL))), (((/* implicit */unsigned long long int) 8201)))))));
                    var_49 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) min(((~(8331338104192593488ULL))), (((/* implicit */unsigned long long int) 1108198901U)))))));
                    /* LoopSeq 1 */
                    for (long long int i_26 = 2; i_26 < 8; i_26 += 4) 
                    {
                        var_50 = ((/* implicit */long long int) (+(min((((/* implicit */int) (unsigned char)247)), ((+(((/* implicit */int) (unsigned short)6976))))))));
                        var_51 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (short)14915)) << (((arr_43 [i_20 - 2] [i_20 + 1] [i_25 + 1]) - (1195188606U))))));
                        var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (((var_15) / (((/* implicit */unsigned long long int) 279823701))))))) ? (((unsigned long long int) arr_61 [i_26] [i_25] [i_20 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178)))));
                        var_53 ^= ((/* implicit */_Bool) var_13);
                    }
                }
            } 
        } 
    }
}
