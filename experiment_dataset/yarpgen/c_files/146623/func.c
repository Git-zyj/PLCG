/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146623
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1344))) & (14522058298489778169ULL))), (((/* implicit */unsigned long long int) 2920741832U)))) >= (((14522058298489778169ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                arr_11 [i_0] [i_2] = ((/* implicit */_Bool) (+(arr_8 [i_1 + 1] [i_0 - 1])));
                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_10);
            }
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                arr_15 [i_0] = ((/* implicit */unsigned int) ((14522058298489778171ULL) > (((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [i_1 + 1] [i_3])))));
                arr_16 [8LL] [i_0 - 1] [i_0] [8LL] &= ((/* implicit */unsigned short) var_1);
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 17; i_4 += 4) 
                {
                    var_16 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 14522058298489778164ULL)))))), (min((((int) arr_5 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (short)-1872)) : (((/* implicit */int) (signed char)95))))))));
                    var_17 = ((/* implicit */short) 16862265797110633575ULL);
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 4294967281U)) % (arr_4 [i_0] [i_0] [i_0]))) + ((-(arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 1])))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_9 [i_1] [i_0] [i_1 - 1])) >= (14522058298489778168ULL)));
                }
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) max((arr_9 [i_0 - 1] [i_1] [i_0 - 1]), (((/* implicit */unsigned int) var_13))))) - (var_14)))))));
            }
            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_26 [8U] [i_1] [i_0]))) ? (((/* implicit */int) (unsigned char)25)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (192669887)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        arr_33 [i_0] [i_1 - 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_30 [i_0 - 1] [i_1 - 1]) : (arr_30 [i_0 + 1] [i_1 - 1])));
                        arr_34 [i_0] [(short)2] [i_6] [i_7] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1 - 1] [i_7] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)91))));
                        arr_35 [i_0] [i_0] [i_6] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) var_3));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_0] [i_6] [i_0]))));
                    arr_39 [i_9] [i_9] [i_0] [12U] [i_9] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) 4294967281U)) + (14522058298489778169ULL))));
                }
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_1] [i_1])) + (((/* implicit */int) arr_31 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1] [i_1] [i_1]))))), (((((/* implicit */_Bool) (unsigned short)32704)) ? (14522058298489778153ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55)))))));
            }
        }
        for (short i_10 = 1; i_10 < 17; i_10 += 1) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_7)))));
            arr_42 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) ((signed char) 11ULL));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) (-(1808818237U)));
            arr_45 [i_0] [i_0] [i_11] = ((/* implicit */long long int) (unsigned char)32);
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))));
            /* LoopSeq 4 */
            for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 4) /* same iter space */
            {
                arr_48 [i_0] [i_12] [i_11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) > (((/* implicit */int) ((unsigned char) -9034406720712033654LL)))));
                var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))));
            }
            for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    var_27 = ((long long int) arr_49 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]);
                    arr_56 [i_0] = (!(var_2));
                }
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) <= (-1920462081112435258LL))))));
                arr_57 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_11] [i_11] [i_0] [i_13 + 1])) / (((/* implicit */int) var_8))));
            }
            for (long long int i_15 = 1; i_15 < 16; i_15 += 3) 
            {
                arr_61 [i_11] [i_11] [i_0] = ((/* implicit */unsigned int) 201526770965684571ULL);
                var_29 = ((/* implicit */_Bool) ((arr_4 [i_0 + 1] [i_0 + 1] [i_15 - 1]) | (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                arr_62 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_15]);
            }
            for (short i_16 = 2; i_16 < 16; i_16 += 2) 
            {
                arr_66 [i_0 - 1] [i_0] [i_16 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))));
                    var_31 = ((((/* implicit */int) (signed char)64)) - (((/* implicit */int) (unsigned char)186)));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 2; i_18 < 15; i_18 += 1) 
                {
                    arr_75 [i_0] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (!(((/* implicit */_Bool) 3923710283U)))))));
                    var_32 = ((/* implicit */_Bool) arr_59 [i_0 - 1] [3LL] [i_0] [i_0 - 1]);
                    var_33 = ((/* implicit */signed char) ((_Bool) arr_20 [i_0] [i_11] [i_16]));
                    arr_76 [i_0] [i_11] [i_11] [i_16] [i_0] [i_18 + 3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -479693105385180594LL)))) && (((/* implicit */_Bool) arr_63 [i_18 + 1] [i_18 + 3] [i_18 - 1]))));
                }
                for (int i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    var_34 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_0 - 1] [i_16] [i_16 + 2] [i_16 - 1])) - (((/* implicit */int) arr_23 [i_0 + 1] [i_19] [i_16 + 1] [i_16 + 2]))));
                    arr_81 [(signed char)17] [i_11] [i_0] [i_19] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)7))))));
                }
                arr_82 [i_0] [i_11] [i_0] = ((/* implicit */long long int) var_4);
            }
            arr_83 [i_0] = ((/* implicit */long long int) 3924685775219773446ULL);
        }
        arr_84 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 2433520283755345473LL))));
        /* LoopSeq 1 */
        for (int i_20 = 0; i_20 < 18; i_20 += 4) 
        {
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_64 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
            var_36 -= (-(max((1U), (((/* implicit */unsigned int) (_Bool)1)))));
        }
    }
    var_37 &= ((/* implicit */int) min(((short)7), (((/* implicit */short) var_4))));
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4783414387225446678LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4533259982615329852LL)) ? (10639758564537440343ULL) : (((/* implicit */unsigned long long int) -479693105385180620LL))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
}
