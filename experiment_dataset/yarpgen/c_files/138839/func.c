/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138839
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
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_18)))) ? (-2140019234) : (((/* implicit */int) ((_Bool) var_6)))))) && (((/* implicit */_Bool) min((var_0), (min((((/* implicit */short) (_Bool)0)), (var_6))))))));
    var_21 -= ((/* implicit */int) var_0);
    var_22 = max((min(((-(var_19))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((3784310862U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [(signed char)8] [i_0])))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-992913215) : (((/* implicit */int) var_1)))))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (1361821577U)))) ? (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (var_18) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_4 [i_0])))))));
        }
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)5)), (min((arr_0 [(unsigned char)7]), (((/* implicit */unsigned int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((510656410U), (3784310885U)))) ? (((/* implicit */int) var_0)) : (var_5)))) : (min((((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (3784310859U))), (((/* implicit */unsigned int) ((_Bool) 510656433U)))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 4; i_2 < 8; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 7; i_4 += 3) 
                {
                    {
                        arr_15 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_13 [(short)6] [i_2 + 2] [i_4 + 3])) ? (((/* implicit */int) arr_13 [i_3] [(_Bool)1] [i_4 - 3])) : (var_11))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)213)), (3784310885U)))))))));
                        arr_16 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) var_14);
                        arr_17 [i_0] [i_2] [i_0] [i_4 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_3] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_19)))) ? (var_11) : (((/* implicit */int) ((_Bool) var_2)))))) ? (((/* implicit */int) ((unsigned short) ((_Bool) var_5)))) : (((/* implicit */int) var_1))));
                    }
                } 
            } 
        } 
        arr_18 [0LL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64092))) : (4294967295U)));
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_26 = var_0;
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) -3492145145808706864LL);
                        var_28 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((((/* implicit */int) arr_24 [i_5] [i_6] [i_5] [i_5])) != (((/* implicit */int) var_17))))), (min((((/* implicit */int) arr_29 [i_8] [(_Bool)0] [i_8] [(short)0])), (var_11))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)213)), ((unsigned short)18343)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            var_29 *= ((/* implicit */short) ((var_12) ? ((-(((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) var_8))))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)126))))) : (arr_26 [i_9 - 1] [i_9] [i_9] [i_9]))))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4122398747190914981LL)) ? (((/* implicit */int) arr_19 [i_9 + 1])) : (((/* implicit */int) ((var_5) < (((/* implicit */int) var_8))))))))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_31 [i_8] [i_8] [i_8] [2] [i_9] [i_9] [i_9 + 1])) : (((/* implicit */int) arr_31 [i_7] [i_9 + 1] [i_9 - 1] [i_9] [i_9] [i_9] [i_9 - 1])))))));
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((((/* implicit */int) arr_30 [(short)4] [i_6] [(short)4] [(short)4] [i_9])) | (((/* implicit */int) var_6))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 1; i_10 < 8; i_10 += 3) 
                        {
                            var_34 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 3])) < (((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5]))))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_12))))) : (arr_25 [i_5] [i_6] [i_7] [i_5])));
                            var_36 = (!(((/* implicit */_Bool) ((3784310886U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            arr_37 [5] [(_Bool)0] [i_5] [i_7] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (-1583251319) : (134209536)))) ? (var_3) : (((/* implicit */int) ((((/* implicit */int) arr_34 [i_5] [(unsigned char)5] [(unsigned char)10] [9U])) != (var_11)))));
                        }
                    }
                } 
            } 
        } 
        var_37 = ((signed char) ((int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_12)))));
        arr_38 [i_5] = ((/* implicit */int) var_4);
    }
    var_38 = ((/* implicit */int) ((unsigned int) var_11));
}
