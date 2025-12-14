/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155338
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)50)))))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((((/* implicit */int) var_0)) >= (-1)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (unsigned char)50);
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (((-(((/* implicit */int) var_7)))) ^ (((/* implicit */int) ((signed char) var_12)))))), ((+(-3175248358124209547LL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        arr_6 [(signed char)10] [i_1 - 1] = ((/* implicit */short) 16256401381400510967ULL);
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_8))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13619))))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2])) == (((/* implicit */int) arr_4 [2]))))) : (var_16)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_15 [i_2] [i_3] [(unsigned char)13] = ((/* implicit */int) ((((/* implicit */_Bool) 1585415011)) ? (((/* implicit */unsigned long long int) -1)) : (8796995115232892342ULL)));
            arr_16 [(_Bool)1] [13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_10 [(short)10] [(short)10]))) ? ((-(2147483647))) : (((((/* implicit */_Bool) (signed char)-5)) ? (2147483647) : (arr_8 [i_2] [1LL])))));
            arr_17 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2] [i_3])) - (((/* implicit */int) arr_11 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)13619)) : (arr_8 [6] [6]))) : (((/* implicit */int) arr_13 [i_3] [i_2]))));
            arr_18 [i_2] [3] = ((/* implicit */signed char) ((unsigned char) var_6));
        }
        /* vectorizable */
        for (short i_4 = 4; i_4 < 13; i_4 += 2) 
        {
            arr_22 [i_2] = ((/* implicit */short) ((signed char) ((arr_19 [i_2] [i_4]) >= (((/* implicit */int) arr_13 [i_2] [i_2])))));
            arr_23 [i_2] [i_4 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((133169152) ^ (var_9)))) & (((((/* implicit */unsigned long long int) var_16)) | (var_10)))));
        }
        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            arr_27 [i_5] = ((/* implicit */long long int) min((arr_13 [i_5 - 1] [i_2]), (((/* implicit */signed char) var_8))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                arr_30 [2] [i_6] [i_6] = (((!(((/* implicit */_Bool) arr_11 [11LL] [i_5 - 1])))) ? (((int) arr_28 [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) (unsigned char)206)));
                arr_31 [i_2] [i_2] [i_5] [i_5] = (-(((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_24 [i_2] [i_5 - 1] [i_6])))));
                arr_32 [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(arr_19 [i_2] [i_5 - 1])))), (((long long int) arr_11 [i_5 + 1] [i_5]))));
                arr_33 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)22654))))) && (((((/* implicit */_Bool) arr_8 [i_2] [i_5])) || (((/* implicit */_Bool) ((short) arr_9 [12LL])))))));
                arr_34 [i_2] [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-66)), ((unsigned char)53))))) + (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_5] [i_6])), (arr_9 [i_2])))) ? (((/* implicit */long long int) -1999327500)) : (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_5])))))))));
            }
            arr_35 [i_2] [i_5] = ((/* implicit */_Bool) ((unsigned short) ((signed char) max((arr_25 [i_5] [i_5 - 1] [i_2]), (arr_28 [i_5 + 1] [i_2])))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                arr_38 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned char) -2100226311932203888LL));
                arr_39 [i_5] [i_5] [(short)7] [i_7] = ((/* implicit */signed char) var_13);
            }
            arr_40 [4] = var_15;
        }
        arr_41 [2ULL] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (3231179861085283075LL))), (((/* implicit */long long int) min((((/* implicit */int) var_4)), (arr_25 [i_2] [(unsigned short)4] [i_2]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            arr_44 [i_8] = ((((/* implicit */int) (short)(-32767 - 1))) != (((((/* implicit */_Bool) (unsigned short)53919)) ? (((/* implicit */int) (short)23739)) : (((/* implicit */int) var_7)))));
            arr_45 [(signed char)4] = ((((int) arr_43 [i_2] [i_8] [i_8])) >> (((((((/* implicit */_Bool) -1088750408)) ? (((/* implicit */int) (unsigned char)128)) : (arr_28 [i_2] [i_8]))) - (115))));
            arr_46 [i_2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52198)) && ((_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2680609172610754484ULL)))));
        }
        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_49 [i_9] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_36 [i_2] [i_9] [i_2]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2472692076696164792ULL)) ? ((-9223372036854775807LL - 1LL)) : (9053464848650839420LL)))) ? ((+(((/* implicit */int) arr_37 [i_2] [i_2] [(unsigned short)11])))) : ((+(var_9))))) : (((/* implicit */int) max(((unsigned char)114), (((/* implicit */unsigned char) var_8)))))));
            arr_50 [i_2] = ((/* implicit */int) (signed char)31);
        }
        arr_51 [i_2] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)107))) ? (((/* implicit */int) ((_Bool) (unsigned char)143))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_2])) || (((/* implicit */_Bool) (unsigned short)36680)))))));
    }
    for (signed char i_10 = 2; i_10 < 20; i_10 += 2) 
    {
        arr_54 [i_10] [(unsigned char)14] = ((/* implicit */int) (unsigned char)11);
        arr_55 [i_10 - 1] = ((/* implicit */int) (-(var_12)));
    }
}
