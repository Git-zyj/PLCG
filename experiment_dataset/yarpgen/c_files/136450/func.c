/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136450
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) arr_0 [3LL] [3LL]);
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((signed char) ((arr_3 [i_0 + 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_11 [i_1 + 1] [i_1 + 1] &= ((/* implicit */unsigned char) var_12);
            arr_12 [2LL] [i_2] [(short)0] = ((/* implicit */long long int) arr_0 [i_1 + 1] [i_2]);
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_19 |= ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_2]))));
                arr_15 [(_Bool)1] [i_2] [i_2] &= ((/* implicit */signed char) var_5);
            }
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_25 [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(var_8)))) ^ (((arr_23 [i_1] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))))));
                            var_20 &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) ((signed char) var_16))) : (((/* implicit */int) var_2)))) & ((~(((/* implicit */int) var_7))))));
                            var_22 |= ((/* implicit */short) (!(((/* implicit */_Bool) 628837471U))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 14; i_11 += 3) 
                        {
                            var_23 &= ((/* implicit */long long int) var_11);
                            arr_41 [i_1] [i_8] [i_11] = ((/* implicit */unsigned char) var_15);
                            arr_42 [i_1] [i_7] [i_11] [i_9] = arr_7 [i_11 + 2];
                        }
                        var_24 = ((/* implicit */_Bool) 3666129846U);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                for (long long int i_13 = 2; i_13 < 15; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) arr_26 [i_12] [i_13 - 2] [i_14]);
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_49 [i_14] [i_14] [i_1 - 2] [(short)5] [i_14] [i_13 - 2] [i_1 - 2])), (4195251322U)))) ? (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_49 [i_1 + 1] [1ULL] [i_1 - 2] [1ULL] [i_14] [i_13 - 2] [(_Bool)1]))))) : (((/* implicit */int) var_2)))))));
                            var_27 = ((((/* implicit */int) arr_34 [i_1 - 2] [i_7] [i_12] [i_13])) != (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [(signed char)9])) > (((/* implicit */int) var_14))))));
                            var_28 += ((/* implicit */unsigned char) var_13);
                            arr_52 [i_7] = ((/* implicit */signed char) arr_3 [i_12]);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */int) min((min((((/* implicit */long long int) var_2)), (min((-6776200556887523553LL), (((/* implicit */long long int) (_Bool)1)))))), ((~((~(-8309893989902673839LL)))))));
        }
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
        {
            var_30 |= ((/* implicit */_Bool) var_3);
            var_31 = ((/* implicit */unsigned int) var_10);
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_37 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [9U]))));
            arr_56 [i_1] [i_15] [i_1 + 1] &= ((/* implicit */long long int) var_11);
        }
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                {
                    {
                        var_33 -= ((/* implicit */long long int) -1);
                        var_34 = ((/* implicit */signed char) min((((/* implicit */long long int) ((short) var_5))), (min((((/* implicit */long long int) var_5)), (arr_13 [i_1 + 1])))));
                        var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_16] [i_16]))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
    {
        arr_70 [i_19] [i_19] = ((/* implicit */int) (!(var_14)));
        arr_71 [i_19] [i_19] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
        /* LoopSeq 1 */
        for (unsigned int i_20 = 3; i_20 < 24; i_20 += 3) 
        {
            arr_76 [(unsigned char)23] [(unsigned char)23] = arr_75 [i_19];
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_19] [(signed char)18] [i_19])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_75 [i_20])) ? (((/* implicit */int) arr_66 [i_20] [(signed char)14])) : (((/* implicit */int) var_1)))))) : (((int) var_2))));
            arr_77 [(short)3] [i_20] [i_19] = ((/* implicit */unsigned int) ((long long int) var_16));
        }
    }
    var_37 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 4 */
    for (unsigned char i_21 = 0; i_21 < 14; i_21 += 2) 
    {
        var_38 = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_21] [i_21] [13ULL] [i_21] [i_21]))))))));
        arr_81 [i_21] = ((/* implicit */unsigned int) var_5);
        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) 6776200556887523553LL))));
        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((min((var_8), (((/* implicit */unsigned int) arr_7 [i_21])))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_21]))))))));
    }
    for (unsigned int i_22 = 0; i_22 < 11; i_22 += 3) 
    {
        arr_84 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_13 [i_22]))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : ((~(arr_13 [i_22])))));
        var_41 ^= ((/* implicit */_Bool) var_8);
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_66 [i_23] [i_23]), (((/* implicit */unsigned char) arr_69 [i_23]))))), (((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_11)))) - (((/* implicit */int) min((var_10), (var_14))))))));
        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) (!(var_1))))));
        var_44 &= ((/* implicit */_Bool) arr_86 [i_23]);
        var_45 = ((/* implicit */unsigned long long int) (+((+(arr_88 [i_23])))));
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
    {
        var_46 = min((min((((/* implicit */int) arr_69 [i_24])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) arr_90 [i_24])) ? (((/* implicit */int) arr_68 [i_24])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_89 [i_24] [i_24])) || (((/* implicit */_Bool) var_3))))))));
        var_47 = ((/* implicit */signed char) var_9);
        /* LoopSeq 2 */
        for (unsigned int i_25 = 0; i_25 < 17; i_25 += 4) 
        {
            arr_93 [1ULL] = ((/* implicit */short) ((628837447U) * (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)140), (((/* implicit */unsigned char) min((((/* implicit */signed char) var_14)), (var_15))))))))));
            var_48 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_85 [i_25]))));
        }
        for (short i_26 = 0; i_26 < 17; i_26 += 1) 
        {
            var_49 = var_8;
            var_50 *= ((/* implicit */unsigned int) (+(min(((~(((/* implicit */int) arr_91 [i_26] [i_24] [i_24])))), (((/* implicit */int) min((var_13), (((/* implicit */signed char) var_0)))))))));
            arr_96 [i_24] [i_26] &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_89 [i_26] [i_24]))))) * (((/* implicit */int) var_1))));
        }
        var_51 += ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_85 [(_Bool)1])))) : ((~(var_6)))))));
        arr_97 [5ULL] [5ULL] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_24] [i_24]))));
    }
}
