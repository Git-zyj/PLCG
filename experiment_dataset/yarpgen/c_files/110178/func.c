/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110178
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == ((+(606605078U)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_18 = ((unsigned int) var_12);
            var_19 = ((/* implicit */_Bool) var_12);
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) arr_3 [i_0]))))));
        }
    }
    for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (signed char)71);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_10 [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 4])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_5 + 2] [(unsigned char)15] [i_5 + 2])))))));
                            var_22 ^= ((/* implicit */unsigned short) 1803988591U);
                            arr_21 [(_Bool)1] [i_4] [i_4] [i_5 + 1] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)59046);
                        }
                    } 
                } 
            } 
            arr_22 [i_2] [i_2 + 2] [7U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [10LL] [i_2 + 2] [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))));
            /* LoopSeq 3 */
            for (signed char i_7 = 1; i_7 < 19; i_7 += 4) /* same iter space */
            {
                var_23 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) (unsigned char)35)))))));
                var_24 |= ((/* implicit */unsigned short) arr_13 [i_2] [i_2] [i_2]);
            }
            for (signed char i_8 = 1; i_8 < 19; i_8 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_19 [(unsigned char)21] [(unsigned char)6]))));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_2 + 1])) + (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_19 [(unsigned char)1] [(unsigned char)1])))) : (arr_20 [i_2 + 2])));
            }
            for (signed char i_9 = 1; i_9 < 19; i_9 += 4) /* same iter space */
            {
                var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_9 + 2] [i_9 + 2] [i_9 + 4])) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) var_7))));
                var_28 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)109));
            }
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_6 [i_3]) : (arr_6 [i_2 + 1])));
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (signed char)123))));
            var_31 = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned short)31533))))));
        }
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)56464)))) : (min((((((/* implicit */_Bool) arr_18 [i_2] [i_2] [(signed char)11] [i_2 + 1] [i_2 + 2] [i_2])) ? (((/* implicit */int) (unsigned short)40880)) : (((/* implicit */int) arr_14 [i_2 + 1])))), (((/* implicit */int) var_8))))));
        var_33 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) 3688362217U)), (arr_6 [i_2 - 1]))), (((/* implicit */long long int) max((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) (unsigned short)6634)))))))));
    }
    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) -1986783683))), ((-(((/* implicit */int) (unsigned short)35906))))))) ? (((((/* implicit */_Bool) arr_34 [i_11] [i_11])) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)52731)), (arr_34 [i_11] [i_11])))) : (max((var_6), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) arr_11 [i_11] [i_11])) : (((/* implicit */int) arr_13 [i_11] [8U] [8U]))))))))))));
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            for (unsigned short i_13 = 3; i_13 < 19; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    {
                        arr_46 [i_11] [i_14] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_11])) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_40 [(unsigned short)19] [(unsigned short)19] [i_14])))), (((/* implicit */int) min(((unsigned char)251), ((unsigned char)117))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)4664)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_42 [0U] [i_13 + 2] [i_13 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_14] [i_14] [i_14] [i_14] [i_13]))))))) : (((/* implicit */int) arr_17 [i_13 - 2] [i_13 - 3] [i_13 - 3])));
                        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24644)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (35184372088831LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47595)))))) : (max((15134748151412639250ULL), (((/* implicit */unsigned long long int) 4294967293U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24656))) : (1U)))))))) : (((((/* implicit */_Bool) ((unsigned int) arr_17 [i_11] [i_13] [i_11]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_17 [i_11] [i_11] [i_11])), (arr_25 [i_11] [i_11] [i_11])))) : (min((14991466497160497422ULL), (((/* implicit */unsigned long long int) var_9))))))));
                        arr_47 [i_14] [i_14] [i_14] = max((((/* implicit */unsigned int) (unsigned short)54326)), (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) : (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34558))))))));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */short) (~(4294967293U)));
        var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (unsigned short)0)))))));
        var_38 += ((/* implicit */unsigned char) (signed char)15);
    }
    /* LoopNest 3 */
    for (unsigned short i_15 = 4; i_15 < 20; i_15 += 2) 
    {
        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                {
                    var_39 = min((((/* implicit */short) (signed char)-70)), (((short) min((arr_37 [i_15] [i_16]), (((/* implicit */int) arr_27 [i_15] [i_15] [(signed char)10]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_40 |= ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)23))))));
                        var_41 |= ((/* implicit */short) (unsigned short)11210);
                        /* LoopSeq 4 */
                        for (unsigned short i_19 = 0; i_19 < 22; i_19 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)50159)), (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)7))))))) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)43))));
                            arr_61 [i_15 - 4] [(unsigned char)15] = ((/* implicit */unsigned char) ((unsigned short) (+((-(((/* implicit */int) arr_55 [i_15] [i_16] [i_16] [i_16] [i_19])))))));
                            var_43 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_52 [i_18] [i_18] [i_18])) : (((/* implicit */int) (signed char)-112)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_15] [i_15]))))))) == ((~(((/* implicit */int) ((unsigned short) (unsigned short)19180)))))));
                        }
                        for (int i_20 = 0; i_20 < 22; i_20 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) (signed char)-7)) + (30)))));
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8093408402721092209LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0)))) : (((((/* implicit */_Bool) (short)-17123)) ? (2147483647U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))));
                        }
                        for (unsigned long long int i_21 = 1; i_21 < 20; i_21 += 2) 
                        {
                            var_46 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_23 [i_15 - 4] [i_15 + 1] [i_15 - 2]), (arr_23 [i_15 - 3] [i_15 + 1] [i_15 - 2]))))));
                            arr_68 [i_15] [i_15] [i_15] [i_15 - 3] [i_15 - 4] = ((((/* implicit */_Bool) ((arr_58 [i_21] [i_18] [i_17] [i_16] [i_15 + 2]) % ((+(((/* implicit */int) var_16))))))) ? (max((var_4), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(var_15))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) <= (var_5))))))));
                        }
                        for (signed char i_22 = 3; i_22 < 21; i_22 += 1) 
                        {
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_50 [i_15 + 1])) == ((~(1073739776)))));
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (~(var_4))))));
                            var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [4]))));
                            var_50 = ((/* implicit */unsigned short) var_1);
                            var_51 = ((/* implicit */short) max((((/* implicit */int) (signed char)5)), (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (short)-1))))));
                        }
                        var_52 = ((/* implicit */unsigned short) ((unsigned char) var_7));
                        arr_72 [(unsigned char)18] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) var_7)) : (arr_34 [i_15] [i_15])))) ? (((/* implicit */int) arr_70 [13U] [i_15 + 1] [13U] [i_18] [i_15])) : (((/* implicit */int) min((arr_19 [i_15 - 4] [i_16]), (var_14)))))));
                    }
                    for (int i_23 = 1; i_23 < 21; i_23 += 3) 
                    {
                        var_53 = ((/* implicit */_Bool) ((unsigned long long int) 1336272142U));
                        var_54 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned char) ((signed char) arr_43 [i_15])))));
                    }
                    var_55 = ((/* implicit */unsigned short) (signed char)24);
                    var_56 |= ((/* implicit */unsigned short) ((unsigned int) (unsigned short)8191));
                    arr_75 [21ULL] [i_16] = ((/* implicit */unsigned short) min((484688017U), (((/* implicit */unsigned int) (unsigned char)1))));
                }
            } 
        } 
    } 
    var_57 = ((/* implicit */unsigned char) var_12);
}
