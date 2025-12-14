/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186286
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
    var_18 = ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) 1784222031)), (min((2172485814U), (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((arr_0 [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) -883665585)), (2122481482U)));
        arr_8 [i_1] = ((/* implicit */signed char) (unsigned char)255);
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))) <= (arr_9 [i_2] [i_2]))))));
        arr_13 [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? ((-(5959628375085875637ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        arr_16 [(signed char)2] = ((((2172485814U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))));
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                {
                    arr_21 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned short) ((arr_17 [i_3 + 1] [i_3]) * (arr_17 [i_3 + 2] [i_3])));
                    arr_22 [i_3] [i_4 + 3] [i_3 + 2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (unsigned char)48))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) % (12487115698623675978ULL))) - (5959628375085875635ULL)))));
                    arr_23 [i_3 + 2] [i_3 + 2] [i_4] [i_3] = ((/* implicit */short) (~(0U)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_33 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1784222031)) ? (arr_32 [(unsigned char)10] [i_8] [i_8 + 1] [(unsigned char)10]) : (((/* implicit */unsigned long long int) 58720256U))));
                        /* LoopSeq 4 */
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            arr_37 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) < (0U)));
                            arr_38 [i_3] [i_8] [i_3] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 1784222031)) || (((/* implicit */_Bool) arr_17 [i_3] [i_3])))));
                            arr_39 [i_3] [i_6] [i_7] [i_3] [i_8] [i_9] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) -1978807434436746495LL)))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            arr_44 [i_3] [i_6] [i_6] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_3 + 1] [i_3] [i_3] [i_6 - 2] [i_6]))));
                            arr_45 [i_3] [i_8 + 1] [i_3] [i_6 + 2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -4365793636881670646LL)) ? (arr_32 [i_8 + 1] [i_8 + 1] [i_8] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3])))));
                            arr_46 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (12487115698623675964ULL)));
                            arr_47 [i_10] [i_3] [i_7] [i_3] [i_3 + 2] = arr_35 [i_6] [i_7] [i_10];
                            arr_48 [i_3 + 2] [i_3] [i_3] [i_8 + 2] [i_10] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_6 + 2] [i_3 - 1] [i_3 - 1] [i_3] [i_3]))) & (arr_25 [i_3] [i_3])));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            arr_52 [i_3] = ((/* implicit */unsigned char) ((int) arr_1 [i_6 + 2] [i_3]));
                            arr_53 [i_7] [i_7] |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_28 [i_11])) & (36028659580010496ULL))));
                            arr_54 [i_7] [i_8 + 1] [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)630)) ? (arr_36 [i_7] [i_11] [i_11] [i_11] [i_8 + 2] [i_7]) : (arr_36 [i_6] [i_6] [i_8 + 1] [i_6] [i_8 + 2] [i_6])));
                        }
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            arr_58 [i_3 + 2] [i_6] [i_7] [i_3] [i_8 + 2] [i_12] = ((/* implicit */signed char) 36028659580010496ULL);
                            arr_59 [i_3] [i_7] [i_6] [i_3] = ((/* implicit */unsigned long long int) ((1784222031) / (((/* implicit */int) arr_49 [i_3 + 1] [i_6 - 2] [i_6 + 2] [i_8 + 2] [i_3]))));
                            arr_60 [i_6] [i_6 - 1] [i_7] [i_8 - 1] [i_12] [i_12] [i_12] |= ((/* implicit */signed char) (+(arr_29 [i_3 + 2] [i_6 - 2] [i_8] [i_8 + 2])));
                            arr_61 [i_3] = ((/* implicit */long long int) (unsigned char)8);
                        }
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            arr_66 [i_3] [i_6] [i_8 + 1] [i_7] [i_6] [i_6 + 3] [i_3] = ((/* implicit */short) ((arr_27 [i_3 - 1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124)))));
                            arr_67 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1784222032)) ? ((+(arr_24 [i_3] [i_7] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))));
                            arr_68 [i_13] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((2910062822U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_3 - 1] [i_3 - 1] [i_6 + 2] [i_3] [6LL])))));
                            arr_69 [i_13] [i_7] [i_7] [i_3] &= ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)128)) & (((/* implicit */int) (signed char)-95))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_72 [7] [i_3] [i_7] [i_3] [i_3 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [(_Bool)0] [i_8 + 1] [i_3] [i_3] [i_3 - 1] [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) 1048568U)) || ((_Bool)1)))) : (((/* implicit */int) arr_1 [i_3] [i_6 + 2]))));
                            arr_73 [i_3] [i_3] [i_3] [i_3] [i_3] [i_6 - 1] [i_3] = ((int) arr_36 [i_3] [i_6 + 2] [i_14] [i_14] [i_14] [i_14]);
                            arr_74 [i_3] [i_6] [i_7] [i_6] [i_3] = ((/* implicit */unsigned int) ((long long int) arr_51 [i_14] [i_14] [i_3] [i_3] [i_6 + 3] [i_3]));
                            arr_75 [i_3] [i_6] [i_7] [i_8] [i_14] = ((/* implicit */signed char) ((unsigned int) arr_64 [i_3] [i_6 + 3] [i_6 + 1] [i_6 + 3]));
                            arr_76 [i_3] [i_6] [i_7] [i_7] [i_7] [i_8 - 1] [i_14] = ((/* implicit */short) arr_17 [i_3] [i_3]);
                        }
                    }
                } 
            } 
        } 
        arr_77 [i_3] [i_3] = ((/* implicit */int) ((unsigned char) arr_17 [i_3 - 1] [i_3]));
        arr_78 [4U] [i_3 + 2] |= (+(arr_0 [i_3 + 2] [4LL]));
    }
}
