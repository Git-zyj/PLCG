/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181207
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [14] [i_2 + 1] [i_1] [(signed char)17] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 2570616160104349106ULL)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (12587576776974192996ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_2 - 2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (2028551540) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
                    var_16 += ((/* implicit */_Bool) ((int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 2]))));
                    var_17 = ((/* implicit */signed char) min((var_17), (arr_1 [(signed char)16])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) min((var_7), (((/* implicit */short) (signed char)-126))))))));
    var_19 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 1) 
        {
            {
                var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)22820)) : (((((/* implicit */_Bool) var_3)) ? (1113156300) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [11ULL] [11ULL])) && (arr_4 [i_3] [i_4 + 2]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_21 = ((int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [(short)14] [13LL])), (arr_14 [i_3] [i_3])))) ? (((unsigned long long int) (short)-16784)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_5]), (var_11)))))));
                    arr_18 [i_3] [i_3] = (~(((/* implicit */int) min((((/* implicit */signed char) arr_6 [(signed char)6] [i_4 + 1])), (arr_16 [i_4 + 2] [i_4 + 2] [i_4 + 3] [i_4 - 3])))));
                    arr_19 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-22820))));
                }
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned long long int) arr_16 [i_3] [i_4] [9LL] [i_3])), (((/* implicit */unsigned long long int) max(((unsigned short)57287), (((/* implicit */unsigned short) (signed char)-4)))))))) ? (((int) arr_11 [(short)5])) : (((((/* implicit */_Bool) arr_1 [i_4 - 3])) ? (((((/* implicit */int) (signed char)22)) & (((/* implicit */int) (short)-31284)))) : (((/* implicit */int) var_15)))))))));
                    var_23 = ((/* implicit */signed char) -6356465046397234413LL);
                    arr_23 [i_6] [i_4] [6LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16780))) : (var_10)));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_29 [i_3] [i_3] [i_4] [i_6] [i_7] [i_4] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_20 [i_4 + 3] [i_4 + 1] [i_4 - 1] [i_4 - 1]))) ? (((/* implicit */int) min((var_12), (arr_20 [i_4 + 3] [(short)4] [i_4 - 1] [i_4 - 3])))) : (((/* implicit */int) min((((/* implicit */short) (signed char)126)), ((short)923))))));
                                var_24 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)-924)) || (((/* implicit */_Bool) 1790931979))))));
                                var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) 243013693U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5))))), (((/* implicit */long long int) (~(-1790931979))))));
                                arr_30 [i_4] [i_4] [(signed char)7] [i_4 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (-2410948678267752071LL) : (((/* implicit */long long int) arr_2 [i_6] [i_6]))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    var_26 = 2047;
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) var_6);
                        var_28 = ((/* implicit */short) arr_11 [i_3]);
                        arr_37 [i_9] [i_3] = ((/* implicit */int) 4088409757221186104LL);
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_24 [i_4 + 2]))));
                        arr_40 [i_3] = ((/* implicit */short) 7554325151252957051LL);
                        arr_41 [i_11] = ((/* implicit */signed char) ((long long int) arr_4 [i_4] [i_4]));
                    }
                    for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_46 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) 858980108);
                        var_30 = ((/* implicit */int) 1253025291390647513LL);
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 2; i_13 < 11; i_13 += 1) 
                        {
                            arr_50 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-923)) ? (2713312929240487965ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_3])))))) ? (arr_33 [i_4 - 2] [i_4] [i_9] [i_4] [i_13] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                            arr_51 [i_3] [i_4] [i_9] [i_13] [i_3] [i_4] = ((/* implicit */short) arr_14 [i_4 - 3] [i_13 + 1]);
                        }
                    }
                    arr_52 [i_3] [i_4] [i_9] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-5))));
                }
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [(short)10] [i_3] [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4])) ? (-294551005) : (-458860344)))) ? (((/* implicit */unsigned long long int) (+(1113156300)))) : (7439550300867956312ULL)));
                    var_32 = max(((short)1459), (((/* implicit */short) (signed char)34)));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
    {
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-16), (((/* implicit */short) arr_24 [i_15]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2948093905612785220LL)) && (((/* implicit */_Bool) (signed char)-66)))) ? (arr_14 [i_15] [(signed char)11]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_15] [i_15] [i_15] [i_15])))))) : (max((((/* implicit */unsigned long long int) 592734089215684865LL)), (max((((/* implicit */unsigned long long int) (short)923)), (14159823653690111206ULL)))))));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                {
                    arr_62 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) arr_58 [i_17] [i_15] [i_15]);
                    var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_11 [i_16])) ? (((/* implicit */int) arr_48 [6] [i_15] [i_15] [i_15] [(signed char)8] [i_16] [i_17])) : (((/* implicit */int) arr_47 [i_16] [1U] [i_16] [i_16] [1U]))))))) ? (((/* implicit */int) (short)-23102)) : (max((((/* implicit */int) (_Bool)1)), (1113156311)))));
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        for (signed char i_19 = 3; i_19 < 9; i_19 += 3) 
                        {
                            {
                                var_35 = max((((/* implicit */signed char) ((((arr_58 [i_15] [i_15] [i_15]) ? (arr_26 [i_15] [i_16] [i_17] [i_18] [i_19 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27506))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)70)))))))), (arr_60 [i_15] [i_15] [i_15]));
                                var_36 = max((((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))) * (2667706711U)))))), (var_13));
                                var_37 = ((/* implicit */short) (signed char)123);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_57 [i_15] [i_15]), (arr_57 [i_15] [i_15]))))));
    }
}
