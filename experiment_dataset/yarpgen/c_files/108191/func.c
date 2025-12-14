/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108191
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [(short)15] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) ((var_9) << (((((((/* implicit */int) (short)-30769)) + (30772))) - (2)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned char)192)) - (182)))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) (unsigned short)8396)) : (((/* implicit */int) var_1))))))))));
        var_11 &= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((-194162357) % (((/* implicit */int) (unsigned short)65532))))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -614841398)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-1))))))))));
        var_13 = ((/* implicit */long long int) (((~(4113719590906543742LL))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_14 *= ((/* implicit */unsigned short) (+(((arr_6 [i_1] [i_1]) ? (var_0) : (((/* implicit */int) var_7))))));
        arr_8 [15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)32))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)8))))) : (((((/* implicit */_Bool) (short)15325)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))))) : (min((((/* implicit */int) arr_7 [i_1])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (var_0)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_16 [i_4] [i_1] [i_2] [i_2] [i_1] [(signed char)10] &= ((/* implicit */unsigned long long int) (~(min(((((_Bool)1) ? (((/* implicit */long long int) 1024204446)) : (arr_11 [(_Bool)1] [(_Bool)1] [i_3]))), (((/* implicit */long long int) ((var_5) + (((/* implicit */int) var_1)))))))));
                        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */int) ((16340861652292459979ULL) == (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) (_Bool)1)))))))) / ((+(((/* implicit */int) arr_7 [i_3 - 1]))))))));
                        arr_17 [i_4] [i_2] [i_3 - 1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(2047)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)0)), (var_6))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_18 [i_1] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((16646144), ((~(((/* implicit */int) (unsigned short)0))))))) != (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) min((1159963593), (((/* implicit */int) (unsigned char)201))))) : (((var_10) ? (((/* implicit */long long int) var_9)) : (arr_11 [i_3] [i_1] [i_1])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        arr_22 [i_5] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) max(((short)531), (max((((/* implicit */short) (_Bool)1)), ((short)-2)))));
                        var_16 = ((/* implicit */short) min(((~(var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)11))))))));
                        arr_23 [i_1] |= ((/* implicit */int) (unsigned short)9793);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        arr_28 [i_3 - 1] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (9252276326965713449ULL)));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 20; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (_Bool)1))))))));
                            arr_31 [i_1] |= ((/* implicit */_Bool) (+(5839582873876648492LL)));
                        }
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 2) /* same iter space */
                    {
                        arr_34 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) (unsigned char)60)) ? (((unsigned long long int) arr_5 [14] [i_8])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533)))))) ? (((/* implicit */unsigned long long int) ((int) arr_29 [i_3 - 1] [i_2] [i_2] [i_3 - 1] [i_2] [i_1] [i_1]))) : (((arr_4 [i_3 - 1]) - (((/* implicit */unsigned long long int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                        arr_35 [i_1] [i_2] [i_2] [i_8] = ((/* implicit */signed char) (unsigned char)43);
                    }
                    arr_36 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (12444718299616790603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 1 */
                    for (short i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                        {
                            arr_41 [i_1] [i_2] [i_2] [i_3] [i_9] [i_10] [i_1] &= ((/* implicit */_Bool) var_7);
                            arr_42 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (short)19383);
                            arr_43 [i_2] = ((/* implicit */short) (((_Bool)1) ? (((658743746) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)6))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((arr_12 [16ULL]) ? (arr_25 [i_1]) : (((/* implicit */unsigned long long int) -1))))) ? (((((var_0) + (2147483647))) >> (((2305843009213693952ULL) - (2305843009213693923ULL))))) : (((/* implicit */int) arr_40 [i_1] [i_11] [i_3] [i_11] [i_9 + 1]))))));
                            var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9)) ? (arr_44 [(_Bool)1] [i_3 - 1] [(unsigned short)22] [(unsigned short)22] [i_3 - 1] [i_3 - 1] [i_1]) : (((((/* implicit */_Bool) var_1)) ? (var_9) : (var_9)))));
                            arr_47 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-10223)) == (var_0)))) <= ((-(((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_1]))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_9 - 1] [i_3 - 1])) % (((/* implicit */int) (signed char)10))));
                        }
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-5839582873876648493LL)))) - (((((/* implicit */_Bool) -1119506776023935372LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_2])))))));
                            arr_52 [(unsigned char)19] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1384898350)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)7168))))));
                            arr_53 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                        }
                        var_22 = ((((/* implicit */int) arr_30 [i_2] [i_9] [i_9] [i_2] [i_2])) + (((((/* implicit */_Bool) (short)10222)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (_Bool)1)))));
                        var_23 |= ((/* implicit */long long int) (+(4858309450486613302ULL)));
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) (!(var_8)))) << (((var_9) - (1006449714)))))));
}
