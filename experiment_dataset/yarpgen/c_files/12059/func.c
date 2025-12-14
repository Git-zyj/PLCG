/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12059
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
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)30)), (-7359455115139928975LL)));
    var_21 = ((/* implicit */short) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) (short)10736)))));
        var_22 ^= ((/* implicit */short) ((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned char)106);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)10713)))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [(short)15] [(short)15])) ? (var_6) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                arr_14 [16U] [7ULL] [i_0] [i_3] = ((/* implicit */short) arr_5 [i_2] [i_2] [11LL]);
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (arr_12 [i_0] [i_2] [i_2] [i_3])));
                arr_15 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)13866)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)150))));
                var_25 = ((/* implicit */unsigned char) ((unsigned short) var_0));
            }
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                arr_20 [i_0] [i_2] = (~(arr_10 [i_0] [i_0]));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_6])) ? (((/* implicit */int) var_17)) : ((-(((/* implicit */int) var_18))))));
                            arr_26 [(signed char)5] [i_0] [9ULL] [(signed char)16] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0]))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (var_7) : (arr_30 [i_0] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))));
                    arr_32 [i_0] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2288974699595891341LL)) ? (((/* implicit */int) (unsigned short)17897)) : (((/* implicit */int) (unsigned char)102))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        arr_36 [i_0] [(unsigned char)19] [i_7] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_17))));
                        arr_37 [i_9] [i_0] [(signed char)6] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)47656)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (signed char)-119))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        arr_41 [i_0] [i_0] = ((/* implicit */signed char) var_12);
                        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2788808070U)) | (5554003458442564053ULL)));
                    }
                }
                for (short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    arr_44 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0]);
                    var_29 = ((/* implicit */short) (-(((/* implicit */int) arr_27 [i_0] [i_0] [i_7]))));
                    arr_45 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_40 [i_0] [i_7] [7ULL] [(signed char)14] [7ULL] [7ULL] [i_0])) - (((/* implicit */int) var_15))));
                }
                arr_46 [i_0] [7U] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)28894))));
            }
            /* LoopSeq 1 */
            for (long long int i_12 = 3; i_12 < 21; i_12 += 2) 
            {
                arr_50 [i_0] [17LL] [i_2] [i_12] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                var_30 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (5445779870965907491ULL)))));
                var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
            }
        }
    }
    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        arr_55 [i_13] [i_13] = ((/* implicit */unsigned short) 15680843700384166280ULL);
        arr_56 [i_13] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (1193050105U)))))) ? (((/* implicit */int) ((unsigned short) 1102237195U))) : (((/* implicit */int) ((((/* implicit */int) arr_52 [i_13] [i_13])) == (((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (short i_14 = 2; i_14 < 21; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                {
                    arr_62 [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) max((min(((+(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_51 [i_13] [i_13])))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28887))) > (15680843700384166283ULL))))));
                    arr_63 [(_Bool)1] [i_15] = ((/* implicit */_Bool) 661075679132502091ULL);
                    arr_64 [i_13] [(short)7] [(short)7] [(short)15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)17880)))))));
                    var_32 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (signed char)-34)) < (((/* implicit */int) (short)28896)))));
                }
            } 
        } 
        var_33 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)153)), (((((/* implicit */_Bool) arr_60 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_52 [i_13] [i_13])) : (((/* implicit */int) var_19))))));
        arr_65 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28918)) ? (((((/* implicit */_Bool) 10289963896560723715ULL)) ? (((/* implicit */int) (short)28894)) : (((((/* implicit */int) (unsigned short)53740)) << (((16245760675023509275ULL) - (16245760675023509274ULL))))))) : (((/* implicit */int) (unsigned char)126))));
    }
    var_34 -= ((/* implicit */long long int) var_4);
}
