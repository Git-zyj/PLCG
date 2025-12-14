/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122484
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */signed char) arr_1 [i_0] [i_0])), (var_9)))), (max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)172))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (unsigned short)20)))))) : (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0] [i_0])), ((short)1403))))));
        var_15 += ((/* implicit */long long int) ((((/* implicit */int) min((arr_1 [(signed char)0] [(signed char)0]), (arr_1 [(signed char)2] [i_0])))) != (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))))));
        var_16 = ((/* implicit */short) (signed char)103);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                var_17 *= ((/* implicit */unsigned int) arr_7 [i_1] [i_1 + 1]);
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */int) (short)-32759);
                            arr_14 [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */short) ((-571071237) >= (1308583435)));
                        }
                    } 
                } 
            }
            arr_15 [(signed char)6] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) arr_0 [4ULL])));
        }
        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        {
                            arr_26 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_7 - 1] [i_9 - 1])) == (((/* implicit */int) ((unsigned char) (short)24185)))));
                            var_19 *= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1 - 1] [i_6] [i_1 - 1] [i_1 - 1] [i_9 + 2] [i_9]))) < (var_8))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-1400)) | (((/* implicit */int) arr_16 [i_1])))))));
                            var_20 = ((/* implicit */short) ((signed char) arr_23 [i_9 + 1]));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) && (((/* implicit */_Bool) arr_5 [i_6]))));
            }
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((arr_1 [2LL] [i_6]) ? (((/* implicit */int) arr_1 [(short)12] [i_6])) : (((/* implicit */int) arr_1 [(signed char)2] [i_6])))))));
        }
        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1]))));
            arr_31 [(_Bool)0] [i_10] [i_10] = ((/* implicit */short) ((unsigned char) arr_20 [i_1 - 2]));
            var_24 = ((/* implicit */unsigned short) arr_23 [(signed char)14]);
        }
        var_25 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (short)32767))));
        var_26 = ((/* implicit */short) var_10);
        arr_32 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) || (((/* implicit */_Bool) 406141978757781418ULL))));
    }
    var_27 = ((/* implicit */unsigned short) (((~(var_4))) < (((/* implicit */int) var_11))));
    var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_2))));
    var_29 = ((/* implicit */long long int) var_8);
    var_30 = ((/* implicit */unsigned char) ((var_7) * (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) % (((/* implicit */int) var_0))))));
}
