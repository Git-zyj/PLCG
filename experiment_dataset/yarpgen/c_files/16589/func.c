/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16589
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)146)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [2ULL] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (9165264570381761837ULL)))) : (((/* implicit */int) ((_Bool) (short)-13008))))))));
                        var_14 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)110))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [(short)6] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_4 [(short)3] [i_5 - 1])));
                    var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_5 - 1] [i_5]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        var_17 += ((/* implicit */_Bool) arr_2 [i_0]);
                        var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)91)) ^ (((/* implicit */int) (short)32755))));
                        var_19 &= ((/* implicit */unsigned long long int) (((-(var_5))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)157)) >= (((/* implicit */int) (unsigned char)91))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            for (int i_10 = 3; i_10 < 9; i_10 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned short)3] [i_10] [(_Bool)1]))));
                    var_21 ^= ((/* implicit */_Bool) arr_8 [i_9] [(unsigned char)2] [(unsigned short)4] [i_10 - 1]);
                    var_22 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    }
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        arr_34 [i_11] = ((/* implicit */long long int) ((min(((+(-877516707))), (((/* implicit */int) ((var_2) != (var_3)))))) <= ((+(((/* implicit */int) arr_30 [i_11]))))));
        var_23 *= ((/* implicit */_Bool) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))) >= (min((((/* implicit */unsigned long long int) -1994715551181416158LL)), (8255448940451397678ULL)))));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)138)) > (((/* implicit */int) (unsigned char)175))))))))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 4; i_12 < 14; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 12; i_13 += 2) 
            {
                {
                    arr_40 [6] [i_12] [i_11] [i_11] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)146))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 2; i_14 < 14; i_14 += 1) 
                    {
                        for (long long int i_15 = 3; i_15 < 14; i_15 += 1) 
                        {
                            {
                                arr_47 [i_11] [i_12] [i_13] [i_14] [i_15 + 1] = (~(((((/* implicit */int) (short)8884)) | (((/* implicit */int) (unsigned short)63960)))));
                                arr_48 [i_14] [i_14] [i_13] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) - (9ULL)));
                                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8884)) ? ((-(1994715551181416158LL))) : (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)50209)))))))));
                                var_27 = (~(((/* implicit */int) (short)22725)));
                                var_28 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_11] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4513))))) ? (((/* implicit */int) arr_46 [(signed char)9] [i_14] [i_15])) : (((((/* implicit */_Bool) arr_31 [i_11] [i_12])) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) (+(((2901437477U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110)))))));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)50209)) << (((/* implicit */int) ((((unsigned long long int) arr_31 [i_11] [i_13])) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (2901437477U))))))))))));
                    var_31 = ((/* implicit */unsigned int) ((long long int) arr_30 [i_11]));
                }
            } 
        } 
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) ((-877516715) | (-1311584086)));
        var_33 = ((/* implicit */_Bool) min((var_33), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_16] [(unsigned short)14]))) : (((((/* implicit */_Bool) -877516707)) ? (8255448940451397675ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) && (((/* implicit */_Bool) var_6))))));
    }
    for (unsigned short i_17 = 1; i_17 < 13; i_17 += 2) 
    {
        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_17])) << (((/* implicit */int) ((_Bool) ((arr_46 [i_17] [i_17] [i_17]) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (unsigned char)111))))))));
        arr_54 [6U] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((-5187752451612804959LL) + (((/* implicit */long long int) 561989512U)))) > (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_17 + 1] [i_17 - 1] [i_17 - 1]))))))));
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)9), ((unsigned char)45)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(((/* implicit */int) arr_43 [i_17] [7U] [i_17] [i_17] [2ULL]))))))) : (((((/* implicit */_Bool) -99912007)) ? (1729533552U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
    }
}
