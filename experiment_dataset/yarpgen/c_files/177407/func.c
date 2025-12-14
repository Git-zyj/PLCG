/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177407
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                arr_9 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [(unsigned short)4]);
                arr_10 [i_0] [i_0] [i_2 - 2] [i_0] = ((/* implicit */unsigned char) 2892785629U);
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_19)))));
                arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) (unsigned short)8871));
            }
            /* vectorizable */
            for (short i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                arr_16 [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [(short)9]));
                /* LoopSeq 3 */
                for (short i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 3138552390U)) ? (89596425844586863ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136)))))));
                    arr_20 [i_3] = ((/* implicit */int) (short)31);
                }
                for (short i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    arr_24 [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2828484527823164410LL)) ? (1672005167U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_3] [i_5 + 2])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        arr_28 [i_3] [i_3] [i_3] [i_5] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) > (arr_7 [i_6 + 1] [i_3])));
                        arr_29 [i_0] [i_0] [i_1] [i_3 - 1] [i_0] [i_3] = 2458773425U;
                        arr_30 [i_0] [i_1] [i_3] [i_3] [i_6] = ((/* implicit */unsigned short) var_5);
                        arr_31 [i_3] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_34 [i_3] [i_1] [i_3] [i_5 + 2] [i_7] = ((/* implicit */short) ((arr_1 [i_3 + 2]) ? (2458773425U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 1])))));
                        arr_35 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_0] [i_1] [i_3 + 2] [i_5] [i_7]))) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) arr_33 [i_1] [i_1] [i_3] [i_1] [i_0]))));
                        arr_36 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */short) 1836193866U);
                        arr_37 [i_0] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */unsigned char) 2622962138U);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_42 [i_0] [i_0] [i_1] [i_1] [i_5] [i_8] = ((/* implicit */long long int) var_7);
                        arr_43 [i_0] [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 1672005167U))) != (((var_8) ? (((/* implicit */int) arr_0 [13U] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                        arr_44 [i_3] [i_3] = ((/* implicit */unsigned short) (short)-2);
                        arr_45 [i_0] [i_1] [i_3] [i_5 - 1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_32 [i_0] [i_0] [i_0] [i_3] [i_3] [i_5 + 2] [i_8]));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 2; i_9 < 19; i_9 += 2) 
                    {
                        arr_49 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) (signed char)-105))))) : ((+(((/* implicit */int) (unsigned short)59368))))));
                        arr_50 [i_0] [i_3] [i_3] [i_5] [i_9] = ((/* implicit */_Bool) (unsigned char)133);
                        arr_51 [i_3] [i_1] [i_3] [i_5] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)-13780)) ? (7384250420313644803LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) /* same iter space */
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                        arr_56 [i_0] [(unsigned short)21] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) var_8);
                        arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_3 + 1]))));
                        arr_58 [i_0] [i_0] [i_10] [i_0] [i_3] = ((/* implicit */short) 1742498640U);
                    }
                    for (unsigned int i_11 = 1; i_11 < 20; i_11 += 2) /* same iter space */
                    {
                        arr_61 [i_0] [i_3] [i_3 + 2] [i_5] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_11 + 1] [(signed char)7] [i_5 + 1] [i_3 + 1])) ? (((/* implicit */int) (short)-28905)) : (((/* implicit */int) (_Bool)1))));
                        arr_62 [i_11] [i_3] [i_3 - 1] [i_3] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        arr_63 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) (unsigned short)12131);
                    }
                }
                for (short i_12 = 1; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    arr_68 [i_0] [i_0] [i_3] [i_3 + 2] [i_3] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1303))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 2; i_13 < 21; i_13 += 3) 
                    {
                        arr_72 [i_0] [i_3] = ((/* implicit */unsigned int) arr_67 [i_0] [i_1] [i_3] [i_12]);
                        arr_73 [i_3] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((unsigned int) 3782605506U));
                    }
                    for (signed char i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        arr_76 [i_14] [i_12] [i_1] [i_14] &= (unsigned char)8;
                        arr_77 [i_0] [i_3] [i_3] [(_Bool)1] [i_1] = arr_46 [(unsigned char)17];
                        arr_78 [i_3] [i_3] [i_3 - 1] = ((/* implicit */short) -5);
                    }
                }
                arr_79 [i_3] [i_3] [i_3] [0LL] = ((/* implicit */short) (~(((unsigned int) arr_32 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] [i_3]))));
                arr_80 [i_0] [i_3] [i_3 + 1] = ((/* implicit */unsigned char) (short)-3508);
            }
        }
        for (int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            arr_85 [i_0] [i_15] = ((/* implicit */_Bool) (signed char)-124);
            /* LoopNest 2 */
            for (int i_16 = 3; i_16 < 21; i_16 += 3) 
            {
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    {
                        arr_92 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_65 [i_0] [i_15] [i_0] [i_17]);
                        arr_93 [(unsigned short)1] [i_15] [i_16 + 1] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)8160))))), (1672005160U)))) ? (min((1840051390U), (((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (512361786U) : (0U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_81 [i_15] [i_16 - 3])) ^ (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            arr_94 [i_0] [i_0] [i_0] = max((((/* implicit */int) (short)3489)), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_48 [i_0] [i_0] [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)-3511)) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) (signed char)127)))))));
            arr_95 [i_15] = (-(((/* implicit */int) arr_41 [i_0] [i_0] [(signed char)17] [(short)11] [i_15])));
        }
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            arr_99 [i_0] [i_18] = ((/* implicit */long long int) (unsigned char)139);
            /* LoopSeq 1 */
            for (unsigned int i_19 = 1; i_19 < 18; i_19 += 2) 
            {
                arr_104 [i_19] [i_18] [i_19] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)96))));
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_110 [i_19] [i_18] = ((/* implicit */unsigned char) 16665169370935612770ULL);
                            arr_111 [i_19] [i_19] [i_19] [i_20] [i_21] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_109 [i_0] [i_18] [i_19])))), (((/* implicit */int) min(((unsigned short)49465), (((/* implicit */unsigned short) arr_70 [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((4259418044U), (((/* implicit */unsigned int) (short)-23126))))))))));
                            arr_112 [i_18] [i_18] [i_19] [i_20] [i_21] |= ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                arr_113 [i_0] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8167))))) ? (((/* implicit */int) ((arr_33 [i_0] [i_18] [i_19] [i_19] [i_19]) && (((/* implicit */_Bool) (unsigned char)26))))) : (((/* implicit */int) min(((unsigned char)148), ((unsigned char)175))))));
            }
        }
        arr_114 [i_0] = ((/* implicit */long long int) max((((/* implicit */short) (unsigned char)175)), ((short)10577)));
    }
    var_20 |= ((/* implicit */short) var_11);
}
