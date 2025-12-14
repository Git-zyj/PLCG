/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103336
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
    var_13 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((var_2) | (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_9)))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (var_3)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_15 = ((var_0) || (((/* implicit */_Bool) 1904061548019469187LL)));
                            arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4] = ((/* implicit */unsigned int) (unsigned char)203);
                            var_16 = ((/* implicit */unsigned long long int) (-(arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1 + 4])));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_5))));
                var_18 = ((/* implicit */_Bool) max((var_18), (arr_5 [i_0] [i_0] [i_0] [i_0])));
            }
            var_19 = ((/* implicit */_Bool) (unsigned char)203);
            arr_15 [i_0] [i_0] = ((/* implicit */int) var_7);
        }
        for (int i_5 = 3; i_5 < 23; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_5 + 2] [i_5 + 2] [i_5 - 2])) / (((/* implicit */int) var_8)))))))), (((((/* implicit */int) var_12)) / (((/* implicit */int) var_12))))));
            var_21 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)203)))) != (min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_5])) != (1904061548019469185LL))))))));
            arr_20 [i_0] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))))), ((~(max((arr_11 [i_0] [i_0] [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 + 1]), (((/* implicit */unsigned int) (unsigned char)196))))))));
            var_22 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_4)) + (4736)))))) ^ (((9223372036854775793LL) & (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_5]))))))));
            var_23 = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */int) var_6)) << (((((((/* implicit */int) var_4)) + (4727))) - (14))))), (((/* implicit */int) (unsigned char)33))))));
        }
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            /* LoopSeq 4 */
            for (int i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) (!(((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9190))) - (2363214516U))))));
                arr_26 [i_0] [i_6] [i_0] = ((/* implicit */int) var_6);
            }
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1)))));
                var_26 &= ((/* implicit */unsigned short) min((((/* implicit */int) ((short) ((((/* implicit */int) var_0)) >> (((1931752780U) - (1931752751U))))))), ((~(((((/* implicit */int) var_1)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                var_27 ^= ((/* implicit */short) arr_23 [i_0] [i_0]);
            }
            for (short i_9 = 1; i_9 < 21; i_9 += 4) 
            {
                var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_11)))), (((((/* implicit */int) var_11)) | (-179311968)))))) > (((((/* implicit */unsigned long long int) ((long long int) var_12))) * (((arr_12 [i_0] [i_6] [i_6] [i_0] [i_6]) + (((/* implicit */unsigned long long int) -1904061548019469187LL))))))));
                var_29 += ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (short)-28502))))))), ((~(((/* implicit */int) (unsigned short)0))))));
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_36 [i_9] [i_9] [i_9 + 3] [i_10] [i_9] = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_9 + 3] [i_0]);
                    var_30 = ((/* implicit */short) arr_32 [i_9] [i_6] [i_0] [i_9 + 1] [i_6] [i_9]);
                    var_31 = ((((/* implicit */_Bool) 2164663517184ULL)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (short)23422)));
                    var_32 = ((/* implicit */short) max((var_32), ((short)23430)));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1318639088901829195ULL))))), (min((((/* implicit */unsigned long long int) var_1)), (var_9)))))) ? ((((-(var_10))) >> (((min((((/* implicit */unsigned int) (unsigned char)160)), (var_10))) - (148U))))) : (((/* implicit */unsigned int) min((-2105204073), (((/* implicit */int) arr_16 [i_9 + 4] [i_0] [i_9 + 4]))))))))));
                }
                /* vectorizable */
                for (short i_11 = 2; i_11 < 24; i_11 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        arr_42 [i_9] [i_9] [i_9 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_0] [i_6] [i_11 - 2])) + (((/* implicit */int) var_12))))) - (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203)))))));
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (((_Bool)1) ? (15197879329267452566ULL) : (((/* implicit */unsigned long long int) arr_33 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 - 2])))))));
                        var_35 ^= ((/* implicit */unsigned int) ((arr_38 [i_11 - 1] [i_11 - 1] [i_11 - 2] [i_11 + 1]) + (((((/* implicit */_Bool) arr_21 [i_9 + 2] [i_11 + 1] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (17128104984807722405ULL)))));
                        arr_43 [i_0] [i_9] [i_9 + 1] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_6] [i_6] [i_11 - 1]))) == (var_7)))) << ((((~(((/* implicit */int) (unsigned char)233)))) + (265)))));
                    }
                    for (unsigned long long int i_13 = 2; i_13 < 24; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */long long int) (~(((2009645487986366744ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        var_37 = ((/* implicit */int) ((arr_29 [i_13 - 1] [i_13 - 2] [i_13 - 2]) && (arr_29 [i_13 - 2] [i_13 - 1] [i_13 - 1])));
                        arr_46 [i_6] [i_6] [i_6] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) (short)2880);
                    }
                    for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        arr_49 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_11 + 1]))) : (18446744073709551615ULL)));
                        var_38 = ((/* implicit */signed char) ((arr_33 [i_0] [i_0] [i_0] [i_11 + 1] [i_0] [i_0]) % (arr_33 [i_0] [i_6] [i_0] [i_0] [i_6] [i_0])));
                    }
                    for (unsigned short i_15 = 3; i_15 < 23; i_15 += 3) 
                    {
                        arr_53 [i_0] [i_9] [i_0] [i_9] [i_11 - 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) - ((-(622320267U)))));
                        var_39 ^= ((/* implicit */unsigned short) (((+(arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    }
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1904061548019469187LL)) & (var_3)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_22 [i_11 - 2] [i_11 - 2]))));
                    var_41 = ((/* implicit */short) (((-(-1904061548019469187LL))) - (arr_21 [i_9 + 3] [i_11 + 1] [i_11 + 1])));
                    arr_54 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2075030290174983791ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                }
                for (short i_16 = 4; i_16 < 22; i_16 += 2) 
                {
                    var_42 = ((/* implicit */_Bool) ((1904061548019469187LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-3)))));
                    var_43 = ((/* implicit */signed char) max(((~(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_22 [i_0] [i_0])))))), (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)28502)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_16 - 3])))))))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    arr_62 [i_9] = ((max((((/* implicit */unsigned long long int) arr_1 [i_9 + 2] [i_6])), (min((((/* implicit */unsigned long long int) var_2)), (arr_44 [i_0] [i_6] [i_9 + 4] [i_6] [i_0] [i_9 + 4]))))) + (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)17)))), (((/* implicit */int) ((_Bool) arr_35 [i_0] [i_0] [i_0] [i_0])))))));
                    arr_63 [i_9] [i_9] [i_9 - 1] = ((/* implicit */signed char) arr_17 [i_0] [i_0] [i_9 + 1]);
                    var_44 += ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))) & (arr_38 [i_0] [i_6] [i_0] [i_9 + 3]))))))));
                    var_45 -= min((((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (arr_31 [i_9 + 2] [i_6] [i_6])))), ((short)15808));
                }
                arr_64 [i_0] [i_6] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0] [i_9 - 1])) && (var_0)));
            }
            for (short i_18 = 1; i_18 < 24; i_18 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    arr_70 [i_0] [i_0] [i_0] [i_18 + 1] [i_0] = ((((long long int) (_Bool)1)) % (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))));
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_60 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_0]), (arr_60 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_0])))) || (((((/* implicit */_Bool) arr_34 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_19])) || (((/* implicit */_Bool) arr_34 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_0]))))));
                }
                arr_71 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_50 [i_18] [i_18 - 1] [i_18] [i_0] [i_0] [i_18 - 1] [i_18]), (arr_50 [i_18] [i_18 + 1] [i_18 + 1] [i_0] [i_0] [i_18 + 1] [i_18 + 1])))) ? (((((/* implicit */_Bool) 2075030290174983791ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28502))) : (1904061548019469187LL))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_0] [i_18 - 1])))))));
                arr_72 [i_0] [i_6] [i_18 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_38 [i_18 + 1] [i_6] [i_18 - 1] [i_6])) ? (((/* implicit */int) arr_29 [i_0] [i_6] [i_0])) : (((/* implicit */int) var_4)))) + (((/* implicit */int) ((unsigned char) arr_8 [i_0])))));
                var_47 = min((((/* implicit */int) (!(var_8)))), (((max((arr_40 [i_18 + 1] [i_18 - 1] [i_6] [i_6] [i_0]), (var_2))) >> (((max((((/* implicit */unsigned long long int) var_7)), (18226369286964289216ULL))) - (18226369286964289196ULL))))));
            }
            var_48 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0]))) + (var_3)))));
            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_22 [i_0] [i_6]))) ? (min((arr_56 [i_0] [i_0] [i_0] [i_6]), (arr_56 [i_0] [i_6] [i_0] [i_0]))) : ((-(((/* implicit */int) arr_47 [i_0]))))));
        }
        var_50 ^= (~((-(2297997207U))));
        var_51 = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (785550772))))))));
    }
    for (int i_20 = 0; i_20 < 25; i_20 += 4) /* same iter space */
    {
        arr_75 [i_20] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_38 [i_20] [i_20] [i_20] [i_20])))) ? (((/* implicit */int) max(((short)-28502), (((/* implicit */short) var_8))))) : (((/* implicit */int) var_1)))));
        var_52 = ((/* implicit */int) min((var_52), (min((((((/* implicit */int) var_12)) << (((arr_27 [i_20]) + (1328998261))))), (((((/* implicit */_Bool) arr_27 [i_20])) ? (arr_27 [i_20]) : (arr_27 [i_20])))))));
    }
}
