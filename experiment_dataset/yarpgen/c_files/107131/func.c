/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107131
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((short) max((arr_0 [(_Bool)1] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_0 [i_0] [i_0]))))) ? ((+((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        var_18 = ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) & ((+(((/* implicit */int) (unsigned short)20796))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((arr_3 [(_Bool)1] [7ULL]) || ((_Bool)1))) || (arr_3 [i_1] [i_1])));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (!((_Bool)1)))), (max((arr_4 [(_Bool)1]), (((/* implicit */unsigned short) (unsigned char)85))))))) - (((((/* implicit */int) arr_6 [i_2])) & (((/* implicit */int) arr_3 [i_2 - 1] [i_2]))))));
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) max((((unsigned int) ((short) (_Bool)1))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [5ULL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)17)))), (((/* implicit */int) ((unsigned char) (short)10625))))))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            var_19 = (~(3254450337019035305ULL));
            var_20 -= ((/* implicit */unsigned char) ((arr_3 [i_2] [(unsigned short)0]) && (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 0)) || ((_Bool)1)))), ((+(((/* implicit */int) (unsigned char)0)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                arr_15 [i_2] [i_3] [i_4] [(signed char)11] = ((/* implicit */_Bool) ((arr_6 [i_2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2]))));
                arr_16 [i_2] [i_2] [i_2] = ((/* implicit */signed char) -1367271264);
            }
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [(signed char)10] [i_5]))))) - (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)31808)) ? (((/* implicit */int) arr_11 [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5] [i_3] [16ULL] [i_5])))))) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_2 - 1] [i_5]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) (_Bool)0);
                        arr_26 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (short)-3885)) & (((/* implicit */int) arr_19 [i_2] [i_2] [i_2])))));
                        arr_27 [10ULL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((int) (-(var_5)))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) arr_7 [i_2] [i_8]);
                        arr_30 [i_6] [i_2] [i_6] [i_5] [i_2] [i_2] = ((/* implicit */_Bool) var_1);
                        arr_31 [4LL] [4LL] [(unsigned short)14] [i_2] [i_8] [i_8] [4LL] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_2 - 1] [i_2] [i_2 - 1] [i_2]))));
                        arr_32 [i_2] [i_2] [i_5] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6] [i_3 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_19 [i_2] [i_6] [i_8])) : (((/* implicit */int) (unsigned short)35692))));
                        arr_33 [i_2] [i_2] [(_Bool)1] [i_2] [i_8] = (unsigned char)253;
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_25 *= ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)8725)));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_25 [i_3 + 1] [i_2] [(short)9] [i_3] [13ULL]))));
                        var_27 = ((/* implicit */_Bool) ((((arr_28 [i_2 - 1] [i_3] [i_5] [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56803))))))));
                    }
                }
                arr_38 [i_2] [(short)16] = ((((/* implicit */_Bool) (~(var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16383))))) ? (((((/* implicit */_Bool) 15192293736690516311ULL)) ? (((/* implicit */int) arr_37 [i_2])) : (arr_34 [i_2] [i_3] [i_3] [i_2] [i_2]))) : (((/* implicit */int) (unsigned short)24778))))));
            }
            var_28 -= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_4 [i_3 + 2])))), (((/* implicit */int) ((((/* implicit */int) (short)10657)) <= (((/* implicit */int) (unsigned short)0)))))));
        }
        for (short i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                arr_44 [i_11] [(short)16] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((max((((/* implicit */int) (short)4071)), (308470557))) - (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (arr_21 [i_2] [(unsigned char)16] [i_10] [(signed char)9] [i_2] [(signed char)9])))))))));
                arr_45 [i_2] [(unsigned short)16] [i_11] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_17 [i_10 + 1] [i_10 + 1] [i_2 - 1] [i_10 + 1]))))), (((arr_40 [i_10 - 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_10 + 2] [i_11] [i_2 - 1] [i_11])))))));
                arr_46 [i_2] = min((((/* implicit */long long int) max((((((/* implicit */int) arr_20 [(short)11] [i_10 + 1] [i_2])) <= (((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [(_Bool)1])))), ((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)255))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_10] [i_11])) ? (((/* implicit */int) (short)-9191)) : (((/* implicit */int) (unsigned short)24775))))), ((-(703108109773580171LL))))));
            }
            arr_47 [i_2] [i_2] = ((((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_36 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_10 - 2] [i_2])))) & (((((((/* implicit */_Bool) arr_41 [(short)8] [(short)8] [i_2])) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_10] [(short)8])) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((_Bool) var_12))))));
            arr_48 [i_2] [i_2] = ((/* implicit */_Bool) (+(max(((+(16352ULL))), (((/* implicit */unsigned long long int) max((arr_25 [i_2] [i_2] [i_2] [i_10] [10LL]), (var_2))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                var_29 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40751))))) || (((/* implicit */_Bool) ((int) (signed char)-68))));
                var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)40757)) || ((_Bool)1))) || (((((/* implicit */_Bool) arr_11 [i_2] [i_10])) && (((/* implicit */_Bool) (short)-9217))))));
                var_31 *= ((/* implicit */signed char) (_Bool)1);
                arr_52 [4] [4] [i_2] = ((/* implicit */unsigned short) ((short) arr_37 [i_2]));
                arr_53 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [6] [6] [i_12] [i_12] [i_2])) / (((/* implicit */int) (short)-28252))))) ? (((((/* implicit */_Bool) var_7)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40757))))) : (2296835809958952960ULL)));
            }
        }
        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            var_32 = ((/* implicit */int) ((long long int) max((max((((/* implicit */unsigned char) (signed char)-69)), ((unsigned char)47))), ((unsigned char)93))));
            arr_56 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)15296))));
        }
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_33 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_55 [i_14] [i_14] [i_14])), (arr_41 [i_2] [i_2] [i_14])))))))));
                arr_64 [i_14] [i_14] [i_15] &= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_14] [i_14] [i_14]))) : (3713914579128187287LL)))))));
                var_34 = ((_Bool) ((((/* implicit */_Bool) (unsigned short)40759)) ? (((arr_10 [1U] [i_2] [i_15]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_2] [1] [i_2]))))) : (min((arr_7 [i_2] [i_14]), (((/* implicit */unsigned long long int) arr_24 [i_2] [(unsigned short)9] [(unsigned short)9] [i_2] [(unsigned short)9]))))));
            }
            arr_65 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) min((((short) arr_3 [i_2] [i_2])), (max(((short)-1), (arr_59 [(_Bool)1])))))) <= (((arr_23 [i_2] [i_2] [i_2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) -29))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-7660)) : (((/* implicit */int) (unsigned char)60))))))));
            var_35 = ((/* implicit */short) var_12);
        }
        var_36 = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_62 [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_2]))))) & (((/* implicit */unsigned long long int) arr_18 [i_2] [i_2])))), (((/* implicit */unsigned long long int) ((unsigned char) ((int) (unsigned char)149))))));
    }
    var_37 = ((/* implicit */unsigned short) var_6);
}
