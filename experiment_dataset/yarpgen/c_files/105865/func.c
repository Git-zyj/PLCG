/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105865
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) var_5);
                                arr_17 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_8 [i_2] [10ULL] [10ULL] [i_2])))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_2 - 3] [i_2 - 1] [i_2] [i_2])) >= (var_15)))))));
                                var_17 = (~(max((min((((/* implicit */long long int) 2147483633)), (281474976710655LL))), (arr_10 [i_4 + 1] [i_2] [8ULL]))));
                                var_18 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17652))) : (arr_4 [i_0] [i_0]))) * (((/* implicit */unsigned int) arr_14 [10LL])))) >> (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (8822)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) 309795285)), (min((((arr_12 [i_6] [i_1] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                arr_23 [i_6] [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) arr_4 [(short)8] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        for (long long int i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    for (short i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        for (long long int i_11 = 1; i_11 < 18; i_11 += 1) 
                        {
                            {
                                arr_39 [i_7] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_30 [11] [i_10 + 1] [i_11 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 273890184018945143LL)) >= (6924344351796727342ULL)))) : (((/* implicit */int) ((var_9) <= (((/* implicit */int) (_Bool)0))))))));
                                var_20 = ((/* implicit */short) (~((-(((/* implicit */int) min((var_3), (var_14))))))));
                                arr_40 [1ULL] [i_8] [i_8] [i_9] [i_10 - 1] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) -759382826)) ? (((/* implicit */int) var_7)) : (var_9)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        {
                            arr_46 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_7] [15] [i_12 - 1] [i_13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) ? (min((arr_26 [i_13] [i_12] [i_7]), (((/* implicit */int) arr_37 [i_13] [i_7] [i_13] [i_8 + 2])))) : ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */int) arr_29 [4ULL] [i_8 - 1] [i_8])) : (((/* implicit */int) var_6))));
                            var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_37 [i_12 + 1] [i_12 - 1] [9ULL] [i_8 + 3])) || (((/* implicit */_Bool) (+(var_1)))))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 1690306554))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_33 [i_7] [i_8 + 1] [i_12] [i_12]))));
                            arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((unsigned short) -1LL));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_16 = 2; i_16 < 20; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        {
                            arr_61 [i_15] [i_15] [i_15] [i_15] [i_15] = ((((/* implicit */_Bool) ((short) arr_42 [i_16 - 1] [i_16 - 2] [i_16 + 2]))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_52 [i_14]), (arr_52 [i_15]))))) : (((long long int) ((int) arr_60 [i_14] [i_14] [i_14] [10LL] [11U]))));
                            var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_14] [i_14] [i_14] [i_17] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_16] [i_16] [i_16] [19U])) ? (arr_25 [9ULL] [9ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_17] [5] [i_14])))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_14] [i_15] [i_16 - 1] [i_17] [i_15] [i_17] [i_17])) ? (var_12) : (((/* implicit */long long int) arr_58 [i_14] [i_14] [i_14]))))) : (max((arr_53 [i_14]), (12676112806410728382ULL)))))));
                            arr_62 [i_14] [i_14] [15ULL] [i_14] [i_14] = ((/* implicit */long long int) min((((/* implicit */int) ((short) ((unsigned int) arr_34 [i_17] [i_16] [i_15] [i_14])))), (((((/* implicit */_Bool) arr_48 [i_16 + 1])) ? (var_9) : (arr_48 [i_16 + 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (int i_19 = 3; i_19 < 20; i_19 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) max((min((arr_57 [i_14] [i_15] [i_18] [i_14]), (arr_57 [i_14] [i_15] [i_18] [i_19 + 1]))), (max((arr_57 [i_14] [i_19 - 3] [i_18] [i_15]), (arr_57 [i_19 - 3] [i_18] [i_18] [i_15])))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_19 + 2] [i_19 - 1] [i_19 - 2] [i_14])) ? (((/* implicit */unsigned long long int) ((long long int) var_6))) : (((6464986928383791708ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5372))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 4; i_21 < 19; i_21 += 3) 
                    {
                        {
                            arr_72 [i_15] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 13976762001310334239ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */int) var_3)) != (((/* implicit */int) arr_37 [i_14] [i_14] [i_14] [19])))), (var_2))))) : (((var_2) ? (((/* implicit */unsigned int) arr_45 [i_20] [i_20] [i_21 - 2] [i_21 - 2])) : (arr_36 [i_21] [6LL] [i_21 - 4] [i_21 + 1] [i_21] [1U] [i_21])))));
                            var_26 &= ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)5372))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6518541521711095880LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) : (((arr_68 [i_14] [i_15] [i_21]) & (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_14] [i_15] [i_15] [i_14]))))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (max((((((/* implicit */_Bool) arr_45 [i_14] [i_15] [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_60 [i_14] [i_15] [i_20] [i_21] [i_20]))), (((/* implicit */long long int) var_7))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 4) 
                    {
                        for (int i_24 = 0; i_24 < 22; i_24 += 3) 
                        {
                            {
                                arr_79 [i_24] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_28 [i_14] [i_14] [i_22] [i_24])), ((+(var_8))))), (((/* implicit */unsigned long long int) max((arr_24 [i_15] [i_24]), (((/* implicit */long long int) arr_27 [i_14] [i_14] [i_23])))))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_71 [4LL] [i_23] [4LL]), (arr_71 [i_14] [i_14] [i_22])))) ? (max((arr_71 [i_24] [i_22] [i_15]), (arr_71 [i_14] [i_15] [i_24]))) : (((/* implicit */long long int) (+(3662772693U))))));
                                arr_80 [i_23] [i_15] [i_15] [i_24] [i_15] = ((/* implicit */unsigned int) ((-519360747) > (-2147483647)));
                                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_65 [i_14] [i_15] [i_22] [i_23] [i_24] [i_24]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
