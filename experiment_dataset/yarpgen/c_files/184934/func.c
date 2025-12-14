/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184934
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)30378)) : (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) >> (((arr_2 [i_0]) - (2196581357115534647LL)))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0]))) : (2435545966250119701ULL)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) -790337026))));
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_1 [i_3]))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (arr_0 [i_3 + 1]) : (arr_0 [i_3 - 1])));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (short)-32751))));
                            arr_12 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) var_7)))) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_3 - 4] [i_4] [i_4 - 1] [i_4])) : (((var_3) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned short)13912))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) arr_17 [i_5] [i_5 - 1] [i_5]);
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)0))) ? (((((/* implicit */_Bool) 2635440187U)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned short)8545)))) : (((/* implicit */int) (short)19154)))))));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_8 = 4; i_8 < 24; i_8 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
            {
                var_19 *= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_19 [i_7] [i_7]))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
            {
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_22 [i_10]))) ? (((((/* implicit */int) (unsigned short)4614)) + (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_25 [(unsigned short)8])) + (16178)))))));
                arr_28 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) (-(((arr_24 [i_7] [i_7] [16ULL] [16ULL]) ? (((/* implicit */int) arr_23 [i_7] [i_7] [i_7] [i_10])) : (((/* implicit */int) arr_19 [i_10] [i_7]))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
            {
                arr_31 [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32767))));
                arr_32 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_26 [(unsigned char)9] [i_8 - 3] [i_8 - 4] [i_11])) : (((/* implicit */int) arr_26 [(signed char)2] [i_8 - 3] [i_8 - 3] [(signed char)2]))));
            }
            var_22 *= ((/* implicit */signed char) (-(var_0)));
            var_23 = ((/* implicit */short) arr_29 [i_8] [i_8 - 2] [i_7]);
            arr_33 [4ULL] [i_8 - 3] |= ((((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56991)))))) + (((/* implicit */int) arr_20 [i_7] [i_7] [i_7])));
            arr_34 [i_7] [i_7] [i_7] = (unsigned char)1;
        }
        for (long long int i_12 = 4; i_12 < 22; i_12 += 1) 
        {
            arr_38 [i_7] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_30 [(unsigned short)21] [i_12 + 2] [(unsigned short)21])) < (((/* implicit */int) (unsigned short)65535)))) ? (((/* implicit */int) arr_36 [i_12 - 4] [i_12 - 3])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)49270))))) : (min((((/* implicit */unsigned int) arr_30 [i_12 + 1] [(unsigned char)7] [i_12 - 2])), (arr_37 [i_12] [i_12 - 3] [i_12])))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((short) (short)-19465)))));
            arr_39 [i_12] = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) (unsigned short)4607)))) ? (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)8680)))) : (((((/* implicit */int) arr_35 [i_7])) - (((/* implicit */int) (short)-19465)))))), (((/* implicit */int) arr_30 [i_7] [i_7] [i_7]))));
            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)1))))));
        }
        var_26 = ((/* implicit */unsigned int) min((var_26), (max((min((arr_37 [(_Bool)1] [i_7] [i_7]), (((/* implicit */unsigned int) ((int) (unsigned short)19))))), (((/* implicit */unsigned int) (short)-22529))))));
    }
}
