/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17496
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
    var_10 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
                            {
                                arr_14 [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) ((signed char) (signed char)-1))) : (((/* implicit */int) (signed char)-1))))), (14487752254713964643ULL)));
                                var_11 = ((/* implicit */int) ((long long int) ((unsigned long long int) ((unsigned long long int) 8ULL))));
                                var_12 = ((/* implicit */short) max((((arr_8 [i_0]) >> (((18446744073709551598ULL) - (18446744073709551570ULL))))), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
                            }
                            for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                            {
                                var_13 = ((/* implicit */long long int) var_7);
                                arr_17 [8ULL] [(signed char)19] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((int) arr_5 [i_0] [i_2] [i_5]));
                            }
                            arr_18 [(signed char)10] [(signed char)10] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)13653)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32704))) : (-1LL)));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) (unsigned short)20619);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            for (long long int i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 3; i_9 < 7; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 2; i_10 < 8; i_10 += 1) 
                        {
                            arr_32 [(signed char)10] [(unsigned short)10] [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2450801772120274432LL)) ? (((((/* implicit */_Bool) (unsigned short)51885)) ? (((/* implicit */int) (_Bool)1)) : (-1783419058))) : (arr_31 [i_8] [i_8] [i_8])));
                            var_15 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) ((var_9) ? (41541412046001826LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [14LL])))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            arr_36 [i_11] [i_9] [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_7 + 1] [5] [i_9 - 3])) - (((/* implicit */int) arr_24 [i_7 - 1] [i_7 - 1] [i_9 + 1]))));
                            var_16 = ((/* implicit */unsigned long long int) arr_9 [(signed char)21] [i_7 - 1] [(signed char)21] [i_9]);
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            arr_39 [i_6] [i_6] [i_6] [i_6] [(signed char)2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                            var_17 = ((18446744073709551608ULL) ^ (((/* implicit */unsigned long long int) 41541412046001826LL)));
                        }
                        arr_40 [i_9] [i_8] [i_7] [(signed char)9] = ((/* implicit */int) ((long long int) arr_12 [5ULL] [(unsigned char)7] [i_7 - 1] [i_8] [(short)4] [i_9]));
                    }
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_43 [(unsigned char)10] [(unsigned char)10] [i_8] [i_13] = ((/* implicit */signed char) (_Bool)1);
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (unsigned char)2)) | (var_1))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_27 [i_6] [1LL] [i_6])) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) var_8)) : (((int) min((((/* implicit */unsigned long long int) (signed char)-21)), (4609738861335251095ULL))))));
                        var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) (unsigned char)149)));
                        arr_44 [i_6] [i_13] = ((/* implicit */signed char) min((min((8323072), (((/* implicit */int) var_0)))), (((/* implicit */int) arr_24 [i_7 - 1] [i_8 + 1] [i_8 - 1]))));
                    }
                    arr_45 [i_6] [i_7 + 1] [i_7 + 1] = ((/* implicit */unsigned long long int) (+((~(-251380875)))));
                }
            } 
        } 
    } 
}
