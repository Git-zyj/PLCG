/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139249
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
    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) (_Bool)1))))), (var_15)))) ? (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (short)-2048)))))) : (var_9)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0])), ((unsigned char)59)))))), (var_5)));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4111263661U)))) ? (((arr_2 [i_0]) ? (-4697662323424678412LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (arr_1 [i_0 - 1] [(_Bool)1])))) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [11LL] [i_0 - 3])));
        var_20 = ((/* implicit */_Bool) (unsigned char)191);
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (((unsigned long long int) arr_2 [15ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_1 [(_Bool)1] [i_0 + 1])));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_22 *= ((/* implicit */unsigned char) min((max((arr_5 [i_1]), (((/* implicit */long long int) arr_7 [i_1 - 2])))), (((/* implicit */long long int) arr_7 [11U]))));
        var_23 = (~(((0) | (((/* implicit */int) (unsigned char)52)))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    var_24 += ((/* implicit */_Bool) arr_6 [i_2 + 1]);
                    arr_16 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((unsigned char) ((arr_11 [i_2 + 2]) << (((arr_0 [i_2]) - (2016906034))))))) : (((/* implicit */signed char) ((unsigned char) ((arr_11 [i_2 + 2]) << (((((((arr_0 [i_2]) - (2016906034))) + (874524919))) - (18)))))));
                }
            } 
        } 
        arr_17 [i_2] = ((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 2]))));
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_25 = (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)183))));
            var_26 -= ((/* implicit */int) var_16);
        }
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_25 [i_2 + 1] [i_2 + 2] [i_2] = ((/* implicit */long long int) arr_23 [i_2 + 2] [i_2 - 1] [i_6]);
            arr_26 [i_2 - 1] [i_2] [i_6] = ((/* implicit */long long int) var_13);
        }
        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            arr_29 [i_2] [i_7] [i_2] = (_Bool)1;
            arr_30 [i_2] = ((/* implicit */long long int) arr_8 [i_7] [i_2 + 2]);
            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_16))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 4) 
    {
        var_28 = ((int) arr_33 [i_8 + 1] [i_8 + 2]);
        var_29 = ((/* implicit */_Bool) ((short) arr_31 [i_8 - 1]));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_30 = ((/* implicit */long long int) (+(arr_37 [i_11 + 1])));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 511U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? ((-(var_17))) : (((/* implicit */int) ((((/* implicit */int) arr_42 [i_12] [5LL] [i_10] [i_9])) < (((/* implicit */int) arr_38 [i_9] [(short)3])))))));
                        var_32 = ((/* implicit */_Bool) var_17);
                        var_33 = ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_34 ^= ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) (unsigned short)10)))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                var_35 *= (!(((/* implicit */_Bool) (+(var_4)))));
                var_36 = ((/* implicit */unsigned char) ((unsigned int) arr_41 [i_13] [i_14] [i_15] [i_14]));
            }
            for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                var_37 = ((/* implicit */_Bool) arr_19 [i_13] [i_14] [i_16]);
                var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [8ULL] [i_16] [8LL]))))), ((unsigned short)23668)))) ? (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_52 [i_13] [i_14] [i_14] [i_16])))))) : (max((((/* implicit */long long int) (signed char)110)), (3504556475739189982LL)))));
                var_39 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_8), (arr_42 [i_13] [i_14] [i_14] [9]))))) <= (-3504556475739189978LL)));
            }
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */int) ((long long int) (_Bool)0));
                arr_57 [i_14] [(_Bool)1] [i_14] [i_14] = ((/* implicit */_Bool) var_10);
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    var_41 &= ((unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    var_42 *= ((/* implicit */signed char) min((((/* implicit */short) arr_53 [i_13] [(_Bool)1] [i_17] [(short)5])), ((short)-20465)));
                }
                for (unsigned short i_19 = 1; i_19 < 10; i_19 += 3) 
                {
                    var_43 = ((/* implicit */short) arr_31 [i_14]);
                    var_44 *= ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_13] [i_17])))));
                    var_45 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_32 [i_14]))));
                }
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
            {
                var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_23 [i_13] [5LL] [i_20])), (arr_1 [i_13] [i_14])))) ? (((int) (!(((/* implicit */_Bool) arr_12 [i_14] [i_14]))))) : (((((/* implicit */_Bool) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */int) var_10)) + (((/* implicit */int) var_8))))))));
                var_47 *= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_42 [i_13] [i_14] [(unsigned char)4] [i_20])) - (((/* implicit */int) arr_42 [i_20] [i_20] [i_14] [i_13])))), (-447647659)));
            }
            arr_64 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_44 [i_13] [i_13] [i_13] [i_13]))))), (arr_43 [i_13] [i_13] [i_14] [i_14] [16LL])));
            var_48 = ((/* implicit */long long int) ((unsigned int) arr_14 [i_13] [i_14] [i_14]));
            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (arr_60 [i_14])))) ? (((((/* implicit */int) arr_44 [i_13] [i_14] [i_14] [i_13])) % (((/* implicit */int) arr_44 [i_14] [(_Bool)1] [i_13] [i_13])))) : (((/* implicit */int) ((unsigned short) ((var_5) / (((/* implicit */int) var_11))))))));
        }
        var_50 = ((/* implicit */unsigned int) var_5);
        arr_65 [i_13] [i_13] = ((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65529)))))));
    }
    var_51 = ((/* implicit */unsigned int) var_13);
    var_52 = ((/* implicit */unsigned short) var_8);
}
