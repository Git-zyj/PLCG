/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134673
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
    var_15 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]));
        arr_4 [i_0] [2LL] = ((/* implicit */_Bool) (short)-6);
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [(unsigned short)14]);
    }
    for (long long int i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_15 [i_4] [(unsigned char)18] [i_2] [(unsigned char)18] = ((/* implicit */unsigned char) arr_0 [i_1 - 1] [i_2]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_18 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_4] [i_5] [i_3] [i_1 - 3] = ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_1 - 1] [i_1 + 1] [i_3]));
                            arr_19 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 8594521610309841772LL)) ? (((/* implicit */int) (short)-20198)) : (((/* implicit */int) (unsigned short)6))));
                            arr_20 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1] &= ((/* implicit */short) arr_17 [i_1] [18]);
                            arr_21 [i_4] [(short)14] [i_3] [i_4] [17U] [i_4] [i_2] = ((/* implicit */signed char) ((long long int) var_3));
                        }
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_24 [i_1] [i_3] = ((/* implicit */signed char) min((-8594521610309841774LL), (((/* implicit */long long int) ((arr_23 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] [5]) / (((/* implicit */int) (short)-11)))))));
                            arr_25 [i_1 - 1] [(unsigned short)15] [13] [i_1] [i_1] [i_1 - 3] [(_Bool)0] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_4] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))) : (8594521610309841776LL))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((short) (signed char)106))));
                            arr_26 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-32619))));
                        }
                        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            arr_29 [i_1 + 1] [5U] [i_3] [i_4] [i_7] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1 + 1] [i_4]))) > (min((8594521610309841772LL), (((((/* implicit */_Bool) arr_22 [(unsigned char)6] [(unsigned char)6] [0] [i_4] [i_4] [i_1])) ? (8594521610309841772LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))))));
                            arr_30 [(short)18] [(short)18] [i_4] [i_4] [(short)18] [(short)18] = ((/* implicit */short) (((~(((/* implicit */int) arr_13 [(short)8] [i_3] [i_1 - 2])))) != (((/* implicit */int) arr_9 [(unsigned char)4] [i_2]))));
                            arr_31 [(unsigned short)3] [(short)8] [(unsigned short)3] = ((((((((/* implicit */_Bool) 3622259830U)) ? (((/* implicit */unsigned int) 2054849524)) : (arr_1 [i_1]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (short)-19741))))))) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)97))))));
                            arr_32 [(unsigned char)14] [(unsigned char)14] [i_3] [i_4] [i_7] = min((((int) ((var_14) + (((/* implicit */int) (signed char)-98))))), (((/* implicit */int) arr_8 [i_1] [i_2] [i_3])));
                            arr_33 [(unsigned short)4] [(unsigned short)5] = ((/* implicit */unsigned char) (unsigned short)39716);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_37 [i_8] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) (short)11583);
                            arr_38 [i_1] = ((/* implicit */_Bool) 3797125090U);
                            arr_39 [i_1 - 1] [i_2] [i_2] [i_3] [i_3] [i_4] [i_8] &= ((/* implicit */int) ((arr_13 [(unsigned char)9] [i_1 + 1] [i_1 - 3]) ? (((arr_0 [i_1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_28 [0]))) : (arr_16 [i_1 - 1] [i_1 - 2])));
                        }
                        arr_40 [i_1 + 1] = ((/* implicit */signed char) ((((_Bool) arr_16 [i_1 - 3] [i_1 - 3])) ? (arr_10 [i_1 - 2] [(unsigned short)7]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37167)) || (((/* implicit */_Bool) (unsigned short)65534))))) : (((/* implicit */int) ((unsigned char) -1187142700))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            arr_43 [2LL] [2LL] [i_9] = ((/* implicit */int) arr_9 [(unsigned short)4] [i_1 - 2]);
            arr_44 [(unsigned char)15] [(unsigned char)15] = ((((/* implicit */_Bool) ((arr_23 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_9]) / (((int) var_9))))) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) < (((/* implicit */int) ((((/* implicit */unsigned int) -940807508)) != (var_5))))))));
        }
        for (int i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            arr_48 [i_1 - 2] [3] [i_1] = (_Bool)1;
            arr_49 [16] [16] [i_10] = ((/* implicit */long long int) 2258830541U);
        }
    }
    var_16 = ((/* implicit */_Bool) (short)20197);
    var_17 = ((/* implicit */_Bool) var_9);
    var_18 = ((/* implicit */_Bool) var_3);
}
