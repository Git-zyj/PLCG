/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150496
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
    var_10 = max((var_6), (max((((/* implicit */unsigned int) ((short) var_8))), (((unsigned int) var_0)))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) 5232987197165711642ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)11))))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)240)), (-1942605856))))))));
    var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((5232987197165711635ULL) < (18446744073709551610ULL))))) : (((((/* implicit */_Bool) 9948239138095185569ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] [4] = ((/* implicit */signed char) min((((/* implicit */int) min((var_8), (arr_8 [i_0] [i_0 + 1] [i_1 - 1] [i_1 + 2])))), (((((((/* implicit */_Bool) 19LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) >> (((((unsigned long long int) var_4)) - (9112883914936691439ULL)))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(max((1942605857), (((/* implicit */int) var_2))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)69)) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((arr_2 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) : (var_1))))))));
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) 623661322U)), (-5LL)))));
                }
                arr_14 [i_0] [i_0] = (!(((/* implicit */_Bool) (signed char)-81)));
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-41)) ? (var_9) : (var_9)))))) ? (((((/* implicit */_Bool) var_5)) ? (10424948012313026175ULL) : (((/* implicit */unsigned long long int) var_9)))) : (max((((/* implicit */unsigned long long int) ((unsigned int) (signed char)66))), (((((/* implicit */_Bool) 15850229608854022031ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))) : (var_4)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((var_7) / (((/* implicit */unsigned long long int) arr_6 [i_0 - 1]))));
                                arr_27 [i_1] [i_0] [i_1] [i_0] [i_1] [i_1] = arr_4 [i_3] [i_3 - 3] [i_3];
                                arr_28 [i_0] [i_0] [i_0] [10ULL] [i_0] [i_0] = ((/* implicit */signed char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_29 [i_0] [i_0] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned long long int) arr_20 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2])) : (arr_4 [i_0 + 1] [i_1 + 1] [i_3 - 1])));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 9)))) : (var_6)));
                    arr_31 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) var_6)));
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_3 + 1] [i_1] [i_1] [i_1])) ? (4294967278U) : (((/* implicit */unsigned int) arr_5 [i_3 + 1] [i_1 + 3] [i_0 - 1]))));
                    arr_33 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_0 - 1] [i_1 - 1] [i_3 + 1] [i_1 - 1] [i_1 - 1]);
                }
                /* vectorizable */
                for (unsigned char i_6 = 3; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    arr_36 [8LL] [8LL] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-90))));
                    arr_37 [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2596514464855529585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    arr_38 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4184131894841049442LL)) ? (arr_34 [i_1 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202)))));
                    arr_39 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_0]))));
                    arr_40 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -8169125649794213168LL)) + (((((/* implicit */_Bool) var_1)) ? (var_3) : (var_0)))));
                }
                for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    arr_44 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
                    arr_45 [4ULL] &= ((/* implicit */int) ((min((((unsigned long long int) 3705701805633399395LL)), (((/* implicit */unsigned long long int) (signed char)23)))) | (((((/* implicit */_Bool) 3705701805633399392LL)) ? (((((/* implicit */_Bool) (signed char)-101)) ? (3267341294569522317ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))) : (var_0)))));
                    arr_46 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) (signed char)-23)))) : (((/* implicit */int) (signed char)-19)))) : (((/* implicit */int) ((((/* implicit */int) arr_42 [i_7 - 1])) == (((/* implicit */int) var_8)))))));
                }
            }
        } 
    } 
}
