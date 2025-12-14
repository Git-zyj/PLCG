/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108775
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((long long int) 8372224LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) 0))) && (((_Bool) var_4)))))) : (((unsigned int) max((((/* implicit */unsigned int) var_3)), (var_0))))));
    var_19 = ((/* implicit */short) (~(((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) var_1)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_20 = ((/* implicit */long long int) ((int) (-(arr_4 [i_0]))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) var_9);
        }
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_21 = ((/* implicit */int) var_0);
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_10))))));
            arr_12 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_3)) : (2204656545U))))) ? ((-(var_8))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)255)) : (var_12))))))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (var_11)))) ? (((/* implicit */int) (short)5304)) : (min((((/* implicit */int) (unsigned short)7258)), (31))))) : (((arr_3 [i_0] [i_2]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_2] [i_0 - 1]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7207228351757467498ULL))));
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 3; i_6 < 16; i_6 += 4) 
                    {
                        var_24 += ((/* implicit */_Bool) ((int) ((long long int) 2289288396660154118ULL)));
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-1266681584))))));
                    }
                    var_26 -= ((/* implicit */unsigned long long int) -32);
                }
                for (short i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                {
                    var_27 &= ((/* implicit */_Bool) ((unsigned long long int) (short)26329));
                    var_28 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_29 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_13)))));
                }
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (short)-21066))))))));
            }
            for (short i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                var_31 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8 + 3] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (short)26329)) : (((/* implicit */int) var_16)))))));
                arr_28 [i_0] [i_0] [i_8 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_23 [i_8 - 1] [i_3] [(_Bool)1] [i_3] [i_0 + 1])) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_8] [i_8 - 1])) ? (((arr_7 [i_0] [i_3] [i_0]) + (((/* implicit */int) (short)21066)))) : (var_3)))));
                var_32 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) ((unsigned short) (short)26326))))));
                var_33 = ((/* implicit */short) (+((-(((/* implicit */int) ((short) var_16)))))));
            }
            for (short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (-(var_5)))))));
                var_35 = ((/* implicit */unsigned char) ((_Bool) ((_Bool) (-(17ULL)))));
                var_36 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (184518598)))) ? (1574337843) : (((/* implicit */int) (unsigned char)90)))));
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                arr_34 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_22 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]));
                var_37 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_25 [16] [(short)8] [i_10])) : (((/* implicit */int) var_17))))));
                var_38 = ((int) var_7);
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    arr_39 [(short)13] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)26329))));
                    arr_40 [2LL] [(short)1] [i_0] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16739025)) ? (842294880) : (184518612)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5448022110243414531LL)))))) : ((~(var_4))));
                    arr_41 [i_0] [i_3] [i_3] [i_10] [i_11] = ((/* implicit */short) arr_9 [i_0] [i_0]);
                }
                for (int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (var_11) : (var_11)))));
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)26324))))) ? ((-(((/* implicit */int) var_9)))) : ((-(0)))));
                }
                for (int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_13))))));
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)129))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)30127)) : (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_13]))) : (var_14)))));
                }
            }
            var_43 = ((/* implicit */unsigned short) ((min((2), (((/* implicit */int) (_Bool)1)))) * (((arr_18 [i_0]) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_3] [i_3] [i_3] [3U])) : (((/* implicit */int) arr_18 [i_0]))))));
            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) -4466373052057349614LL)))))) ? (((((/* implicit */_Bool) 5)) ? ((+(11ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -15)) ? (((/* implicit */unsigned int) var_1)) : (var_0)))))) : ((+((~(17ULL)))))));
        }
        var_45 = ((/* implicit */long long int) (+((~(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (_Bool)1)))))))));
        var_46 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) -22)) : (18446744073709551598ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37986))))) : (((int) (unsigned char)110))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31))) : (955085273U)))) ? (var_15) : ((~(var_0)))))));
        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)60546)))))))));
    }
    var_48 = ((/* implicit */unsigned char) var_2);
}
