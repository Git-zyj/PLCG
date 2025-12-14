/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10638
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2942)) ? (var_5) : (((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) 1141769853);
        var_20 = ((/* implicit */unsigned int) (!(arr_0 [i_0 - 1])));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (2190409082U))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (signed char i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) 3935000957U);
        arr_7 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_5 [i_1] [i_1])), (var_11)));
        var_23 = (((_Bool)1) ? ((((_Bool)0) ? (max((var_16), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_1 - 1]) ? (((/* implicit */int) var_0)) : ((+(arr_6 [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)18)) == (((/* implicit */int) var_9))))) : (((/* implicit */int) max(((short)-22683), (((/* implicit */short) (_Bool)1)))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) var_8);
    }
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((var_4) - (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_0)))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 22; i_4 += 2) 
            {
                arr_17 [i_3] [i_3] [i_3] = (~(((/* implicit */int) var_10)));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [i_2] [(unsigned short)3] [i_3] [i_2] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_13 [i_4 - 1]), (((/* implicit */unsigned char) (signed char)117))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_1)))) ? (max((var_15), (((/* implicit */unsigned long long int) arr_13 [i_2])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (var_13)))))))));
                            arr_24 [i_2] [i_2] [i_3] [i_2 + 3] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) 2190409082U)) ? (2104558207U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))))));
                            arr_25 [i_2] [i_2] [i_3] [i_2 + 4] = ((/* implicit */unsigned char) (short)-19137);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_3))) << (((/* implicit */int) (!(var_2))))));
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-98)), (26)))))))));
                        }
                    } 
                } 
                var_27 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_0))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_7 = 3; i_7 < 23; i_7 += 2) 
            {
                var_28 = ((/* implicit */unsigned char) (_Bool)1);
                arr_28 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7 - 2] [i_7] [i_3])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) arr_20 [i_7 - 2] [i_3] [i_3]))))) ? (((int) ((short) 2104558197U))) : (((/* implicit */int) ((unsigned char) var_2)))));
            }
            for (signed char i_8 = 3; i_8 < 22; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 3; i_9 < 21; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 3; i_10 < 23; i_10 += 2) 
                    {
                        arr_36 [8U] [i_3] [i_8] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) 1740476885U)) && (var_2))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (var_3))))));
                        arr_37 [i_3] [(unsigned short)2] [(unsigned char)8] [i_9 - 3] [i_10] = ((/* implicit */short) var_18);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 23; i_11 += 3) 
                    {
                        arr_41 [i_9] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (unsigned short)60753))))) : (var_18))), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) arr_38 [i_2] [i_9 + 3] [i_8 + 2])), (726282462U))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        arr_42 [i_2] [i_2] [i_3] [i_8] [i_9] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(max((((/* implicit */int) (unsigned short)65520)), (-816785807)))))), (max((((/* implicit */unsigned int) ((short) var_11))), (max((((/* implicit */unsigned int) var_7)), (var_1)))))));
                    }
                    arr_43 [i_2 - 1] [i_3] [i_3] [i_9 - 2] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (var_5)))), (var_1)))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_12 = 2; i_12 < 23; i_12 += 2) 
                {
                    arr_46 [i_3] [i_8] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) ((int) var_5)));
                    var_29 *= ((/* implicit */_Bool) min((1636108956U), (((/* implicit */unsigned int) var_11))));
                    arr_47 [i_12] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1636108956U)) ? (min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_2)), (var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 1; i_13 < 22; i_13 += 1) 
                    {
                        arr_50 [i_3] [i_12 + 1] [i_3] [i_8] [i_3] [i_3] = (+((+(((/* implicit */int) (short)-22683)))));
                        var_30 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) var_15))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_16)))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        arr_55 [i_3] [i_12] [(short)5] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-19))));
                        arr_56 [i_2] [i_3] [i_8 - 1] [i_12] [i_14] = ((/* implicit */unsigned short) ((((_Bool) (signed char)0)) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_2] [i_2 + 4] [i_8 + 2] [7U] [11] [i_8] [i_12 + 1])))))));
                    }
                }
                var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_31 [i_8] [(signed char)16] [i_2]))))))));
            }
            /* vectorizable */
            for (unsigned int i_15 = 1; i_15 < 21; i_15 += 1) 
            {
                arr_59 [i_2 + 3] [i_3] [i_15] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-5624)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_18)));
                var_32 = (+(((/* implicit */int) (_Bool)1)));
                var_33 -= (!(((/* implicit */_Bool) -213127723)));
                arr_60 [i_3] = var_5;
                var_34 = ((/* implicit */unsigned int) var_6);
            }
        }
        arr_61 [i_2 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 4) /* same iter space */
    {
        arr_65 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6))));
        /* LoopNest 3 */
        for (signed char i_17 = 1; i_17 < 21; i_17 += 4) 
        {
            for (signed char i_18 = 2; i_18 < 22; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 3; i_20 < 23; i_20 += 2) /* same iter space */
                        {
                            arr_78 [i_16] [i_16] [i_18] [i_19] [i_20] = ((/* implicit */int) ((short) (unsigned char)63));
                            var_35 *= ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (unsigned char i_21 = 3; i_21 < 23; i_21 += 2) /* same iter space */
                        {
                            var_36 -= ((/* implicit */short) 2108178347091432976LL);
                            arr_81 [i_16] [i_16] [i_18 + 1] [i_18 + 1] = ((var_2) ? (var_18) : (((/* implicit */unsigned int) 583634462)));
                            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) var_8))));
                            var_38 = ((/* implicit */unsigned int) arr_64 [i_17]);
                            arr_82 [i_16] [i_17] [i_18] [i_19] [i_16] = ((signed char) (signed char)-41);
                        }
                        arr_83 [i_16] [3] [i_17] [i_16] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_39 = ((/* implicit */unsigned long long int) ((var_18) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                        /* LoopSeq 2 */
                        for (signed char i_22 = 3; i_22 < 22; i_22 += 3) 
                        {
                            arr_86 [i_17] [i_16] = ((/* implicit */unsigned int) var_9);
                            arr_87 [i_16 - 1] [i_18] [i_16] [i_19] [i_22] [i_17] [i_18] = ((/* implicit */int) (unsigned char)66);
                            arr_88 [i_16] [(signed char)22] [i_16] [(signed char)22] [i_19] [i_17] [i_16] = var_13;
                        }
                        for (unsigned char i_23 = 2; i_23 < 22; i_23 += 4) 
                        {
                            var_40 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) var_2))))));
                            var_41 = var_5;
                            arr_92 [3U] [i_19] [i_16] [i_17] [0U] = (~(arr_48 [i_16 - 1] [i_17] [(unsigned char)7] [i_16 - 1] [i_18 - 2] [i_17 + 3]));
                        }
                    }
                } 
            } 
        } 
        arr_93 [i_16] = ((/* implicit */unsigned short) var_1);
    }
    var_42 ^= ((/* implicit */_Bool) var_11);
    var_43 ^= ((/* implicit */unsigned int) ((((/* implicit */int) max((((signed char) (unsigned char)255)), (((/* implicit */signed char) (_Bool)1))))) ^ (var_13)));
    var_44 |= ((/* implicit */_Bool) var_11);
    var_45 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) (signed char)122)))))))), (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4194303U)))) % (max((((/* implicit */unsigned long long int) var_9)), (var_15)))))));
}
