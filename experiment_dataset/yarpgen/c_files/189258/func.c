/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189258
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) var_8);
        arr_5 [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) (_Bool)1))));
        arr_7 [i_0] = arr_2 [i_0];
    }
    var_12 = ((/* implicit */signed char) ((var_11) < (var_11)));
    /* LoopSeq 4 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_10 [(unsigned short)10] = ((/* implicit */_Bool) 1349631074);
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 3; i_5 < 17; i_5 += 3) 
                        {
                            arr_22 [i_3] [i_3] [i_2] [i_4] [i_3] = ((((/* implicit */_Bool) max(((unsigned short)36505), (arr_11 [i_5 - 1] [i_5 - 1] [i_3])))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_1] [i_2] [i_3] [i_2])), ((~(2253028618883580756ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)36476)))));
                            arr_23 [i_5] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_1] [i_2] [i_5 - 2] [i_4])))))));
                            arr_24 [(_Bool)1] &= ((/* implicit */short) var_11);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            arr_27 [i_3] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_21 [i_1] [i_6] [i_6] [i_4] [i_4]);
                            arr_28 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_4])))))) & ((-(var_2)))));
                            arr_29 [i_1] [i_2] [i_3] [(unsigned char)2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [(_Bool)1] [(_Bool)1])) ? (arr_21 [i_1] [i_4] [i_3] [i_6 + 1] [i_6]) : (((/* implicit */long long int) var_0))));
                        }
                        for (short i_7 = 3; i_7 < 15; i_7 += 4) 
                        {
                            arr_34 [(unsigned char)12] [i_2] [i_3] [i_4] [i_4] [i_2] = min((((/* implicit */long long int) ((short) ((unsigned int) var_11)))), (max((-4493691682952813122LL), (((/* implicit */long long int) (unsigned short)29031)))));
                            arr_35 [(signed char)16] [i_4] [(short)4] [i_3] [i_2] [(signed char)16] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)36505)));
                            arr_36 [i_1] [(unsigned short)0] [i_3] [i_4] [(unsigned short)2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)21433))));
                            arr_37 [i_1] [i_2] [(unsigned short)10] [i_3] [i_2] [(unsigned char)11] [i_2] = ((/* implicit */long long int) ((min((arr_18 [i_1] [i_2] [i_3] [i_4]), (arr_18 [i_7 + 2] [(unsigned short)11] [i_3] [i_2]))) ? (((((/* implicit */int) arr_18 [i_4] [i_3] [i_3] [i_4])) * (((/* implicit */int) arr_18 [i_1] [i_1] [(signed char)14] [i_7 + 1])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_18 [i_1] [i_1] [(_Bool)1] [i_7 + 4]))))));
                        }
                        arr_38 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)29057)) ? (((/* implicit */int) arr_9 [i_2])) : (1148043607))));
                        arr_39 [i_4] [i_2] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (+(1148043607)));
                        arr_40 [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */int) ((_Bool) arr_26 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1] [i_4]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-36)))))))) && (((/* implicit */_Bool) var_4))));
                        arr_41 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_9);
                    }
                } 
            } 
        } 
        arr_42 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)91)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))) - (arr_15 [i_1] [12LL] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53670)))));
        arr_43 [i_1] &= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)25557)))))));
    }
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        arr_48 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [12] [i_8] [18] [i_8]))));
        arr_49 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_1))))))) && (((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_8] [(signed char)6] [i_8] [i_8]))));
        arr_50 [i_8] = ((/* implicit */signed char) (unsigned short)36505);
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            arr_54 [i_9] [i_9] = ((/* implicit */signed char) ((((arr_51 [i_8]) - (arr_51 [i_9]))) * (arr_51 [i_8])));
            arr_55 [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)29040))))) & (-4333916855163602870LL))), (((/* implicit */long long int) min((arr_26 [i_8] [i_8] [i_8] [9LL] [i_9] [i_8] [i_9]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) 1349631074))))))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_60 [i_10] [i_10] = ((long long int) min((((/* implicit */unsigned int) (_Bool)0)), (var_8)));
        arr_61 [i_10] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)44102))));
        arr_62 [i_10] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_10])) + (((/* implicit */int) (unsigned short)44086))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)38661))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_10] [i_10] [4U] [i_10] [i_10] [i_10]))) / (arr_56 [i_10] [i_10]))))), (((/* implicit */long long int) max((arr_11 [i_10] [i_10] [i_10]), (((/* implicit */unsigned short) ((unsigned char) var_2))))))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_12 = 2; i_12 < 13; i_12 += 1) 
        {
            arr_68 [i_11] [i_12 + 2] = ((/* implicit */long long int) ((unsigned short) arr_26 [i_11] [i_11] [7LL] [i_11] [i_11] [i_11] [i_12 - 1]));
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            arr_77 [(unsigned short)12] = ((/* implicit */unsigned char) ((0ULL) | (((/* implicit */unsigned long long int) ((unsigned int) (signed char)72)))));
                            arr_78 [i_11] [i_12] [i_13] [i_13] [i_14] [i_15] [i_11] = ((/* implicit */_Bool) ((arr_18 [i_12] [i_12 - 1] [i_12 + 2] [i_12]) ? (arr_69 [i_13 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                            arr_79 [(signed char)6] [i_12] [4LL] [i_13] [4LL] [i_14] [i_15] &= ((/* implicit */_Bool) arr_25 [12] [i_12 - 1] [12] [10LL] [4ULL] [i_12 + 3]);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned short i_16 = 1; i_16 < 12; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 3; i_17 < 15; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 1) 
                    {
                        {
                            arr_90 [i_11] [i_11] [i_11] [10ULL] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) var_0);
                            arr_91 [i_11] [i_11] [i_16] [i_16] [i_18] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) arr_76 [i_16 + 2] [i_16 + 2] [i_16] [i_16] [i_11]))));
                        }
                    } 
                } 
            } 
            arr_92 [i_11] = ((/* implicit */signed char) ((unsigned short) (unsigned short)2401));
        }
    }
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_3))))), ((~(var_2)))));
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_9)))) / (((/* implicit */int) (unsigned short)65525))));
}
