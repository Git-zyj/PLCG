/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159863
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~((((+(((/* implicit */int) arr_0 [i_0])))) & (((-630849293) | (630849293))))))))));
        var_13 = min(((-(arr_1 [i_0]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52478))) + (arr_1 [i_0]))));
        var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))) && (((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_1))))))) & ((+((~(((/* implicit */int) (unsigned short)10131))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned short)52478)))) + (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_0)))))));
        var_15 = ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_16 = min(((-(((((/* implicit */_Bool) (short)-12843)) ? (((/* implicit */int) (short)9724)) : (arr_7 [i_1]))))), (((((/* implicit */_Bool) ((-807735543) - (((/* implicit */int) var_0))))) ? (arr_7 [i_1]) : ((-(((/* implicit */int) var_0)))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] [i_1] |= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_9 [i_1]))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), ((((((+(arr_6 [i_1] [i_2]))) ^ (arr_6 [i_1] [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (arr_6 [i_1] [i_2]))) < (min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])), (2025860465289072496ULL)))))))))));
            arr_11 [i_2] [i_1] [i_1] |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)227))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) % (arr_7 [i_1])));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (6388583609560144266ULL))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)23531)))))));
                        arr_19 [i_1] [i_3] [i_5] = ((/* implicit */signed char) ((unsigned short) arr_12 [i_1]));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)12842)))) & (630849293)));
                        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_12 [i_1]) >= (arr_12 [i_1])))), ((+(arr_12 [i_1])))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        var_22 = ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-12843)) % (((/* implicit */int) var_7))))))) <= ((+(4353700450402198890ULL))));
                        var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3534))) < (201525545U))) ? (((/* implicit */int) ((unsigned short) (unsigned short)22511))) : (((/* implicit */int) (short)21718))))), (-1442088921851867968LL)));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)43025)) <= (((/* implicit */int) (unsigned short)52479)))))));
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) 14093043623307352752ULL)) && (((/* implicit */_Bool) (unsigned short)30108))))), (arr_30 [i_1] [i_6] [i_7] [i_10])))), ((~(((/* implicit */int) arr_20 [i_1]))))));
                        arr_31 [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)52478)), (3022144472U)))) < (((((/* implicit */_Bool) (unsigned short)43793)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (402922454665884284ULL))))))) & (min((((/* implicit */unsigned long long int) (unsigned short)33605)), (16805949550308481275ULL)))));
                    }
                    var_26 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) min(((unsigned short)50398), (((/* implicit */unsigned short) (_Bool)1))))), (-7872968608443486926LL))), (((/* implicit */long long int) (unsigned short)50390))));
                }
            } 
        } 
        arr_32 [i_1] [i_1] = ((/* implicit */unsigned char) min((min((max((var_6), (arr_7 [i_1]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_20 [i_1]))))))), (((/* implicit */int) max((min((arr_30 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) arr_29 [0])))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)15137))))))))));
    }
    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
    {
        arr_36 [i_11] = ((/* implicit */unsigned int) ((min((7666941961301565312ULL), (((/* implicit */unsigned long long int) (unsigned short)42362)))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_11] [i_11] [i_11] [i_11])))))));
        var_27 = ((/* implicit */signed char) var_7);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_13 = 1; i_13 < 16; i_13 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                for (short i_15 = 0; i_15 < 19; i_15 += 2) 
                {
                    for (int i_16 = 1; i_16 < 17; i_16 += 1) 
                    {
                        {
                            arr_49 [i_16] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(arr_26 [i_12] [i_13] [i_16] [i_14] [i_15] [i_16])))))) ? (((/* implicit */unsigned long long int) min((arr_46 [i_13] [i_12]), (((/* implicit */long long int) arr_7 [i_12]))))) : (min((14093043623307352736ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_16] [i_13] [i_14] [i_16])) ? (543191058U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_16]))))))))));
                            var_28 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_12] [i_13] [i_14]))))) ? (((((/* implicit */int) arr_48 [i_12] [i_13] [i_14] [i_15] [i_16])) / (arr_22 [i_15] [i_15] [i_15]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1817624360)))))))), (((long long int) (+(4577254712395909333LL))))));
                            var_29 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_50 [i_12] [i_13] [i_13] = ((/* implicit */unsigned int) ((((arr_44 [i_13 + 1] [i_13]) / (arr_44 [i_13 + 2] [i_13]))) / ((~(arr_44 [i_13 + 2] [i_13])))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_17 = 1; i_17 < 18; i_17 += 2) 
        {
            arr_54 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) var_7);
            var_30 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_6) & (((/* implicit */int) arr_16 [i_12] [i_17] [i_12] [i_12] [i_12] [i_12]))))) ? (((/* implicit */int) arr_9 [i_17 - 1])) : ((~(var_9)))))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            arr_57 [i_18] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned short)38619)) : (-1859472573)));
            var_31 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18043821619043667332ULL))))), (402922454665884270ULL));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (~((-(arr_24 [i_18]))))))));
        }
        arr_58 [i_12] = ((/* implicit */unsigned int) (~(8459655477482882031ULL)));
    }
}
