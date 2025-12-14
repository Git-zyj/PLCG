/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150696
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_2 - 1] [(unsigned char)11] [i_2]) ? (((/* implicit */int) (unsigned short)4743)) : (((/* implicit */int) arr_2 [i_1] [i_0 - 1]))))) : (arr_4 [i_0 - 1] [i_0 - 1] [i_1])));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)4749)))))));
                    var_15 = ((((((/* implicit */int) (unsigned short)60786)) - (((/* implicit */int) var_2)))) >= (((((/* implicit */int) (short)-6908)) ^ (((/* implicit */int) (_Bool)1)))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_2))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((_Bool) var_3))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_8 [8ULL]);
                            var_19 = ((/* implicit */_Bool) 15136418242087262413ULL);
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) arr_11 [(short)10] [i_0 - 1]);
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                arr_22 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)6907)) > (((/* implicit */int) (signed char)35))));
                var_20 = arr_7 [i_7];
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_28 [(short)8] [(unsigned char)11] [i_7] [i_8] [i_7] = (~(((/* implicit */int) (unsigned short)4746)));
                            arr_29 [i_0] [i_3] [i_7] [8ULL] [i_9 - 1] = ((((/* implicit */_Bool) arr_1 [i_7])) || ((_Bool)1));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                arr_32 [i_10] = ((/* implicit */short) ((((/* implicit */int) (short)-8384)) - (((/* implicit */int) (unsigned short)4749))));
                /* LoopSeq 3 */
                for (long long int i_11 = 2; i_11 < 11; i_11 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */short) arr_20 [i_0] [i_0 + 1] [i_11 + 1] [6LL]);
                        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_36 [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11 + 2] [i_10]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)4749))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(arr_11 [8ULL] [i_11]))))));
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_31 [1ULL] [i_11 + 1] [i_0 + 1] [i_10]))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        var_28 = arr_5 [i_0] [i_0] [i_0 - 1];
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_0] [2] [i_10] [i_11 + 1] [i_14])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)6897))))) : ((~(((/* implicit */int) (short)-8354))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (arr_25 [i_0] [(unsigned short)6] [i_0] [i_11 - 1] [i_0])));
                    }
                    var_31 = ((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8))))));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        arr_46 [i_0 + 1] [i_3] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) -1513780213)))));
                        arr_47 [i_10] = ((/* implicit */short) ((arr_11 [i_10] [i_11 - 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6897)))));
                        var_32 = ((((((/* implicit */_Bool) (unsigned short)60787)) ? (arr_24 [i_0 - 1] [i_0] [i_10] [i_0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6901))))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0 - 1] [i_3] [i_10]))))));
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((arr_45 [(_Bool)1] [i_0 - 1] [i_0] [i_11 + 1] [i_11 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    }
                }
                for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    arr_50 [i_10] [i_3] [i_10] [(signed char)11] [(_Bool)1] = ((/* implicit */long long int) arr_24 [(_Bool)1] [i_0 - 1] [i_10] [i_10] [i_0 - 1] [i_0]);
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10])));
                    arr_51 [i_0] [i_3] [i_10] [i_16] = ((/* implicit */unsigned char) ((_Bool) arr_41 [i_0 + 1] [i_0 - 1]));
                }
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    var_35 = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [(_Bool)1] [i_10] [8ULL]))));
                    arr_54 [i_10] [i_3] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_30 [i_3] [11ULL] [11ULL] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [5ULL] [5ULL] [i_3] [i_17] [i_10])))));
                }
            }
        }
    }
    for (short i_18 = 0; i_18 < 14; i_18 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_19 = 0; i_19 < 14; i_19 += 3) 
        {
            arr_60 [i_18] [(short)5] [i_18] = ((/* implicit */unsigned short) ((arr_59 [i_18] [i_18] [i_18]) < (arr_59 [i_18] [i_18] [i_18])));
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4749))) + (((((/* implicit */_Bool) (unsigned short)60787)) ? (4323455642275676160LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
            var_37 *= ((((/* implicit */_Bool) arr_56 [i_18] [i_19])) && (((/* implicit */_Bool) arr_56 [i_18] [i_18])));
            var_38 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)6913))));
        }
        arr_61 [i_18] [i_18] = ((/* implicit */_Bool) arr_58 [i_18]);
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 14; i_20 += 3) 
        {
            for (long long int i_21 = 1; i_21 < 12; i_21 += 3) 
            {
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-6916))))) > (((/* implicit */int) ((arr_59 [i_21 + 1] [i_18] [i_21 + 1]) != (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-6895)) : (((/* implicit */int) (_Bool)0))))))))));
                    var_40 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_64 [i_18] [i_18] [i_21 + 1]) ? (((/* implicit */int) arr_64 [i_21] [i_20] [(unsigned char)8])) : (((/* implicit */int) arr_64 [i_18] [i_20] [5]))))) != (14603684630093782708ULL)));
                    var_41 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((11365790388346746290ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114)))))) / (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_18] [(signed char)8])))))) : (arr_63 [i_18] [i_20] [(short)0])))));
                }
            } 
        } 
        arr_67 [i_18] [i_18] = ((/* implicit */int) ((signed char) arr_55 [i_18]));
        arr_68 [(_Bool)1] |= ((/* implicit */_Bool) ((int) arr_62 [i_18] [(_Bool)1] [(_Bool)1]));
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_42 = ((/* implicit */signed char) ((arr_70 [i_22]) - (((/* implicit */long long int) arr_71 [i_22]))));
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_71 [i_22]))));
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    var_44 = (~(((/* implicit */int) (!((_Bool)1)))));
                    arr_76 [i_23] [1U] [i_22] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_69 [i_23])));
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [i_22])) && (((_Bool) (_Bool)1))));
    }
    for (signed char i_25 = 0; i_25 < 19; i_25 += 3) 
    {
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_72 [18])))) || (((/* implicit */_Bool) (~(arr_78 [i_25]))))));
        arr_79 [i_25] [i_25] = ((/* implicit */short) ((((arr_69 [i_25]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))) : (min((((/* implicit */unsigned long long int) arr_78 [i_25])), (arr_69 [i_25])))));
        var_47 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_72 [(signed char)10]));
        var_48 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_75 [i_25] [i_25] [i_25])) ? (((/* implicit */int) (!(var_11)))) : ((+(((((/* implicit */int) arr_73 [i_25] [6] [i_25])) / (((/* implicit */int) (_Bool)1))))))));
    }
    var_49 = ((/* implicit */signed char) var_9);
}
