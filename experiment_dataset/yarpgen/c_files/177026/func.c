/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177026
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [i_0 - 2] = (!(((/* implicit */_Bool) (short)-13341)));
        arr_3 [(signed char)9] [14U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_1)))))));
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [11]))))) || (((/* implicit */_Bool) min(((unsigned char)56), ((unsigned char)52))))));
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_11 = ((/* implicit */_Bool) var_1);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), (arr_4 [i_1])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) & (3505046947243240874LL))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_3 = 4; i_3 < 10; i_3 += 3) 
        {
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_3] [i_3 + 2])), ((short)63)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28)) && (((/* implicit */_Bool) (unsigned char)228))))) : (((/* implicit */int) min((arr_1 [i_3] [i_3 - 4]), (arr_1 [i_3] [i_3 - 4]))))));
            var_13 = arr_7 [i_3 - 4];
            /* LoopNest 3 */
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_4 - 1] [i_4 - 1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((-4102126648621288917LL) / (((/* implicit */long long int) min((3U), (((/* implicit */unsigned int) var_5)))))))) : (((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (var_6)))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_9))))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)32748)) && (((/* implicit */_Bool) (short)-23849)))))));
                        }
                    } 
                } 
            } 
            var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_20 [i_3 - 2] [(unsigned char)2] [i_3] [i_3 + 2] [i_2]) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_7 [i_2]))))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)16382), ((short)-26341))))) >= (2905183280625259075LL)))) : (((((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 1])) - (var_2)))));
        }
        var_17 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_2] [i_2])) || (((/* implicit */_Bool) var_2)))) ? (5277731329795471352ULL) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((var_9) && (((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) (unsigned short)12288)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) arr_18 [i_2] [i_2])))))))));
    }
    for (short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
    {
        arr_23 [0LL] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_9 [i_7] [i_7]), (arr_9 [i_7] [i_7])))) ? (((arr_12 [i_7]) + (((/* implicit */int) (unsigned short)53903)))) : (((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-1))))));
        var_18 -= ((/* implicit */unsigned char) ((134217728U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
        {
            arr_26 [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8])), (arr_21 [i_8 + 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1]))) % (arr_21 [i_8 - 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (arr_21 [i_8 - 2])))));
            arr_27 [i_7] [10ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16380)) ? (min((((-5160629619142387529LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */long long int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) : (((/* implicit */long long int) min((var_2), (((/* implicit */int) arr_13 [(_Bool)1])))))));
            var_19 = ((/* implicit */int) min((((/* implicit */long long int) var_8)), (((((((((/* implicit */_Bool) var_2)) ? (-4953757299279051258LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [(unsigned short)0] [i_7]))))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_18 [i_8 - 1] [i_8 + 1])) - (75)))))));
        }
        arr_28 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_20 [i_7] [i_7] [i_7] [0ULL] [0ULL])), ((short)-1024)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)4] [(_Bool)1] [i_7]))) : (((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (arr_25 [(signed char)6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))))))) : (((/* implicit */unsigned long long int) ((arr_14 [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59449))) : (arr_7 [i_7]))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 3) 
    {
        arr_33 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_9 - 2] [i_9 - 1] [i_9 - 3] [i_9]))))) % (((/* implicit */int) arr_16 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 + 1]))));
        var_20 ^= (-(((/* implicit */int) arr_11 [i_9] [i_9] [i_9])));
        arr_34 [i_9 - 3] = ((/* implicit */int) min((min((0U), (((/* implicit */unsigned int) (short)32767)))), ((-(arr_10 [i_9 + 2] [i_9 - 2])))));
    }
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        arr_38 [i_10] = var_9;
        /* LoopNest 3 */
        for (unsigned short i_11 = 3; i_11 < 15; i_11 += 3) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 4) 
                {
                    {
                        arr_47 [(_Bool)1] = (((+(((/* implicit */int) (unsigned char)55)))) * (((((/* implicit */_Bool) arr_36 [i_11 - 2])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_36 [i_11 + 1])))));
                        arr_48 [i_11] [i_11] [i_11 - 2] [i_11] [6U] [0LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-23664)), (-5160629619142387529LL)))) ? (((arr_46 [i_11 + 2] [i_11 - 3] [i_11 + 1] [i_11 - 3]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_4)) <= (arr_40 [(unsigned char)17] [i_11 + 2] [i_11 + 2])))))));
                        /* LoopSeq 3 */
                        for (long long int i_14 = 1; i_14 < 15; i_14 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)142)) >= (23)))), (arr_1 [i_14 + 1] [i_11 - 2])))) + (17)));
                            arr_51 [2] [2] [2] [i_13] [i_13 + 2] [2] [i_13] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) * (((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10]))) : (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (var_4)))))))));
                            arr_52 [i_12 - 1] [i_12 - 1] [(unsigned char)4] [i_12 - 1] [(unsigned short)8] = ((/* implicit */unsigned short) var_7);
                        }
                        for (int i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))) ^ (max((((/* implicit */long long int) var_9)), (var_3))))) : (((/* implicit */long long int) (((_Bool)0) ? (((var_9) ? (((/* implicit */int) arr_45 [i_10] [i_10] [(signed char)3] [i_10])) : (var_4))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_0))))))))))));
                            var_23 = var_7;
                            arr_56 [i_11] [i_11] [i_11 - 2] [8] [i_11] [i_11 + 3] [6ULL] = ((/* implicit */long long int) arr_54 [i_10] [i_11] [i_10] [1LL] [i_15]);
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 18; i_16 += 1) /* same iter space */
                        {
                            var_24 -= ((/* implicit */signed char) arr_53 [i_10]);
                            arr_60 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_10] [i_11 + 2] [(_Bool)1] [(_Bool)1] [i_10]))) == (12584921800726667128ULL)));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32243))) : (12584921800726667152ULL)))) ? (((/* implicit */long long int) 561379194)) : (var_1)));
                            var_26 = ((/* implicit */signed char) (-(((unsigned long long int) var_3))));
                        }
                        arr_61 [i_10] [i_12 - 1] = ((/* implicit */unsigned short) 32256);
                        arr_62 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_10])) > (var_2)))) | (arr_58 [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 2] [i_11] [i_11 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) max((-32257), (((/* implicit */int) (_Bool)1))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_3))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(var_4)))))) && (((/* implicit */_Bool) min(((~(var_6))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3582))) & (12573041048749914506ULL))))))));
    var_28 = ((/* implicit */long long int) min((((((((/* implicit */int) (signed char)-121)) % (((/* implicit */int) (unsigned short)27)))) / (((((/* implicit */_Bool) -7978467374152979282LL)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (signed char)-111)))))), (var_4)));
}
