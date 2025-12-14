/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1819
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_3 [1U] = ((/* implicit */long long int) arr_0 [i_0]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)42))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (arr_0 [(unsigned short)10]) : (((/* implicit */unsigned long long int) arr_1 [11LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0U)))) : (arr_1 [i_0]))))));
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_8 [(unsigned char)1] [i_1 + 2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) max((arr_6 [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)191))))) ? (8947520018958005300LL) : (var_2)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [11ULL]))))))));
                    arr_14 [i_1] [2] [2] [i_2] = ((/* implicit */unsigned long long int) arr_12 [2LL] [2LL]);
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_11 [i_2] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_2] [i_2 - 1]))))) ? (((arr_10 [i_1 + 3] [i_2] [i_2 + 1]) - (arr_10 [i_1 + 3] [i_2] [i_2 - 1]))) : (arr_10 [i_1] [i_2 - 1] [i_3]));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17732923532771328LL)) ? (((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [(unsigned short)10]))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((var_11) & (((/* implicit */long long int) arr_5 [i_1 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))));
        /* LoopSeq 3 */
        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_10 [(short)10] [i_4 - 3] [i_4]))));
            var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_14)) - (6336)))))) : (max((((/* implicit */long long int) arr_13 [i_1] [(short)9] [i_4] [3ULL])), (var_2))))), (((/* implicit */long long int) ((arr_7 [i_1 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 3]))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_16 [i_1 + 3] [i_5])))) ? (max((arr_16 [i_5] [i_1]), (var_0))) : (arr_16 [i_8] [i_6 + 1])));
                            arr_26 [i_6] [i_8] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) ? (var_6) : (arr_23 [5LL] [i_7]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_1] [i_1] [2ULL]))))))) <= (var_2)));
                            arr_27 [i_6] [i_6] [i_1 - 2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_2 [6ULL]), (arr_20 [i_1 + 1] [i_6 + 1] [i_6] [i_6 + 1])))) & (((/* implicit */int) ((unsigned short) arr_17 [i_1 + 1] [i_6 - 1] [i_8])))));
                        }
                    } 
                } 
            } 
            arr_28 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) -3916825246833313961LL)))));
        }
        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_25 = ((/* implicit */_Bool) var_3);
            var_26 = ((/* implicit */unsigned char) arr_22 [i_1] [(unsigned short)2] [i_9] [i_1] [i_9] [i_1]);
        }
    }
    for (long long int i_10 = 2; i_10 < 13; i_10 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) min(((unsigned char)53), ((unsigned char)4)));
        var_28 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_10] [i_10])) && (((/* implicit */_Bool) 68719476732LL))))) : (((/* implicit */int) max(((unsigned short)35043), (arr_29 [i_10])))))), (((/* implicit */int) arr_11 [i_10] [i_10]))));
        var_29 = ((/* implicit */signed char) var_3);
    }
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) (unsigned char)53);
        var_31 = ((/* implicit */unsigned int) max((arr_0 [i_11]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (arr_16 [i_11] [i_11]))))));
        /* LoopSeq 2 */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_10 [9LL] [i_12] [i_12]), (arr_10 [i_11] [i_12] [i_12])))) || (((arr_10 [i_11] [i_11] [i_12]) != (arr_6 [14ULL] [i_12])))));
            var_33 = ((/* implicit */unsigned short) arr_35 [i_11]);
        }
        for (long long int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (_Bool)1))));
            var_35 &= (+(((/* implicit */int) ((unsigned short) arr_24 [3ULL] [13LL] [i_11] [i_11] [i_13] [i_13] [i_13]))));
            arr_43 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_13] [i_11])))))) & (min((var_11), (((((/* implicit */_Bool) arr_29 [i_11])) ? (arr_35 [i_11]) : (((/* implicit */long long int) arr_5 [i_11]))))))));
            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_18 [i_13]), (arr_24 [15LL] [i_11] [6] [i_11] [i_13] [i_11] [0LL])))) ? (((/* implicit */unsigned long long int) var_11)) : (max((((/* implicit */unsigned long long int) arr_5 [i_11])), (var_4))))) > (((/* implicit */unsigned long long int) ((long long int) arr_38 [i_11]))))))));
            var_37 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_40 [i_13] [i_13])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_13] [i_13] [i_13] [i_11] [(unsigned short)8] [i_11] [i_11])))))));
        }
    }
    var_38 = ((/* implicit */unsigned int) (-((~(max((var_8), (((/* implicit */int) (signed char)-19))))))));
    /* LoopSeq 2 */
    for (unsigned char i_14 = 1; i_14 < 16; i_14 += 1) 
    {
        arr_46 [i_14] [(unsigned char)11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7096)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32256))) : (-4611686018427387904LL)))) ? (arr_45 [i_14]) : (arr_45 [i_14])));
        var_39 = ((/* implicit */long long int) arr_45 [i_14]);
        arr_47 [i_14] = arr_44 [i_14];
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (long long int i_16 = 2; i_16 < 16; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    {
                        arr_55 [i_14] [i_15] [i_16] [i_14] [i_14] = ((/* implicit */signed char) arr_44 [i_15]);
                        var_40 = max((68719476754LL), (arr_44 [i_14]));
                        arr_56 [i_14] [i_15] [i_16 - 2] [i_17] [13ULL] = (~(((((/* implicit */_Bool) var_5)) ? (arr_44 [i_14 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_14 + 1]))))));
                        arr_57 [i_14] [i_15] [i_16 - 2] [6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (unsigned char)204)), (arr_51 [i_17] [i_16] [i_14] [i_14]))) ^ (arr_44 [i_14 - 1])))) && (((/* implicit */_Bool) max((arr_53 [i_14] [i_14 - 1] [i_16 - 1]), (((arr_44 [3]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) 
    {
        var_41 = ((/* implicit */unsigned int) ((_Bool) (-(arr_48 [i_18]))));
        arr_62 [(short)10] = ((/* implicit */signed char) arr_9 [(unsigned char)4] [(unsigned char)0] [i_18]);
    }
}
