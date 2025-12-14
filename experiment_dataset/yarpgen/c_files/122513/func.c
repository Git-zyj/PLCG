/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122513
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
    var_10 &= ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned long long int) var_7)), (var_3))), (((/* implicit */unsigned long long int) var_4)))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (max((6311425915751008664LL), (((/* implicit */long long int) var_7)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) << (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_12 ^= ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) ((arr_12 [i_0] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_1])))));
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 18446744073709551615ULL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) var_4);
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_18 [i_6] [8ULL] [i_6] [i_6] [i_1] = ((/* implicit */unsigned int) var_3);
                            arr_19 [i_1] [i_5] [i_2] [i_0] [i_1] = -6311425915751008665LL;
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */unsigned long long int) arr_13 [6U] [6U]);
            }
            for (unsigned short i_7 = 1; i_7 < 19; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 6311425915751008673LL)))) > (max((((/* implicit */unsigned long long int) 5019106444021191898LL)), (var_9))))))) : (((((/* implicit */_Bool) arr_10 [(unsigned char)4])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6))) : (((/* implicit */unsigned long long int) min((-6311425915751008664LL), (((/* implicit */long long int) (_Bool)1)))))))));
                            var_19 ^= ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (var_4))))) : (var_9)))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((min((6311425915751008665LL), (-3LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7)))))))) <= (max((max((((/* implicit */unsigned long long int) var_5)), (var_9))), (((/* implicit */unsigned long long int) (+(var_4))))))));
                    arr_29 [i_1] [i_1] [i_1] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) & (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_5)))))))), (var_6)));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_32 [i_0] [i_1] [i_1] [(signed char)20] [i_11] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_4)))) ? (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                        var_22 ^= ((/* implicit */unsigned char) ((long long int) 31368096031876861ULL));
                        arr_33 [i_0] [(signed char)8] [(_Bool)1] [i_0] [i_1] = ((/* implicit */long long int) var_6);
                        var_23 = ((/* implicit */unsigned short) var_3);
                    }
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_4)))), (((18446744073709551609ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))))));
                }
                arr_34 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_0] [i_1]));
            }
            for (unsigned short i_12 = 1; i_12 < 20; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_2))));
                    var_26 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    var_27 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                }
                var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))), (var_7)));
                arr_42 [i_1] [i_1] [i_1] [10U] = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_1]);
            }
            var_29 = ((/* implicit */unsigned int) max((var_29), (min((max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_5)), (var_2)))), (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) max((((unsigned char) 4035225266123964416ULL)), (((/* implicit */unsigned char) var_8)))))))));
            arr_43 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((var_3) << (((((unsigned long long int) var_7)) - (4227006920ULL))))));
            arr_44 [i_1] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (var_4)))), (var_3)))));
            arr_45 [i_1] [i_0] [i_1] = max((var_6), ((((~(var_3))) - (max((((/* implicit */unsigned long long int) var_2)), (var_3))))));
        }
    }
    for (unsigned long long int i_14 = 3; i_14 < 7; i_14 += 3) 
    {
        var_30 ^= (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))));
        arr_49 [i_14] [i_14 - 2] = max((min((((/* implicit */unsigned long long int) (~(arr_21 [i_14 - 3] [(signed char)2])))), (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (var_6));
    }
}
