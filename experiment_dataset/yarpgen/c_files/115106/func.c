/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115106
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            var_14 = (~(((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */long long int) (~(arr_4 [i_0] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22422))))))));
            var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)38654))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)15979))))) ? (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (17136349300632244425ULL))) : (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)22423)) ? (var_9) : (((/* implicit */long long int) arr_0 [i_1]))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                arr_11 [i_3] [18U] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)43114))))));
                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13196))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)109)) : (arr_6 [i_0] [i_2]))) : ((~(arr_5 [i_0])))));
                arr_12 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) var_11))))));
                arr_13 [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_3])))) ? ((~(((/* implicit */int) arr_7 [i_0] [i_2])))) : ((~(((/* implicit */int) var_6))))));
                var_17 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551607ULL)))));
            }
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
            {
                arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245)))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))))));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? ((-9223372036854775807LL - 1LL)) : (-8735375609207366822LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43133))))))));
                /* LoopSeq 1 */
                for (short i_6 = 3; i_6 < 23; i_6 += 3) 
                {
                    arr_22 [(unsigned short)24] [(unsigned short)24] [(unsigned short)24] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_0]))))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)3))))))));
                    arr_23 [i_0] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_6])))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_20 [i_6] [i_2] [i_2] [i_2] [i_2] [i_2])) : (8543425672493677464ULL)))));
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1099511627775ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_5] [i_6])))))) : ((+(8ULL)))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (15512592967255793272ULL) : (((/* implicit */unsigned long long int) -1707324616))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) 8543425672493677477ULL)) ? (((/* implicit */unsigned long long int) 1154435649)) : (14962860171432237451ULL))));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 4; i_7 < 24; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            var_22 = (+(((/* implicit */int) (!(((/* implicit */_Bool) -1154435674))))));
                            arr_29 [i_0] [i_0] [i_2] [i_5] [i_5] [i_5] [i_8] = ((((/* implicit */_Bool) (~(arr_18 [i_2] [i_5] [i_5])))) ? ((-(((/* implicit */int) (short)-17376)))) : ((+(((/* implicit */int) var_2)))));
                            arr_30 [i_0] [i_2] [i_5] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8543425672493677458ULL)) ? (25U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_31 [i_0] [i_0] [i_0] [i_2] [(short)18] [i_7 - 4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) : (3307268507U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) arr_25 [i_0] [i_2] [(signed char)22] [i_0])) : (arr_4 [i_0] [i_0])))) : (((((/* implicit */_Bool) 0ULL)) ? (arr_28 [i_0] [i_0] [i_0] [6] [6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (arr_6 [i_5] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (36028796482093056ULL))) : (((/* implicit */unsigned long long int) (~(var_4))))));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0)))))))));
            }
            var_25 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((-(4294967292U)))));
        }
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3483883902277314162ULL)) ? (234881024) : (((/* implicit */int) (unsigned char)178))))) ? (((((/* implicit */_Bool) var_7)) ? (1506603261) : (((/* implicit */int) (short)13619)))) : ((~(((/* implicit */int) (unsigned char)245)))))))));
        var_27 = ((/* implicit */int) (+((~(-8735375609207366822LL)))));
    }
    var_28 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)29702)) : (((/* implicit */int) (unsigned short)43821))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (((((/* implicit */_Bool) 216318806539402134ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)36256)) : (-1116753304)))) ? ((~(8543425672493677473ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (short)15265)) : ((~(((/* implicit */int) (unsigned short)33369)))))))))));
}
