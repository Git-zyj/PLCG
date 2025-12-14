/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115150
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
    var_11 |= ((/* implicit */int) (_Bool)1);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((var_1) % ((-(var_1)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [4ULL] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                arr_8 [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_0);
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12510)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)3))))) : (((arr_7 [i_0] [(short)4] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-3916))))))))))));
                var_14 = ((/* implicit */unsigned char) (signed char)-70);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)3915))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_14 [i_3] [(_Bool)1] [i_2] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (4154172175U))))));
                        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((short) (_Bool)1)))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 4] [i_3] [i_2] [i_2] [i_2]))) : (arr_2 [i_2]))))));
                        arr_15 [i_0] [i_0] [i_0] [(unsigned char)11] [i_0] = ((/* implicit */unsigned int) ((((18446744073709551598ULL) << (((778842527356504635ULL) - (778842527356504621ULL))))) & (((/* implicit */unsigned long long int) ((long long int) (short)-1)))));
                        var_18 = ((/* implicit */unsigned char) ((unsigned int) (short)-3929));
                    }
                    arr_16 [i_2] = ((/* implicit */_Bool) 17681802695029074004ULL);
                    arr_17 [i_3] [6] [6] [6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    arr_21 [i_5] [i_5] [5] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_2 [i_2]))) >> (max((((/* implicit */int) var_7)), (arr_3 [i_1] [i_2] [i_5])))));
                    var_19 = ((/* implicit */unsigned short) 2251524935778304ULL);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (_Bool)1)))))))) || (((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -1954623622))))) >= ((+(((/* implicit */int) arr_12 [i_1])))))))))));
                }
                for (short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [i_0] [i_2] [(short)10] = (+(max((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_20 [i_0] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_1] [0U] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) (signed char)105))))))));
                    arr_26 [i_0] [i_2] [i_1] [11LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((3683039203U), (((/* implicit */unsigned int) (short)7603))))) + (arr_2 [i_6])));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        arr_29 [i_0] [(_Bool)1] [i_1] [i_2] [i_6] [i_7] &= ((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)-31123)));
                        var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(177454897)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_0] [i_0] [(short)8] [i_2] [i_6] [(_Bool)1])))));
                    }
                }
            }
            var_22 += ((/* implicit */_Bool) ((unsigned char) var_3));
        }
    }
    var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)1))))) : (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_7)))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) -2215002833001519758LL))) - (114))))))));
    var_24 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)31109)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
}
