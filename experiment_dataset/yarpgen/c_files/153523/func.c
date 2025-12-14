/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153523
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_0))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1))))) : (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_16))))))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-127))))) : (min((((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) : (var_11))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-93)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_23 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_17)), (min(((-(var_11))), (((/* implicit */unsigned long long int) (-(1314835745U))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (7942780308451604392LL) : (((/* implicit */long long int) 223900357U))));
            arr_5 [i_0] [i_0] [i_1] = (-(var_11));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((int) var_6)) ^ ((~(((/* implicit */int) var_15))))));
                arr_9 [i_0] = (~(((/* implicit */int) (signed char)-58)));
                /* LoopSeq 4 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    arr_12 [i_0] [15ULL] [i_0] [i_1] [10] [i_0] = ((/* implicit */signed char) (~(2145546625U)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 4) 
                    {
                        arr_15 [i_4] [i_2] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_6)));
                        var_25 |= ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) var_1)))));
                    }
                    for (int i_5 = 3; i_5 < 23; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) var_17);
                        arr_20 [18ULL] [18ULL] [i_0] [i_3] [18ULL] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-48)));
                    }
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_6] = ((/* implicit */signed char) -7942780308451604393LL);
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1463109397)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
                        arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) 5326295077445519286ULL);
                        arr_25 [i_0] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) 613587872))) : (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (_Bool)1))))));
                    }
                    var_29 = ((/* implicit */short) (+(((unsigned long long int) var_7))));
                    arr_26 [i_0] [i_1] [i_1] [i_3] |= ((/* implicit */_Bool) var_18);
                }
                for (signed char i_7 = 4; i_7 < 23; i_7 += 4) 
                {
                    arr_30 [(short)11] [(_Bool)1] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)9947))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (var_18) : (((/* implicit */int) var_19))));
                    arr_31 [i_0] [i_0] [0U] [i_2] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2145546618U))));
                    var_31 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-127))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    var_32 = ((/* implicit */unsigned short) var_9);
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))))));
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((unsigned short) 4280562988009729676ULL)))));
                    var_35 = ((/* implicit */int) 2306877989U);
                    var_36 = ((/* implicit */_Bool) max((var_36), ((!(((/* implicit */_Bool) var_14))))));
                }
                for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_19))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) var_1))));
                    var_39 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                    var_40 *= ((/* implicit */unsigned long long int) ((137371844608LL) ^ (((/* implicit */long long int) 389536329U))));
                }
                var_41 = ((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (signed char)113))));
                var_42 |= ((/* implicit */int) (+(9695888356936558920ULL)));
            }
            for (signed char i_10 = 3; i_10 < 22; i_10 += 3) 
            {
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((((/* implicit */int) var_13)) ^ (var_18)))));
                var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3905430967U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)39))) : (-7942780308451604384LL)));
            }
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            var_45 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))));
            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            var_47 = ((/* implicit */int) (+((+(var_8)))));
        }
    }
    for (long long int i_12 = 2; i_12 < 24; i_12 += 1) 
    {
        var_48 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
        arr_45 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) 13521880052725804699ULL)))))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!((_Bool)0)))), (((signed char) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_18))))))))));
    }
}
