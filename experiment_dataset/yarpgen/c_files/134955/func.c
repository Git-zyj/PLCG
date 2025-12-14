/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134955
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_3 [(unsigned short)3] = ((((/* implicit */_Bool) ((unsigned short) 1487103958U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_1 [i_0]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((1366491874U) == (((/* implicit */unsigned int) 2026312376)))))))))) : ((~(2928475415U))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27025)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))) : (1366491880U)))) ? (((((/* implicit */_Bool) var_7)) ? (1672400242U) : (455392717U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2387493253U) < (arr_0 [i_0] [(unsigned short)10])))))))));
        arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3445)) || (((/* implicit */_Bool) arr_2 [i_0 + 1]))))), (((((/* implicit */_Bool) ((arr_1 [i_0 + 1]) + (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) : (var_5)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_13 [i_0 - 2] [i_1] [i_0 - 2] [i_0] [i_0 - 2] = (+(((unsigned int) 4294967295U)));
                        arr_14 [7U] [i_1] [7U] [i_1] [i_3] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)24581)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) % (3456428461U)))) ? (max((((/* implicit */unsigned int) (unsigned short)6609)), (3978831454U))) : (arr_0 [i_0 - 1] [i_0 + 1])))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 2387493277U)) ? (((arr_8 [i_0] [i_1] [i_2] [i_3]) << (((arr_10 [i_1] [i_1] [i_0]) - (3229334026U))))) : (min((1366491880U), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2])))))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) (+(((arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 1]) % (3978831456U)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_28 [i_7 - 2] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) arr_24 [i_4]);
                            arr_29 [0U] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - ((-(((((/* implicit */int) (signed char)124)) << (((268173312) - (268173307)))))))));
                            arr_30 [i_4] = (i_4 % 2 == zero) ? (((((/* implicit */_Bool) ((((arr_27 [i_7 - 1] [i_7 - 1] [i_4] [7]) + (2147483647))) << (((((/* implicit */int) (signed char)44)) - (44)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) -3)), (316135847U))) != (((/* implicit */unsigned int) arr_27 [i_4] [i_5] [i_4] [i_7])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_20 [i_4] [i_4])) : (3829751637U))))) : (((((/* implicit */_Bool) ((((((arr_27 [i_7 - 1] [i_7 - 1] [i_4] [7]) - (2147483647))) + (2147483647))) << (((((/* implicit */int) (signed char)44)) - (44)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) -3)), (316135847U))) != (((/* implicit */unsigned int) arr_27 [i_4] [i_5] [i_4] [i_7])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_20 [i_4] [i_4])) : (3829751637U)))));
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned short)57345)) ? (arr_18 [i_4] [i_7 - 2]) : (arr_18 [i_4] [i_7 - 1]))));
                        }
                    } 
                } 
                arr_32 [i_5] = ((/* implicit */int) var_4);
                arr_33 [i_4] = ((/* implicit */signed char) ((((arr_26 [i_4] [i_5] [i_5]) / (((/* implicit */unsigned int) var_9)))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_5]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        for (unsigned int i_9 = 2; i_9 < 16; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                {
                    arr_40 [i_8] [i_10] = ((/* implicit */signed char) max((max((2332950727U), (((/* implicit */unsigned int) 2)))), (((/* implicit */unsigned int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 4; i_12 < 19; i_12 += 3) 
                        {
                            {
                                arr_48 [i_9] = max((min((((((/* implicit */_Bool) 3524874334U)) ? (((/* implicit */unsigned int) arr_45 [i_8] [i_9] [i_10] [i_11] [i_12])) : (2928475422U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2487244429U))))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)45)), (((unsigned short) 23))))));
                                arr_49 [i_12] [i_9] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 127U)) ? (3041117011U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((arr_35 [i_12]) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) 12582912)))), (((/* implicit */unsigned int) ((1253850285U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70)))))));
                                arr_50 [i_8] [i_8] [i_9 + 4] [i_8] [i_8] [i_9] [i_12 - 2] = var_6;
                            }
                        } 
                    } 
                    arr_51 [i_9] = ((/* implicit */signed char) (~((-(max((1560005317U), (((/* implicit */unsigned int) (signed char)-101))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            {
                arr_56 [i_13] [i_14] = ((/* implicit */unsigned int) var_9);
                arr_57 [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) max((min((3U), (min((12U), (((/* implicit */unsigned int) (unsigned short)34523)))))), (((/* implicit */unsigned int) (unsigned short)12837))));
                arr_58 [3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)44245)) ? (((/* implicit */unsigned int) -1384606016)) : (550866581U)));
                arr_59 [i_13] [i_13] [i_13] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) arr_52 [i_13] [i_13])) : (1253850269U)))))));
                /* LoopNest 2 */
                for (signed char i_15 = 3; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        {
                            arr_66 [i_13] [i_14] [i_14] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_15 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_15 + 1]))) : (1560005317U))))));
                            arr_67 [i_13] [i_13] [5U] [i_13] = ((/* implicit */unsigned short) ((int) max(((unsigned short)15), ((unsigned short)32802))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_10 = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), (var_7)));
}
