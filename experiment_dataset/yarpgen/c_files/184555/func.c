/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184555
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_1;
        var_18 = ((/* implicit */long long int) var_4);
        arr_4 [i_0] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) -6527913494161290592LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((((/* implicit */int) arr_0 [i_0])) << (((15772601243051772935ULL) - (15772601243051772926ULL))))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (unsigned short)15800))))) ^ (var_5)))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (unsigned short)31);
            var_20 |= ((/* implicit */signed char) var_15);
            arr_12 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_10)) * ((-(((/* implicit */int) min((var_11), ((unsigned short)65504))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                var_21 ^= ((/* implicit */unsigned char) max((var_5), (((/* implicit */unsigned long long int) -7768496210000447908LL))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_10))));
                            arr_20 [i_1] [i_2] [(unsigned char)6] [(unsigned char)6] [(signed char)2] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-48))))) <= (-7700178995911739439LL)))), ((~(((/* implicit */int) arr_10 [i_4] [i_1]))))));
                            arr_21 [i_4] [9U] [i_1] [i_4] [i_5] = ((/* implicit */int) ((unsigned short) ((unsigned short) ((signed char) arr_13 [i_1] [i_2] [i_2] [i_2]))));
                        }
                    } 
                } 
            }
            /* LoopSeq 4 */
            for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_23 = (-(((/* implicit */int) (unsigned char)10)));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            var_24 = max(((unsigned short)31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_17))))));
                            var_25 = ((/* implicit */short) ((int) 2674142830657778688ULL));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) var_12);
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 11; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_9 - 1] [i_1])) : (((/* implicit */int) arr_6 [i_9 + 1] [i_1]))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_9 - 3] [i_1] [i_9 - 1]))))))));
                            arr_37 [i_1] [i_2] [(unsigned short)2] [i_6] [i_1] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 4294967270U))))))));
                            var_28 -= ((signed char) ((long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (12U))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_22 [i_1] [(unsigned short)9]))));
                            arr_38 [i_1] [i_1] [i_6] [i_9] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_1] [(unsigned short)7] [13ULL] [(unsigned short)11] [i_1])) && (((/* implicit */_Bool) arr_22 [i_2] [i_6])))) ? (((/* implicit */int) arr_24 [i_1])) : (((((/* implicit */_Bool) arr_18 [i_10] [i_1] [(short)13] [i_2] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)18)))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                arr_43 [2LL] [i_2] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_16 [i_1] [i_2] [i_11] [i_1]))), ((((!(((/* implicit */_Bool) 7768496210000447907LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 33554416U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                var_30 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41302)) << (((((int) arr_31 [i_1] [i_1] [i_1] [i_1] [i_11] [i_1])) - (477318201)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41302)) << (((((((((int) arr_31 [i_1] [i_1] [i_1] [i_1] [i_11] [i_1])) - (477318201))) + (1736939231))) - (21))))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        {
                            arr_49 [i_1] [i_1] [i_1] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)71))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max(((~(arr_17 [i_11] [i_2] [i_11]))), (((/* implicit */int) ((((/* implicit */int) (signed char)79)) <= (((/* implicit */int) (signed char)79))))))))));
                            arr_50 [i_1] [i_11] [i_11] [(unsigned short)0] [i_13] [i_1] |= ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */int) (unsigned short)20252)) >= (((/* implicit */int) (short)-28019))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1798034874U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (var_4))))))))));
                            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((max((arr_28 [i_1] [i_11] [(short)10]), (((/* implicit */unsigned int) (unsigned short)65533)))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_11])))))) - (3902245129805431369LL)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_14 = 1; i_14 < 14; i_14 += 4) 
                {
                    var_33 -= ((/* implicit */unsigned short) var_9);
                    var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(-6407190274027241455LL)))) ? ((~(((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) var_7)))) > (((/* implicit */int) max((((/* implicit */unsigned char) arr_24 [i_1])), ((unsigned char)0))))));
                    var_35 += ((/* implicit */short) 1798034874U);
                }
                arr_53 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            }
            /* vectorizable */
            for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                var_36 = ((/* implicit */unsigned int) ((unsigned short) arr_19 [i_1] [i_1] [i_1] [i_2] [i_15] [i_15] [i_15]));
                var_37 = ((/* implicit */unsigned int) ((unsigned short) ((var_5) | (((/* implicit */unsigned long long int) arr_55 [i_1] [i_1])))));
            }
            for (unsigned short i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                arr_58 [4ULL] [i_2] [i_1] [(unsigned short)9] = ((/* implicit */short) (~(var_4)));
                arr_59 [i_1] [i_1] [i_16] = ((/* implicit */signed char) var_4);
                arr_60 [i_1] = ((/* implicit */signed char) ((unsigned char) (~(((((((/* implicit */int) (signed char)-79)) + (2147483647))) << (((((/* implicit */int) (unsigned char)255)) - (255))))))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    for (unsigned int i_18 = 1; i_18 < 13; i_18 += 4) 
                    {
                        {
                            arr_66 [12U] [(unsigned short)1] [i_1] [12U] = ((unsigned short) ((signed char) var_2));
                            var_38 = ((/* implicit */short) max((((/* implicit */long long int) (signed char)-124)), (min((arr_62 [i_18 + 1] [i_1] [i_1] [(short)12]), (((/* implicit */long long int) ((unsigned short) arr_27 [i_16] [(unsigned short)7] [i_16] [i_1])))))));
                        }
                    } 
                } 
            }
        }
        var_39 ^= ((/* implicit */signed char) (unsigned char)248);
    }
    /* LoopSeq 3 */
    for (short i_19 = 0; i_19 < 19; i_19 += 4) 
    {
        var_40 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) arr_67 [i_19]))), (var_3)));
        arr_71 [i_19] = (signed char)-35;
        var_41 = ((/* implicit */unsigned int) var_5);
    }
    for (unsigned long long int i_20 = 3; i_20 < 15; i_20 += 4) 
    {
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (short)0))));
        arr_74 [i_20 - 3] [i_20] = arr_68 [i_20];
        var_43 += ((/* implicit */long long int) var_13);
        var_44 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) -7768496210000447908LL)));
        var_45 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((arr_69 [13LL]) | (((/* implicit */int) (unsigned short)5313))))) ? (7563545507876035414LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((arr_72 [i_20]) > (((/* implicit */long long int) var_2)))))));
    }
    /* vectorizable */
    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 4) 
    {
        arr_79 [i_21] [i_21] |= ((/* implicit */unsigned short) ((signed char) var_3));
        var_46 ^= ((/* implicit */unsigned short) (short)-10461);
    }
}
