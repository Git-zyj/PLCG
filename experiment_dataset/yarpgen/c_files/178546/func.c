/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178546
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
    var_20 &= ((/* implicit */short) ((unsigned long long int) var_9));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_21 *= ((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */int) ((var_0) > (arr_0 [i_0]))))));
        var_22 = ((/* implicit */unsigned long long int) var_18);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (signed char)-1))));
            arr_5 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)6)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)20767)) >> (((var_2) + (1080062128)))))))), (((/* implicit */unsigned int) (short)-4669))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */signed char) arr_7 [i_3 - 2] [i_3] [i_3]);
                var_25 &= ((/* implicit */short) max((((/* implicit */int) (signed char)-22)), (((((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_3])) : (((/* implicit */int) ((signed char) var_13)))))));
                arr_11 [i_0] [i_0] [i_0] [i_0] = (((~(((/* implicit */int) (signed char)-22)))) & (((/* implicit */int) min((arr_7 [12ULL] [i_0] [i_3 - 1]), (arr_7 [i_3] [i_3] [i_3 - 1])))));
            }
            for (signed char i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    arr_18 [i_0] [i_0] [i_2] [14] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(2147483625)))) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_1 [i_2] [i_5]))));
                    var_26 = ((/* implicit */unsigned int) (signed char)103);
                }
                var_27 = ((/* implicit */int) (short)-32521);
                arr_19 [i_0] [i_2] [i_0] &= ((/* implicit */unsigned long long int) 2068102590);
            }
            var_28 = ((/* implicit */signed char) min((var_28), ((signed char)-22)));
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-11)) * (((/* implicit */int) (short)-18056))))) : (max((14396375191940479162ULL), (((/* implicit */unsigned long long int) var_14))))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) 3750169926699883816ULL))));
        }
        arr_20 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)100))))) ? (((/* implicit */unsigned int) var_2)) : (max((((/* implicit */unsigned int) (signed char)-24)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) : (var_0)))))));
    }
    for (int i_6 = 1; i_6 < 12; i_6 += 1) 
    {
        arr_23 [2U] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */unsigned int) (~(var_1)))) : ((-(509154927U))))))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        arr_32 [i_6 + 1] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_30 [i_6 + 1] [i_6] [i_6] [i_6 + 1]), (((/* implicit */unsigned long long int) arr_12 [i_7] [i_9]))))) ? (((int) arr_25 [i_6])) : (((((/* implicit */_Bool) arr_15 [i_6] [i_6 - 1] [i_6] [i_6 + 1])) ? (((/* implicit */int) arr_15 [i_6] [i_6 + 1] [i_6] [i_6 - 1])) : (arr_13 [i_6 - 1] [i_6 - 1] [i_6 + 1])))));
                        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6])) ? (var_6) : (((/* implicit */unsigned long long int) -2147483632))))) ? (arr_8 [i_6 + 1] [i_7] [2] [5ULL]) : (((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_27 [i_9] [i_6]))))) % (((/* implicit */unsigned int) ((int) arr_29 [i_6 - 1] [10ULL] [i_8] [i_8])))));
                        arr_33 [i_6] = ((/* implicit */int) ((signed char) ((arr_29 [11] [i_6] [i_8] [i_6 - 1]) < (((/* implicit */unsigned long long int) arr_17 [i_9] [i_8] [i_7] [i_6])))));
                        var_32 = var_17;
                        arr_34 [i_6] [i_6] = ((/* implicit */unsigned int) arr_7 [i_9] [i_7] [i_6]);
                    }
                } 
            } 
        } 
        var_33 += ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1741306366591204743ULL) : (((/* implicit */unsigned long long int) arr_0 [i_6 + 1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                {
                    var_34 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_9) - (((/* implicit */unsigned int) arr_17 [i_6] [i_10] [i_10] [i_11])))))) ? (((/* implicit */unsigned int) arr_3 [i_11])) : (((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_6] [i_10]))))) : (var_0)))));
                    var_35 &= ((/* implicit */signed char) var_18);
                    var_36 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_24 [i_10 + 4])) ? (((/* implicit */int) arr_24 [i_6 + 1])) : (((/* implicit */int) arr_24 [10ULL]))))));
                    var_37 = arr_36 [i_10 + 3];
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 12; i_12 += 3) 
    {
        arr_43 [i_12] = ((/* implicit */int) ((11406445558292423558ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_12])))));
        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-7)) / (arr_2 [i_12])));
        var_39 ^= ((/* implicit */short) arr_42 [i_12]);
        var_40 = ((/* implicit */unsigned long long int) (signed char)100);
    }
    for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */int) min((max((arr_48 [i_13] [i_13]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (arr_12 [i_13] [i_13])))))), (((/* implicit */unsigned long long int) ((signed char) var_11)))));
            arr_50 [i_14] [i_13] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_47 [i_14] [i_14]))))), (((((/* implicit */_Bool) arr_22 [i_14] [i_13 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_13] [i_14] [i_13] [i_13])) || (((/* implicit */_Bool) var_19)))))) : (((((/* implicit */_Bool) 897991231U)) ? (6603575823454942804ULL) : (((/* implicit */unsigned long long int) arr_17 [i_13 - 1] [7] [i_13] [11U]))))))));
            arr_51 [i_13 - 1] [7U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_13] [i_13 - 1])) ? (arr_0 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_13] [i_13 + 1])))))) && (((/* implicit */_Bool) min((max((0ULL), (((/* implicit */unsigned long long int) arr_47 [i_13 + 1] [i_13 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_14] [i_13])) && (((/* implicit */_Bool) arr_22 [i_13] [i_13]))))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
        {
            arr_55 [i_13] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_54 [i_13 - 1])) ? (arr_54 [i_13 - 1]) : (arr_54 [i_13 - 1]))), (arr_54 [i_13 - 1])));
            arr_56 [i_15] [i_13] = ((/* implicit */signed char) max((((arr_29 [i_13] [i_13] [i_13 + 1] [i_15]) << (((arr_29 [i_13 - 1] [i_15] [i_13] [i_15]) - (3849527157015750292ULL))))), (((arr_29 [i_13] [i_13] [i_13] [i_15]) ^ (arr_29 [i_13] [(signed char)12] [i_15] [0])))));
        }
        var_42 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-8))));
    }
}
