/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161123
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                            var_13 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(signed char)1] [i_1] [i_2]))) < (((((/* implicit */_Bool) arr_1 [i_2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1]))))))) && (arr_8 [0U] [i_1] [i_1] [i_2] [i_1] [i_2])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 3339262295803527831LL)) && ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((var_5), (((/* implicit */long long int) (_Bool)1)))))) + (max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (3748504113U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_4] [(unsigned char)12] [i_1] [i_1] [i_1]))))))))));
                            arr_15 [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))) : (arr_10 [i_1] [i_4] [11ULL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4]))) : (min((546463162U), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_4]))))))) >= (((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((-256683095729242480LL), (7167915400097187968LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (var_9)))) : (((((/* implicit */_Bool) var_9)) ? (9072358780868237516LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) == (min((((/* implicit */long long int) var_8)), (var_7)))));
                                var_16 += ((/* implicit */unsigned long long int) min((((long long int) (!(((/* implicit */_Bool) 2567619531U))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6483316453360203511LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_7]))) : (546463195U)))) || ((!(((/* implicit */_Bool) arr_21 [i_7])))))))));
                                var_17 -= (unsigned short)10434;
                                arr_31 [i_6] [i_10] [(unsigned short)9] [i_6] [i_6] = ((/* implicit */unsigned short) min((max((max((((/* implicit */long long int) (_Bool)1)), (var_6))), (((/* implicit */long long int) min(((unsigned char)160), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)1)))), (var_10))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_18 = arr_14 [i_6];
                                var_19 = ((/* implicit */short) ((((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_7] [i_8] [i_12]))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4068418224U))))));
                                arr_39 [i_6] [i_7] [i_11] [i_8] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8] [i_6])) ? (((/* implicit */int) arr_5 [i_11] [i_6])) : (((/* implicit */int) arr_5 [i_6] [i_12]))))) ? (arr_36 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (short)13916)))));
                                arr_40 [i_6] [i_6] [i_6] [i_6] [i_11] [4LL] = ((/* implicit */unsigned short) max((562812514467840ULL), (((/* implicit */unsigned long long int) 7178922700248627343LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 14; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_15 = 1; i_15 < 12; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        for (short i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            {
                                arr_54 [i_17] [i_16] [i_16] [i_14] = ((/* implicit */_Bool) arr_41 [(unsigned short)13]);
                                arr_55 [i_16] [i_15] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_52 [i_13] [i_13] [i_17] [i_17] [i_17] [i_17])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_13] [i_13] [i_14] [i_14] [i_16] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_13] [12ULL] [(unsigned short)12] [i_14] [i_17]))) : (var_3)))) ? (((((/* implicit */_Bool) arr_43 [i_17] [i_17] [5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (580019560U))) : (((/* implicit */unsigned int) (+(arr_47 [(_Bool)1] [i_15] [(_Bool)1] [(signed char)13]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_18 = 1; i_18 < 13; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 14; i_20 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || ((_Bool)1)))), (((((/* implicit */_Bool) 6191529288386609017LL)) ? (-4726273593147264546LL) : (((/* implicit */long long int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_13])) ? (arr_58 [13ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41134)))))) ? (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_59 [i_18]))) : (((/* implicit */unsigned long long int) ((long long int) 1266124348))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) % (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)59908), ((unsigned short)1))))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)249)) ? (6191529288386609026LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31111)))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((var_1) * (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) 2063713743))))) ? (-6191529288386609024LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_23 = ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 14; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_13] [i_14])) ? (6191529288386609045LL) : (arr_69 [i_13] [i_14])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) < (6560485886702224686ULL))))) : (arr_69 [i_13] [i_22]))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))) ? (((((/* implicit */_Bool) 6191529288386609034LL)) ? (arr_69 [i_13] [i_14]) : (var_5))) : (2115266945939410363LL)))) ? (max((var_4), ((+(2115266945939410377LL))))) : (((((/* implicit */_Bool) arr_43 [i_13] [i_13] [i_13])) ? (6191529288386609024LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                            var_26 = ((/* implicit */_Bool) 6191529288386609026LL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 2) 
    {
        for (unsigned long long int i_24 = 1; i_24 < 19; i_24 += 4) 
        {
            for (short i_25 = 2; i_25 < 19; i_25 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 1; i_26 < 18; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 20; i_27 += 3) 
                        {
                            {
                                arr_84 [i_26] = ((/* implicit */signed char) 3629245647U);
                                arr_85 [i_25] [i_23] [i_25] [i_26] [i_27] [i_25] = ((/* implicit */unsigned short) arr_77 [i_24 - 1] [i_24 - 1]);
                                var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_72 [i_24 + 1] [i_25 - 2])))) != (((((/* implicit */_Bool) arr_72 [i_24 + 1] [i_25 + 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35097))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_28 = 1; i_28 < 16; i_28 += 2) 
                    {
                        for (long long int i_29 = 0; i_29 < 20; i_29 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_70 [i_24 + 1]))));
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [0U] [i_23] [i_28 + 4] [i_29] [i_28 + 4] [i_29])) ? (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_28] [i_28] [i_28 + 2] [i_28]))) : (var_4)))) ? ((+(((/* implicit */int) max(((unsigned short)35094), (((/* implicit */unsigned short) (_Bool)1))))))) : (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (signed char)27)) : ((-(((/* implicit */int) arr_90 [i_23] [i_24] [(short)16] [i_28] [i_29]))))))));
                                var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_25 - 2] [i_24])) ? (arr_86 [14LL] [i_24] [i_25 - 2] [i_28] [14LL]) : (arr_86 [i_23] [i_23] [(unsigned short)7] [(unsigned short)7] [11U]))))))), (var_9)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_30 = 0; i_30 < 20; i_30 += 2) 
                    {
                        for (unsigned int i_31 = 0; i_31 < 20; i_31 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) (-(arr_83 [i_23] [i_30])));
                                arr_96 [i_31] = ((/* implicit */long long int) ((min(((_Bool)1), ((!(((/* implicit */_Bool) 2115266945939410354LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17077))) ^ (max((((/* implicit */long long int) arr_71 [i_23])), (var_5)))))) : (min((((/* implicit */unsigned long long int) (unsigned short)65404)), (3863339085441891924ULL)))));
                                arr_97 [7U] [i_24] [7U] [i_24 + 1] [i_24 + 1] [(signed char)12] = ((/* implicit */unsigned int) (((((+(min((arr_88 [i_25 + 1] [i_24] [16ULL] [16ULL] [i_31] [(_Bool)0]), (arr_88 [i_23] [i_23] [i_23] [i_30] [i_31] [6U]))))) + (9223372036854775807LL))) >> (((2390199786U) - (2390199728U)))));
                                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) 6150523694320252359LL)) ? (8506881534446572948ULL) : (((/* implicit */unsigned long long int) -2115266945939410405LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
