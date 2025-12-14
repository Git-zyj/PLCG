/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176133
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
    var_20 = ((/* implicit */int) (signed char)-15);
    var_21 ^= ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0 - 1] = ((signed char) var_9);
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [(unsigned short)2] [i_1] [i_1]);
                arr_6 [i_1] [i_1] [2ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32135))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_13 [i_0] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31293))))) ? (((/* implicit */int) max((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned char) arr_9 [i_0 - 1]))))) : (((((/* implicit */int) var_19)) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) - (arr_1 [i_2] [i_2]))) - (3719834263898903247ULL)))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)15)) * (((/* implicit */int) var_3)))), (((/* implicit */int) arr_9 [i_0 - 1]))));
                        arr_15 [(_Bool)1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_2])) <= (((/* implicit */int) var_12)))) ? (arr_7 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) arr_11 [(unsigned char)7] [i_0 - 1] [i_0 - 1] [i_0]))));
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (arr_9 [i_2]))))) : (min((arr_0 [i_3]), (((/* implicit */unsigned int) arr_12 [i_3] [i_2] [2ULL] [2ULL] [i_0])))))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [7ULL] [i_1] [i_0])) % (((/* implicit */int) min(((unsigned char)248), ((unsigned char)224)))))))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_23 ^= ((/* implicit */signed char) 4216847066U);
                        arr_18 [i_1] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) min((arr_7 [i_0 - 1] [i_0 - 1]), (arr_7 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : ((-(var_10))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) != (((/* implicit */int) (unsigned short)65534)))))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)65509)))) : (((/* implicit */int) var_11))));
                }
                var_25 = ((/* implicit */int) var_14);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    var_26 = ((/* implicit */signed char) var_0);
                    arr_30 [i_7] [12ULL] = ((/* implicit */signed char) (-(-4470340735944446488LL)));
                    /* LoopSeq 4 */
                    for (int i_8 = 4; i_8 < 17; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */int) ((signed char) (-(-4470340735944446490LL))))) : (max((arr_25 [i_5 - 1]), ((-(((/* implicit */int) (unsigned short)8))))))));
                        var_28 = ((((/* implicit */_Bool) max((arr_32 [i_8 + 3] [i_7] [i_6] [i_5 - 2]), (arr_32 [i_5] [i_6] [i_7] [i_8])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)32768)), (arr_32 [i_8] [i_7] [(_Bool)1] [i_5 - 3])))));
                        var_29 ^= ((/* implicit */short) ((((/* implicit */int) (!(arr_28 [i_8 - 4] [i_8 - 4] [1U] [i_6])))) % (((/* implicit */int) arr_24 [(unsigned char)0]))));
                        arr_33 [i_8] [i_7] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (arr_32 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_0))) % ((~(((/* implicit */int) var_12))))))) : (max((((/* implicit */unsigned int) arr_27 [i_5] [i_6] [i_6])), (var_16)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        var_30 = max((((/* implicit */int) (unsigned short)65529)), ((+((-2147483647 - 1)))));
                        arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -4470340735944446496LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_5]))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3561)))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_5 - 2])) / (((/* implicit */int) arr_21 [i_5 - 2])))))));
                        arr_37 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [(signed char)17] [i_7] [i_6])) != (((/* implicit */int) arr_21 [i_5]))));
                        var_31 = ((/* implicit */unsigned char) max((((arr_32 [(_Bool)1] [i_5 + 1] [i_5 + 1] [i_5 - 3]) << (((-6427847777451054342LL) + (6427847777451054386LL))))), (((/* implicit */unsigned long long int) ((arr_28 [i_5 + 1] [i_6] [i_7] [i_6]) ? (((/* implicit */long long int) (+(1424449993U)))) : (min((((/* implicit */long long int) var_12)), (var_2))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) == (((((/* implicit */_Bool) 4470340735944446488LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46639))) : (arr_29 [i_5] [i_5] [i_7] [8ULL])))));
                        arr_40 [i_5] [i_5] [i_7] [i_10] = ((/* implicit */unsigned long long int) var_8);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 4) 
                        {
                            arr_44 [i_11] [19U] [i_7] [i_6] [i_5] = ((/* implicit */signed char) (unsigned short)46643);
                            arr_45 [i_11] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)9))));
                        }
                        for (int i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */int) arr_34 [i_5] [i_5 - 3] [i_12 + 1] [i_12] [i_12] [i_12 - 1])) <= (((/* implicit */int) arr_34 [i_5] [i_5 - 3] [i_12 + 1] [i_12] [i_12] [i_12 - 1])))))));
                            arr_49 [i_6] [i_10] [i_6] [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_7] [i_12 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (arr_28 [i_5 - 2] [i_6] [i_10] [(_Bool)0])))) : (((/* implicit */int) arr_21 [i_5 - 1]))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249))))))))));
                            var_35 = ((/* implicit */signed char) (~(((/* implicit */int) arr_47 [i_7] [i_12 + 1] [i_12] [i_12] [i_12] [i_12 + 1] [(unsigned short)1]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) 
                    {
                        arr_52 [i_13] [0ULL] [0ULL] = ((/* implicit */unsigned char) 4095);
                        /* LoopSeq 4 */
                        for (int i_14 = 1; i_14 < 19; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 1])) << (((((/* implicit */int) arr_34 [i_5] [i_5 - 2] [i_5] [i_5] [i_5] [i_5 - 3])) - (70))))))));
                            arr_55 [i_5] [0LL] [i_7] [i_13] [i_14] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)4313));
                            var_37 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)32736)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_54 [i_14] [(_Bool)1] [i_13] [i_5] [i_6] [i_5 - 1] [i_5]))))));
                        }
                        for (short i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_5 - 2] [i_13 - 1])) / (((/* implicit */int) arr_22 [i_5 + 1] [i_13 + 1]))));
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (~(((/* implicit */int) arr_51 [i_13 + 2] [i_13 + 2] [i_5 - 3] [i_5] [i_5 - 3])))))));
                        }
                        for (int i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            arr_61 [i_5] [13] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_16)));
                            arr_62 [(_Bool)1] [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_24 [i_13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))));
                            var_40 = ((/* implicit */unsigned char) 3132605181U);
                            var_41 = ((/* implicit */signed char) (((-(arr_48 [i_5] [5ULL] [i_7] [i_13 + 2] [i_16] [i_5]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [(unsigned char)12] [i_5 - 1] [i_13] [i_13] [i_13 - 1])))));
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))) < (3807607822678013458ULL)))))))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            arr_66 [i_6] [i_7] [i_13] [i_13] = ((/* implicit */unsigned char) (unsigned short)18897);
                            var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_34 [i_5 - 1] [i_5 - 1] [i_5 - 3] [14LL] [i_13 + 2] [(unsigned short)15]))));
                            arr_67 [5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [(_Bool)1] [(signed char)0] [i_17])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) arr_57 [i_5] [i_6] [i_7] [i_13 + 2] [i_17])) ? (((/* implicit */int) arr_41 [i_17] [i_17] [i_13] [i_13 + 1] [i_7] [0] [i_5 - 2])) : (((/* implicit */int) arr_58 [i_17] [i_13] [i_7] [i_6] [i_5]))))));
                            var_44 = ((/* implicit */unsigned long long int) (signed char)-66);
                        }
                        var_45 = ((/* implicit */signed char) arr_59 [(unsigned char)0] [i_5 - 1] [i_6] [i_7] [i_13 + 2]);
                        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_5] [19ULL] [(unsigned short)17] [i_13 + 2])) && (((/* implicit */_Bool) arr_25 [i_5]))));
                        arr_68 [i_13] [i_7] [(_Bool)1] [(unsigned short)7] = ((((/* implicit */_Bool) arr_51 [i_13 + 2] [i_5 + 1] [i_5] [i_5] [i_5])) ? (((/* implicit */int) ((18446744073709551612ULL) <= (((/* implicit */unsigned long long int) -1210148318))))) : (((/* implicit */int) (!(var_4)))));
                    }
                    var_47 ^= ((/* implicit */unsigned long long int) arr_50 [i_5] [11ULL]);
                }
            } 
        } 
    } 
}
