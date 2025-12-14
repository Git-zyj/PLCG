/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180706
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
    var_19 = ((/* implicit */long long int) ((4127299540U) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)18454))) ? (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0]))) / (arr_1 [i_0] [i_0])))) : (((unsigned int) min((167667776U), (167667756U))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? ((-(((/* implicit */int) ((var_16) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((-3281573934215132027LL), (((/* implicit */long long int) var_8))))) && (((/* implicit */_Bool) var_4)))))));
        arr_2 [i_0 - 4] [(short)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) 8744566812660675975LL)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [5U] [i_0])) << (((281474975662080LL) - (281474975662075LL)))))) : (3281573934215132026LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4127299540U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (((4127299520U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16352))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)26))));
            var_23 = ((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (-1325565260)));
            var_24 = ((/* implicit */long long int) 0);
        }
        for (unsigned short i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) var_0);
                            var_26 = ((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_4] [5U] [i_6]);
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 4127299525U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (18446744073709551615ULL)));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_1] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) : (((var_8) & (3091057968U)))));
        }
        arr_19 [i_1] = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_1] [i_1]));
        var_29 = ((((/* implicit */_Bool) (-(0)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((arr_13 [i_1] [i_1] [i_1] [i_1]) == (arr_13 [i_1] [i_1] [i_1] [i_1])))));
    }
    var_30 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_31 = ((/* implicit */unsigned char) ((signed char) arr_10 [i_9]));
                var_32 = arr_10 [i_7 + 3];
                var_33 += ((/* implicit */int) ((short) (-(((/* implicit */int) arr_18 [i_9] [i_8] [i_8] [i_7] [i_7 + 3] [i_7] [14])))));
            }
            for (unsigned short i_10 = 2; i_10 < 7; i_10 += 3) 
            {
                arr_29 [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 167667776U)) - (((((/* implicit */_Bool) (unsigned short)0)) ? (1ULL) : (((/* implicit */unsigned long long int) arr_25 [i_7]))))));
                var_34 = ((/* implicit */unsigned char) var_13);
            }
            var_35 = ((/* implicit */short) ((unsigned long long int) ((signed char) arr_16 [i_8] [i_8] [i_8] [(_Bool)1])));
        }
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            var_36 += ((/* implicit */_Bool) (-((+(var_16)))));
            var_37 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5843))) & (var_16))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [(short)1]))) : (var_7)))));
        }
        var_38 += ((/* implicit */long long int) (_Bool)1);
        var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_7 - 2]))));
        var_40 += ((/* implicit */short) ((arr_17 [(_Bool)1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1]) & (arr_17 [18ULL] [i_7] [i_7] [i_7 - 1] [i_7 + 3])));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 1; i_12 < 7; i_12 += 1) 
        {
            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_16 [i_7] [8U] [i_12] [i_7]) / (((/* implicit */long long int) arr_21 [i_7] [i_7]))))) ? (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7] [3ULL] [i_12 + 1] [i_12 + 3] [i_12])) ? (arr_30 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(unsigned char)6]))))))))));
            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-25))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7] [i_7]))) : (((arr_30 [i_7]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-12617)))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_13] [i_13])) - (((/* implicit */int) var_13))));
        var_44 += ((/* implicit */_Bool) arr_14 [i_13] [i_13] [i_13]);
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            for (short i_15 = 3; i_15 < 15; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    {
                        arr_44 [i_13] [i_14] [i_14] [i_14] [i_15] [i_16] = ((/* implicit */long long int) var_16);
                        var_45 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (signed char)3)))));
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) 4127299519U))));
                        arr_45 [15] [8U] [i_14] [i_15 + 2] [i_15 + 2] = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_13] [i_13] [i_13] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 + 1]))));
                    }
                } 
            } 
        } 
        arr_46 [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-112)))))));
    }
    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
    {
        arr_50 [i_17] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25208)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_17] [i_17]))))) ? (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)6)))) : (((int) (short)-5843))))));
        arr_51 [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_36 [(_Bool)1] [i_17]), (arr_6 [14LL] [14LL]))))) % ((+(var_18)))))) ? (((/* implicit */unsigned int) (~(((int) arr_6 [i_17] [i_17]))))) : (arr_42 [i_17] [i_17] [i_17] [i_17] [i_17])));
        arr_52 [i_17] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_15)))));
    }
}
