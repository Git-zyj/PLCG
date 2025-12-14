/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144146
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        arr_13 [i_0 + 2] [i_2] [i_3] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (var_0)))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_0 + 3])), (arr_11 [i_0] [i_0] [i_1] [i_3] [i_0] [13U])))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_8))))))) < (((((/* implicit */_Bool) max((var_13), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_8 [i_0 + 3])))));
                        arr_14 [i_0] [(unsigned char)7] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (-(min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_14 &= var_5;
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) >> (((/* implicit */int) ((unsigned char) var_8)))))) && (((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_2] [i_4])))), (((/* implicit */unsigned long long int) var_3))))))))));
                        var_16 = ((/* implicit */unsigned char) min((min((min((var_0), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) min((arr_7 [i_0] [i_1] [i_1]), (((/* implicit */unsigned char) var_8))))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0 - 1]))))) < (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (var_5))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_9)))))))));
    var_18 *= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((var_5) - (var_7)))) || (((/* implicit */_Bool) var_13)))));
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_19 = ((/* implicit */int) arr_16 [i_5] [i_5] [(short)10] [i_5] [12ULL]);
        /* LoopSeq 3 */
        for (short i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6 + 3]))) | (var_2)))) ? (((arr_4 [i_5]) ? (var_1) : (((/* implicit */unsigned int) arr_6 [i_5] [i_6])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 14; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */int) ((signed char) arr_10 [i_5] [i_5] [i_5] [i_5]));
                            var_22 = (~(((((/* implicit */_Bool) arr_22 [i_5])) ? (arr_22 [i_5]) : (arr_22 [i_5]))));
                        }
                        for (int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                        {
                            arr_33 [i_5] [10] [i_5] [i_8 - 1] [i_10] [i_10] = ((/* implicit */int) (~(((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned int) var_4)) : (min((var_1), (((/* implicit */unsigned int) arr_6 [i_5] [i_5]))))))));
                            var_23 = ((/* implicit */_Bool) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_5))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_25 [i_5])) : (((/* implicit */int) var_9)))))))));
                        }
                        arr_34 [i_5] [i_5] [i_6 + 1] [i_7] [i_8 - 2] [i_8 + 1] = max((((/* implicit */int) arr_20 [i_5] [i_5])), (arr_22 [i_5]));
                    }
                } 
            } 
        }
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_31 [(unsigned short)6] [10ULL] [i_5] [i_5] [i_11])) || (((/* implicit */_Bool) arr_19 [(short)8]))))) != ((~(((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))))));
            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) || ((!(var_3))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_23 [8])))), (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_23 [i_5])))))))) : (((unsigned long long int) arr_15 [i_11]))));
            /* LoopNest 2 */
            for (int i_12 = 4; i_12 < 15; i_12 += 1) 
            {
                for (long long int i_13 = 2; i_13 < 14; i_13 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_4 [i_11]))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) arr_26 [0ULL] [0ULL] [i_12] [(_Bool)1] [i_12])))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(_Bool)1])) ? (arr_26 [i_5] [i_11] [i_11] [(unsigned short)12] [i_11]) : (arr_32 [i_5] [i_5] [i_5] [13] [i_5] [9] [i_5])))))))));
                        arr_45 [i_5] = (i_5 % 2 == 0) ? (((/* implicit */unsigned long long int) ((max((((var_5) >> (((arr_36 [i_5]) - (11196247202272498677ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_31 [2] [i_5] [i_12] [i_5] [i_11]))))))) < (((/* implicit */unsigned long long int) (-(((int) var_8)))))))) : (((/* implicit */unsigned long long int) ((max((((var_5) >> (((((arr_36 [i_5]) - (11196247202272498677ULL))) - (16596974750635719534ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_31 [2] [i_5] [i_12] [i_5] [i_11]))))))) < (((/* implicit */unsigned long long int) (-(((int) var_8))))))));
                    }
                } 
            } 
            arr_46 [15ULL] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
        }
        for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 4) 
        {
            arr_50 [14LL] [i_14] [i_5] = ((/* implicit */long long int) (((+((-(var_5))))) + (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_41 [i_5] [i_5] [i_5] [i_5])) * (((/* implicit */int) var_8)))), (((/* implicit */int) ((short) arr_41 [i_5] [i_5] [i_14] [i_5]))))))));
            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_5]))));
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    {
                        var_28 -= ((/* implicit */_Bool) ((int) ((min((arr_43 [i_5] [i_14 + 1] [8ULL] [4]), (arr_54 [i_5] [i_14] [i_5] [i_14] [i_16] [(_Bool)0]))) <= ((-(var_4))))));
                        arr_56 [i_14 - 1] [i_5] [i_14 - 1] [i_14] [i_5] [i_5] = min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_31 [i_14 - 1] [i_5] [i_15] [i_16] [i_14])) : (((/* implicit */int) arr_31 [i_14 - 1] [i_5] [i_15] [i_15] [i_14])))), ((+(((/* implicit */int) var_10)))));
                        arr_57 [i_5] [i_5] [i_15] = ((/* implicit */int) var_3);
                        var_29 &= ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_14]))))) ? ((-(var_4))) : (((/* implicit */int) min((arr_1 [i_15]), (((/* implicit */short) var_11))))))), (((((/* implicit */_Bool) ((unsigned char) var_3))) ? ((~(((/* implicit */int) var_11)))) : (arr_51 [i_5] [i_14 + 1] [(_Bool)1])))));
                    }
                } 
            } 
            arr_58 [i_5] [i_5] [i_14] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_51 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_42 [i_5] [i_14] [i_14 + 1])))), (((/* implicit */int) max((var_11), (arr_37 [i_5] [i_5] [i_14]))))))) ? (((/* implicit */int) arr_44 [i_14] [i_14] [i_14] [i_14 + 1] [i_14] [i_5])) : (((((/* implicit */_Bool) arr_21 [i_14 + 1] [i_14 - 1])) ? (var_4) : (((/* implicit */int) var_9)))));
        }
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_5])) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) arr_23 [i_5]))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_13)) : (arr_49 [i_5] [i_5]))) ^ (((/* implicit */int) ((short) var_4))))))));
    }
    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */unsigned long long int) (((~(var_0))) | (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (var_4)))) ? (min((arr_0 [(unsigned short)6]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))))))))));
        /* LoopNest 3 */
        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            for (unsigned int i_19 = 1; i_19 < 11; i_19 += 3) 
            {
                for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    {
                        arr_72 [i_17] [i_19 + 1] [i_20] = ((/* implicit */unsigned long long int) min(((~((~(var_1))))), (((/* implicit */unsigned int) ((unsigned char) ((arr_47 [i_18] [i_19] [i_20]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_66 [i_18] [i_19]))))))));
                        arr_73 [(unsigned short)9] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_19 + 1] [i_19 - 1]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_19 + 1] [i_19 - 1])), (var_2))))));
                        var_32 -= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (arr_29 [i_20] [i_19] [i_18] [6LL] [i_17])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_17] [2LL] [i_18])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) : ((~(var_1))))));
                    }
                } 
            } 
        } 
        var_33 *= ((/* implicit */unsigned long long int) (((((~(arr_21 [i_17] [i_17]))) + (2147483647))) << ((((((-(arr_21 [i_17] [i_17]))) + (674015142))) - (3)))));
        arr_74 [i_17] [i_17] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
    }
    for (short i_21 = 0; i_21 < 21; i_21 += 1) 
    {
        arr_77 [i_21] [i_21] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) var_3)), (min((arr_76 [0ULL]), (((/* implicit */int) arr_75 [i_21]))))))));
        /* LoopNest 2 */
        for (unsigned int i_22 = 3; i_22 < 19; i_22 += 3) 
        {
            for (int i_23 = 0; i_23 < 21; i_23 += 3) 
            {
                {
                    arr_83 [(unsigned char)6] [i_21] [(unsigned char)6] = ((/* implicit */short) arr_82 [i_21] [(_Bool)1] [(_Bool)1]);
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((signed char) var_9)))));
                    arr_84 [i_21] [i_22] [i_23] [i_23] = ((/* implicit */long long int) arr_79 [i_23]);
                }
            } 
        } 
        arr_85 [i_21] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_75 [i_21])))) - (((/* implicit */int) var_3))));
        var_35 ^= ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_75 [i_21]))))));
    }
}
