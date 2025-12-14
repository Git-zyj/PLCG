/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118788
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (var_7) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) (signed char)-95))), ((-(var_5))))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) min(((+(((int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_3 [i_1 - 3]))))))));
                var_15 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((int) -2317194062495229296LL))) || (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) 2343249782U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (15ULL))) : (((/* implicit */unsigned long long int) ((471846300U) >> (min((0U), (3823121009U))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (var_8)))) ? (max((((/* implicit */long long int) arr_3 [i_1])), (var_8))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19865)) ^ (((/* implicit */int) (signed char)-11))))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (unsigned int i_2 = 4; i_2 < 13; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 13; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) -2317194062495229296LL))));
                    arr_16 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */int) min((((long long int) arr_12 [i_2] [i_3] [i_4])), (3231563514332121261LL)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_6 = 2; i_6 < 13; i_6 += 3) /* same iter space */
        {
            arr_23 [i_5] = ((/* implicit */unsigned int) arr_19 [i_5] [i_6]);
            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_5 - 1]))));
            arr_24 [i_5 - 1] [i_5] [i_5] = ((/* implicit */short) ((((2317194062495229295LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19865))))) ? (((((/* implicit */_Bool) 2978568421U)) ? (var_4) : (var_0))) : (3231563514332121261LL)));
        }
        for (int i_7 = 2; i_7 < 13; i_7 += 3) /* same iter space */
        {
            arr_27 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 2222179194U)) : (var_0)));
            arr_28 [i_5] [i_7 - 1] [i_5 - 1] = ((/* implicit */unsigned int) ((unsigned short) (short)-4657));
        }
        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) (!(((/* implicit */_Bool) -3231563514332121261LL)))))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 4; i_9 < 12; i_9 += 4) 
            {
                arr_36 [i_5] = ((/* implicit */int) ((unsigned long long int) arr_22 [i_5]));
                arr_37 [i_5] [i_5] [i_9] = arr_21 [i_8 - 1] [i_5];
            }
        }
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_6))));
    }
    for (int i_10 = 1; i_10 < 15; i_10 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) 1772003376U)) ? (((-2317194062495229292LL) | ((~(2317194062495229278LL))))) : (min((((/* implicit */long long int) ((((((/* implicit */int) arr_19 [i_10] [i_10])) + (2147483647))) << (0U)))), ((~(arr_0 [i_10] [i_10]))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_22 ^= ((/* implicit */signed char) arr_1 [i_10]);
            var_23 += ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((18446744073709551615ULL) - (18446744073709551586ULL)))))), (((var_10) + (var_6))))));
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 14; i_12 += 2) 
            {
                for (int i_13 = 3; i_13 < 15; i_13 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            arr_55 [i_14] [i_13 - 3] [i_13] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((var_0) + (arr_17 [i_10 - 1])))));
                            arr_56 [i_14] [i_14] [i_14] [i_14] [i_13] [i_14] = ((/* implicit */unsigned int) 315221676);
                            var_24 += 137438937088LL;
                            arr_57 [i_10] [i_11] [i_14] &= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45671))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))));
                            arr_58 [i_10] [i_11] [i_12] [i_13 - 1] [i_13] = ((/* implicit */unsigned int) 6ULL);
                        }
                        var_25 = ((/* implicit */unsigned short) arr_52 [i_10 - 1] [i_11] [i_12] [i_13] [i_13]);
                        arr_59 [i_13] = ((/* implicit */unsigned short) (short)32753);
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_12))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_44 [i_10 - 1] [i_10] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (min((((/* implicit */unsigned long long int) (unsigned short)3463)), (0ULL))))), (((((/* implicit */_Bool) (unsigned short)3463)) ? (arr_53 [i_10 + 1] [i_10 - 1] [i_10 + 1]) : (((/* implicit */unsigned long long int) max((arr_41 [i_10]), (((/* implicit */long long int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 15; i_15 += 4) 
        {
            for (signed char i_16 = 2; i_16 < 12; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 2; i_17 < 15; i_17 += 3) 
                {
                    {
                        var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19864)) ? (((/* implicit */long long int) arr_64 [i_17] [i_16] [i_15] [i_10 - 1])) : (var_4)));
                        arr_68 [i_10] [(short)4] [i_16] [i_17 + 1] |= 2824423503U;
                        var_29 ^= ((/* implicit */long long int) arr_18 [i_17 + 1]);
                    }
                } 
            } 
        } 
        arr_69 [i_10] = ((/* implicit */unsigned int) min((max((min((((/* implicit */long long int) 3823120996U)), (arr_0 [i_10] [i_10]))), (5090569142302144925LL))), ((~(((((/* implicit */_Bool) arr_3 [i_10 - 1])) ? (((/* implicit */long long int) var_1)) : (arr_0 [i_10] [i_10])))))));
    }
}
