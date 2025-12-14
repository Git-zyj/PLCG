/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11561
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_6)), (var_9)))) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)55846)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)172)) || ((_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
    var_18 = ((/* implicit */signed char) var_11);
    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) var_10)) ? (-2066578440450184293LL) : (((/* implicit */long long int) (-(max((-460799083), (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) max((((((9223372036854775793LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) 549472556)) : (1456909891U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned int) ((_Bool) min((arr_3 [i_2 + 1]), (((/* implicit */long long int) (_Bool)1)))));
                            var_21 ^= ((/* implicit */int) (unsigned short)52452);
                            var_22 = ((/* implicit */signed char) (unsigned short)37191);
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) arr_1 [i_1]);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)-66))) ? (((14887598583326704656ULL) & (((/* implicit */unsigned long long int) (-(arr_13 [(unsigned char)4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) 15393162788864LL))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) min((arr_3 [i_0]), (((/* implicit */long long int) var_16))));
                            var_26 ^= ((/* implicit */unsigned int) ((unsigned char) min(((unsigned char)18), (((/* implicit */unsigned char) (_Bool)1)))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_3] [i_3] [i_2 - 2] [1LL] [i_2 - 1])), ((unsigned short)22849)))) : (((((/* implicit */_Bool) (short)19582)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)42))))))) ? (arr_7 [i_3] [i_3] [i_3] [0U] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))));
                            var_28 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1] [(_Bool)1] [i_3] [i_6]))) < (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_2] [i_3 - 2] [i_6] [i_6] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_13 [18ULL] [i_1] [i_2] [i_3] [(short)8] [i_3 - 1] [i_2]))) : (((/* implicit */int) ((unsigned short) var_0)))))) : ((+(arr_3 [i_2])))));
                        }
                        arr_16 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) min((((var_13) ? (((/* implicit */int) (unsigned short)28344)) : (((/* implicit */int) arr_14 [(signed char)13] [i_0 + 2] [i_3] [i_3 + 1] [i_2] [i_2 + 2] [i_3])))), (min((576215369), (((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_2 - 1] [i_3 + 1] [i_0] [i_2 + 2] [i_1]))))));
                        var_29 = ((/* implicit */int) arr_3 [i_2 - 4]);
                    }
                } 
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (signed char)46))));
        arr_18 [i_0] = ((/* implicit */unsigned char) ((long long int) (((+(arr_4 [i_0]))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_30 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_7]))));
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) 3411270569U))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_0 [i_8]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))))))));
        var_33 = arr_7 [i_8] [i_8] [i_8] [i_8] [i_8] [10LL];
    }
}
