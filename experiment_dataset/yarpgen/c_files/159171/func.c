/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159171
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_12 [i_4 - 4] [i_4 - 1] [i_4] [i_4] [i_4 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)23))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4 - 4])))))));
                                var_16 |= ((/* implicit */long long int) (_Bool)1);
                                arr_15 [i_0] [i_1] [i_2] [i_3] = min((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_13)))), ((!((!(((/* implicit */_Bool) (short)-32761)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (14853939911449621068ULL) : (9318022088485768235ULL)))))))));
                                var_18 = ((/* implicit */signed char) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) ((unsigned char) -2763046480638813065LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((16239084940482829479ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (_Bool)1))));
                                arr_27 [i_1] [i_1] [i_2] [i_7] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (max((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])), (var_10))) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_7]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 19; i_10 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((_Bool) (!(((/* implicit */_Bool) 2278524363688129409ULL))))) ? (min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)16559)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) : (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (min((var_10), (((/* implicit */int) var_4))))))));
                                var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (9128721985223783380ULL) : (((/* implicit */unsigned long long int) -1LL)))))));
                                arr_33 [i_9] [i_10] = ((long long int) max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_2])), (var_6)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            for (unsigned int i_13 = 1; i_13 < 14; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((2763046480638813064LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 2763046480638813065LL)) ? (var_1) : (var_10))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) 1379653936))) ? (((arr_14 [i_11] [i_12] [i_12] [i_13] [(_Bool)1] [9LL] [i_15]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_32 [i_11] [i_12] [13U] [i_14] [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_1 [i_11])))))))));
                                arr_45 [i_15] [i_12] [i_13] [i_12] [i_11] = ((max((((((/* implicit */_Bool) arr_19 [i_11] [i_11] [i_12] [i_13] [i_14] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_7 [i_11]))), (arr_42 [i_12] [i_12]))) % (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) 9318022088485768251ULL)) ? (9128721985223783381ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_12] [i_14] [i_11] [i_12] [i_11]))))))));
                                var_24 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 9318022088485768252ULL)))) * (144080003703767040LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned char) ((int) arr_12 [(short)3] [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1]));
                                var_26 ^= ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (short)32760)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 15; i_18 += 3) 
                    {
                        for (short i_19 = 2; i_19 < 12; i_19 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */_Bool) 9014414751810868041ULL)) && (((/* implicit */_Bool) -5859726191835854022LL)))) && (((/* implicit */_Bool) ((arr_26 [16U] [16U] [i_19] [i_19] [i_11] [i_11]) ? (((/* implicit */int) arr_21 [(short)5] [i_12] [i_13] [i_19])) : (((/* implicit */int) var_8)))))))))));
                                var_28 = ((/* implicit */unsigned long long int) arr_0 [i_12] [(_Bool)1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 15; i_21 += 3) 
                        {
                            {
                                var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_44 [i_13 + 1] [i_13 + 1] [i_13 + 1] [(unsigned short)3] [i_13])))) ? (max((((var_1) / (var_1))), (((/* implicit */int) (signed char)-91)))) : (((/* implicit */int) arr_24 [i_21] [(short)11] [(short)6] [i_12] [i_11]))));
                                var_30 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (((_Bool)0) ? (877623457U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))))), (max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) -144080003703767012LL)) ? (((/* implicit */long long int) var_1)) : (arr_46 [i_20] [i_12])))))));
                                var_31 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */long long int) 3417343838U)) : (-5859726191835854022LL))), (((/* implicit */long long int) ((signed char) arr_26 [i_13 + 1] [6ULL] [i_12] [i_13] [i_13] [i_13 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 3; i_22 < 13; i_22 += 3) 
                    {
                        for (signed char i_23 = 0; i_23 < 15; i_23 += 1) 
                        {
                            {
                                var_32 = var_11;
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [(short)6] [i_22 + 2] [i_22] [i_12] [i_11])) + (((/* implicit */int) arr_55 [5ULL] [i_22 + 2] [i_22] [i_22] [i_13]))))) ? (((((/* implicit */_Bool) (signed char)107)) ? (arr_43 [i_13] [i_13 + 1] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_11] [i_22 + 2] [i_22] [4ULL] [4] [i_13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                                var_34 = ((/* implicit */unsigned char) arr_44 [i_11] [(short)8] [i_11] [i_11] [i_11]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        for (unsigned long long int i_25 = 1; i_25 < 22; i_25 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_26 = 3; i_26 < 20; i_26 += 4) 
                {
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        for (long long int i_28 = 3; i_28 < 22; i_28 += 3) 
                        {
                            {
                                arr_80 [i_25] [i_26] [9U] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)174))))) ? (min((34U), (((/* implicit */unsigned int) (signed char)103)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5859726191835854022LL)) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (short)-32764)))))))) ? (((/* implicit */int) arr_75 [i_27])) : ((-(min((1274563426), (var_1)))))));
                                var_35 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_77 [i_25] [(short)4] [i_25] [i_25] [i_25 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned long long int) arr_72 [i_26 - 2] [i_27 - 1])), (min((var_6), (((/* implicit */unsigned long long int) var_12))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 23; i_29 += 1) 
                {
                    for (int i_30 = 1; i_30 < 21; i_30 += 3) 
                    {
                        {
                            arr_87 [20] [6LL] |= ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned long long int) (short)20935))));
                            arr_88 [i_25] [i_29] [i_25] [i_25] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_78 [i_24])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4198214139U)) ? (96753167U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8255)))))) : (var_7))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [(_Bool)1] [i_25])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
