/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182908
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_9 [1] [i_1] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -71269180)) ? (1154471269) : (1154471269))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_11 ^= ((/* implicit */unsigned long long int) ((unsigned char) (signed char)7));
                        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((unsigned short) ((arr_19 [i_4 - 2] [i_4 - 1]) / (arr_19 [i_4 - 1] [i_4 - 1])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_13 += ((((/* implicit */unsigned long long int) arr_18 [i_3] [i_3] [i_3] [i_7])) / (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) (short)3988))))) ? (((/* implicit */unsigned long long int) 1963067114U)) : (7486734392172926400ULL))));
                                var_14 += ((/* implicit */unsigned short) ((((_Bool) (short)32767)) ? (((/* implicit */int) ((unsigned char) ((unsigned int) arr_23 [i_8])))) : (max((((/* implicit */int) (short)25375)), (arr_25 [i_7] [i_7] [(short)18] [(short)18] [i_7])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            var_15 = (signed char)31;
                            var_16 &= ((/* implicit */unsigned int) var_4);
                            var_17 = ((/* implicit */unsigned short) ((unsigned int) arr_17 [(_Bool)1] [i_10] [i_12 + 1] [i_12 + 1]));
                            arr_41 [i_9] [i_9] [(signed char)4] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4315))) * ((-(0U)))));
                        }
                        for (unsigned char i_14 = 2; i_14 < 14; i_14 += 3) 
                        {
                            arr_45 [i_14 - 1] [i_12] [i_9] [i_9] [(_Bool)0] [i_9] = ((/* implicit */short) ((long long int) (-(((/* implicit */int) (_Bool)1)))));
                            arr_46 [i_9] [i_9] [(_Bool)1] [i_9] [i_9] = ((/* implicit */unsigned int) ((int) (short)2852));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_9] [i_10 + 1] [i_11] [i_12] [i_9])) ? (((/* implicit */int) ((var_4) < (((/* implicit */int) (signed char)31))))) : (((/* implicit */int) (short)535))));
                            var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_9] [i_9])) + (((/* implicit */int) var_1))))) + (arr_31 [i_9])));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) 2331900171U))))))));
                        }
                        var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -355955522)) : (2283158605492312437LL)))));
                        var_22 += ((/* implicit */short) var_0);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            {
                                arr_52 [i_9] [(unsigned char)7] [i_9] [i_9] [i_9] [(short)0] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)1))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)111))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))));
                                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_25 ^= ((unsigned int) arr_47 [i_9] [i_11] [i_9]);
                    var_26 = ((/* implicit */unsigned short) (short)2852);
                }
                for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
                {
                    arr_55 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) var_9);
                    var_27 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) arr_27 [i_10 + 1])));
                }
                var_28 |= ((/* implicit */short) (unsigned char)145);
                arr_56 [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) arr_27 [i_10 + 1])) : (((/* implicit */int) arr_27 [i_9])))) % ((((_Bool)1) ? (-355955526) : (((/* implicit */int) (unsigned short)50408))))));
            }
        } 
    } 
}
