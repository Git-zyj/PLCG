/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144026
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
    var_18 += ((/* implicit */_Bool) var_2);
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max(((short)0), (((/* implicit */short) var_15))))) : ((+(((/* implicit */int) (signed char)56)))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_20 |= max((((((/* implicit */_Bool) arr_6 [i_0] [(signed char)2] [(signed char)2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-77))))), (min((arr_6 [i_1] [(signed char)14] [i_0]), (((/* implicit */long long int) arr_3 [i_0])))));
            var_21 = ((/* implicit */unsigned long long int) (signed char)-11);
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) <= ((+(((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) arr_6 [i_3] [i_1] [i_0]);
                            var_24 = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((short) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1))))), (min((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */long long int) var_2)))))));
                var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) arr_11 [12LL] [i_5] [12LL] [12LL] [i_0] [i_0])) & (((((/* implicit */_Bool) (signed char)-64)) ? (arr_17 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))))))));
                var_28 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_29 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) var_2)) ? (2670794127U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))))), (arr_13 [i_1] [i_5])))));
                var_30 = ((/* implicit */unsigned long long int) (~(arr_16 [i_0])));
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(8242845395902192492ULL)))) ? (((/* implicit */int) ((short) (signed char)62))) : ((~(((/* implicit */int) arr_1 [i_0] [i_1]))))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_32 = ((/* implicit */unsigned int) ((signed char) (-(var_12))));
                var_33 = ((/* implicit */signed char) var_13);
                var_34 = ((/* implicit */unsigned long long int) var_10);
            }
        }
        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
        {
            var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(arr_4 [i_0] [i_7]))), ((+(2710478624460728198LL)))))) ? ((+(arr_13 [i_7] [i_7]))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 10203898677807359109ULL))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (595103803U)))))))));
            var_36 = ((unsigned long long int) max((arr_0 [i_7]), (arr_0 [i_7])));
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (signed char)-101))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)56)) ? (6917529027641081856LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))) : ((+(((((/* implicit */_Bool) 8242845395902192492ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_7])))))));
            var_38 = ((/* implicit */short) var_16);
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((short) var_9)))));
            var_40 = ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_8] [i_0]));
        }
        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) ((signed char) var_2))) : (((int) max((((/* implicit */long long int) -9)), (17179869056LL)))))))));
        var_42 = ((/* implicit */short) arr_16 [i_0]);
        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-62))))) ? (min((arr_16 [i_0]), (arr_16 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */short) (signed char)0))))) ? ((~(var_12))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)31))))))))));
        var_44 = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) arr_9 [i_0] [i_0]))), ((~(var_8)))));
    }
    for (signed char i_9 = 1; i_9 < 23; i_9 += 3) 
    {
        var_45 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 5237573823451273793ULL)) ? (1425360893) : (((/* implicit */int) (signed char)-62))));
        var_46 = ((((/* implicit */long long int) var_9)) & (max((min((((/* implicit */long long int) arr_29 [i_9] [i_9])), (2772938573724226626LL))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)14))))))));
        /* LoopSeq 3 */
        for (signed char i_10 = 1; i_10 < 21; i_10 += 3) 
        {
            var_47 = ((/* implicit */int) max((max((((/* implicit */unsigned int) (-(-1189201418)))), (((387341216U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))))))), (((/* implicit */unsigned int) -1474138718))));
            var_48 = ((/* implicit */int) (((((-(arr_29 [i_9 + 1] [i_9]))) >= ((+(((/* implicit */int) arr_30 [i_9] [i_10] [i_9])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((short) var_14)), (((/* implicit */short) ((1474138727) == (arr_29 [i_10] [i_9 + 1])))))))) : ((-(((((/* implicit */_Bool) 733679923U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) : (15032385536ULL)))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_49 ^= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) == (5158551086341647853LL)))) / (((/* implicit */int) ((-6341728101454037898LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))) >= (((((/* implicit */_Bool) -1474138748)) ? (arr_31 [i_9] [i_9] [i_9]) : (min((5158551086341647853LL), (((/* implicit */long long int) (signed char)47))))))));
            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((arr_29 [i_9] [i_9]), (((/* implicit */int) arr_27 [i_9] [i_9]))))))) ? (1156763873378515932LL) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_12 = 1; i_12 < 22; i_12 += 1) 
            {
                var_51 = ((/* implicit */unsigned int) (-(arr_31 [i_9] [i_9 - 1] [i_12 + 1])));
                var_52 = (+(((/* implicit */int) (_Bool)1)));
            }
            for (long long int i_13 = 2; i_13 < 24; i_13 += 4) 
            {
                var_53 = var_8;
                var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1425360894)) ? (16884136195843743282ULL) : (((/* implicit */unsigned long long int) 0))));
                var_55 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (signed char)63))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)25457)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)4149))))))), (max((((/* implicit */long long int) arr_30 [i_13] [i_11] [i_9])), (max((((/* implicit */long long int) 2601764273U)), (-19LL)))))));
                var_56 = ((/* implicit */int) arr_35 [i_9] [i_11] [i_11]);
            }
            var_57 = ((/* implicit */signed char) arr_29 [i_9] [i_11]);
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        {
                            var_58 = ((/* implicit */int) (-(min((var_5), (((/* implicit */long long int) arr_42 [24U] [24U] [i_9 - 1]))))));
                            var_59 = ((/* implicit */signed char) (((~(1939914582246902852LL))) % (((/* implicit */long long int) (+(arr_42 [i_11] [i_11] [i_11]))))));
                            var_60 = var_16;
                            var_61 = min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (unsigned short)57881)))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            var_62 |= ((/* implicit */unsigned short) (signed char)-100);
            var_63 = ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)0), ((signed char)93)))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_27 [i_17] [i_9])), (var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) ((34359738367ULL) == (34359738367ULL)))))))))));
            var_64 = ((/* implicit */unsigned short) min((var_64), (var_11)));
        }
        var_65 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_31 [i_9 - 1] [i_9 + 2] [i_9 - 1]), (arr_31 [i_9 + 1] [i_9 + 1] [i_9 + 1])))) ? (((/* implicit */int) (signed char)-100)) : ((+(((int) arr_49 [(_Bool)1]))))));
        var_66 = ((/* implicit */int) var_9);
    }
    var_67 = ((/* implicit */signed char) max((var_67), (((signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)49528))) ? (((2601764273U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
    var_68 = var_10;
}
