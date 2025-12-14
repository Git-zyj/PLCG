/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132116
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
    var_11 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */short) max((min((arr_1 [i_1 - 3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((_Bool) min((2257025522U), (2037941774U)))))));
                var_13 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_3)), (arr_5 [i_1 - 1] [i_1 - 1]))), (arr_5 [i_1 - 1] [i_1 - 1])));
                var_14 |= ((/* implicit */unsigned char) ((unsigned int) max((18446744073709551608ULL), (((/* implicit */unsigned long long int) -1493348557)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((var_6), (var_4))))));
    var_16 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (short i_2 = 3; i_2 < 19; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_17 += ((/* implicit */int) (signed char)-55);
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_2] [i_3] [i_2] [i_5] = (~(((/* implicit */int) arr_10 [i_2] [i_3])));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_4] [i_2] [i_2]))) == (((((/* implicit */_Bool) 2257025533U)) ? (2037941802U) : (2257025522U)))))), (var_7))))));
                        var_19 = ((/* implicit */_Bool) ((((((((((/* implicit */int) (unsigned short)2)) - (((/* implicit */int) (unsigned char)10)))) + (2147483647))) << (((((((((/* implicit */int) (unsigned char)75)) | (((/* implicit */int) var_3)))) + (14357))) - (20))))) * (0)));
                        var_20 = ((/* implicit */int) (unsigned char)31);
                        arr_19 [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))), (((3285936112318570483ULL) + (((/* implicit */unsigned long long int) 511))))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (2037941774U))), (((/* implicit */unsigned int) 1073217536)))) : (((/* implicit */unsigned int) min((-2044154331), (((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_2 - 2])))))));
                    }
                    for (int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) (~(((min((var_0), (((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_3))))));
                        var_22 = ((/* implicit */unsigned int) min((((((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_21 [i_6] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) (unsigned short)15)))), (((int) arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_6]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) (unsigned char)130);
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((int) arr_13 [i_2] [i_7 - 2] [i_7 - 1]));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_2 - 2] [i_8 + 1])) > (((/* implicit */int) arr_2 [i_2 + 1] [i_8 - 1]))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3] [i_2 + 1])) < (1073217536))))));
                        }
                        var_27 = ((/* implicit */short) max((var_27), ((short)31444)));
                    }
                    for (long long int i_9 = 3; i_9 < 18; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((2513359138U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))));
                        var_29 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_24 [i_2] [i_2 + 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9])) * (((/* implicit */int) (unsigned char)165)))));
                        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((+(((/* implicit */int) var_8))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 4; i_10 < 17; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)130))))))));
                                var_32 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [i_2 - 3] [2LL] [i_3] [i_10] [i_11]))));
                            }
                        } 
                    } 
                    arr_33 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((int) -612895956));
                    var_33 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58584))) < (((((/* implicit */_Bool) (+(var_1)))) ? (((4294967269U) ^ (((/* implicit */unsigned int) arr_28 [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)1052)))))))));
                }
            } 
        } 
    } 
}
