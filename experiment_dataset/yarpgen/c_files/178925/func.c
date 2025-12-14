/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178925
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (0ULL))), (((/* implicit */unsigned long long int) var_7))))) ? (max((((/* implicit */unsigned long long int) -576670569)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((_Bool) var_14))), (((short) var_0))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) max((arr_1 [9ULL]), (arr_1 [i_0])))) + (((/* implicit */int) arr_1 [i_0 + 1])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((signed char) var_5));
                        var_17 = ((/* implicit */unsigned short) ((long long int) (+(((long long int) -323814491506919107LL)))));
                        arr_11 [i_0] [i_0] [i_0] [(unsigned short)14] [(_Bool)1] = ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((((/* implicit */unsigned long long int) 323814491506919106LL)) > (0ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)127)) == (arr_9 [i_0]))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 323814491506919090LL)))))));
                        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((-579643481) != ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_0] [(unsigned short)4])))))))));
                        var_19 = ((/* implicit */_Bool) max((-323814491506919117LL), (((/* implicit */long long int) min((arr_7 [i_0] [i_1]), (((/* implicit */unsigned short) ((short) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0 + 1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (2683841936U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)0]))) : (((unsigned int) 323814491506919106LL)))));
        var_20 |= ((/* implicit */_Bool) (-((+((-(((/* implicit */int) (_Bool)1))))))));
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) * (((((_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -323814491506919116LL)))))) : (var_3)))));
        var_21 = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29360)) ^ (((/* implicit */int) (unsigned short)36175))))) / (((unsigned int) arr_13 [i_4])))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 3; i_5 < 16; i_5 += 4) 
        {
            arr_21 [i_4] = ((/* implicit */unsigned int) (+(arr_18 [i_4] [(_Bool)1] [i_4])));
            arr_22 [11LL] [i_4] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 - 3] [i_5 - 3])))));
            var_22 = ((/* implicit */long long int) (((-(((/* implicit */int) var_4)))) / (((/* implicit */int) var_12))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                arr_27 [i_4] [i_4] [i_4] = var_12;
                arr_28 [i_4] [i_5] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_11))))))))), (((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4] [i_4] [i_6]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55656))) + (arr_18 [i_4] [i_4] [(_Bool)1]))))));
                arr_29 [i_5] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13)))) ? (min((arr_19 [i_4]), (((/* implicit */unsigned long long int) var_6)))) : (arr_18 [i_5 + 1] [i_5] [i_5])))));
                arr_30 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((unsigned int) max((((/* implicit */int) arr_20 [i_4])), (var_0))))));
            }
            arr_31 [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_25 [0U] [0U] [i_5])) : (((/* implicit */int) (signed char)-30)))) > (var_0)))), (max((arr_23 [i_4] [i_4] [1ULL]), (((/* implicit */unsigned int) var_4))))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((unsigned long long int) var_3));
            arr_35 [i_4] [i_7] [11ULL] = ((/* implicit */int) (unsigned short)43205);
            var_24 = ((/* implicit */_Bool) var_14);
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_38 [i_8] [i_8] = ((/* implicit */_Bool) arr_0 [i_8]);
        arr_39 [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((~(7433530838243407276ULL))) >> (((2683841936U) - (2683841874U))))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [14U] [i_10] [i_9] [i_8])) ? (var_2) : (((/* implicit */long long int) arr_0 [i_9]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) max((arr_37 [i_8]), (((/* implicit */unsigned long long int) arr_17 [i_8] [(_Bool)0] [i_10])))))) ? (((((/* implicit */_Bool) ((unsigned short) 323814491506919112LL))) ? ((~(arr_44 [i_9]))) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) arr_4 [i_9] [3]))))))) : ((~(6672019073769865049ULL)))));
                        arr_47 [i_8] [i_8] [(_Bool)0] [i_8] [i_8] = ((((unsigned int) arr_8 [i_9] [i_9] [i_9 + 2] [i_9 - 1])) != (((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9 - 1] [i_9 + 2])) ? (arr_8 [(short)1] [(short)1] [i_9 - 1] [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                        var_27 = ((/* implicit */int) arr_7 [i_10] [i_11]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                arr_53 [i_8] = ((unsigned int) ((unsigned long long int) var_1));
                                var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (_Bool)1)))))) != (((((/* implicit */_Bool) arr_49 [i_8] [i_12 - 2])) ? (arr_23 [i_8] [i_12 - 2] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29422))) < (1413110002150445366ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 2; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_30 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 585672424)))))));
                                var_31 = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) % (((/* implicit */int) var_14)))) >> (((/* implicit */int) max((arr_36 [i_15 + 1]), (arr_36 [i_15 - 1]))))));
                                var_32 = ((/* implicit */unsigned int) (unsigned short)5864);
                                arr_59 [i_10] [i_8] [i_10] [(short)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) var_1)))) ? (((arr_42 [i_8] [(unsigned char)5]) - (((/* implicit */unsigned int) -1935041568)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_8])))))) ? (max((arr_8 [15ULL] [i_9 - 1] [i_15 + 1] [4ULL]), (((/* implicit */unsigned int) (short)32405)))) : (((((_Bool) arr_56 [i_9] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_19 [i_14])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_40 [i_10] [i_9] [i_8])) : (((/* implicit */int) var_12)))))))) : (((/* implicit */int) var_9))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) min((arr_18 [7] [i_8] [i_8]), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 524160U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [(_Bool)1] [(_Bool)1] [i_8] [i_8]))) : (var_2))))))));
        arr_60 [i_8] = var_8;
    }
    var_35 = ((/* implicit */signed char) ((var_10) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6606)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)(-127 - 1)))))))))));
    var_36 = ((/* implicit */unsigned int) (_Bool)1);
}
