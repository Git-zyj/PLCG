/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169881
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 2] [i_2] [i_3 + 1]))) | (arr_10 [i_3] [i_1])));
                        var_15 = ((/* implicit */long long int) ((max((((arr_9 [i_0] [(short)14] [(short)14] [(short)14] [i_2] [i_2]) ? (((/* implicit */int) arr_7 [17ULL] [i_2] [i_3 + 1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_2] [i_3])))) ^ ((+(((/* implicit */int) (unsigned char)216))))));
                        arr_12 [i_3] [4ULL] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_4 [6LL] [i_1] [i_3 + 2])), (((unsigned long long int) 8989504790287937138LL)))), (((((((/* implicit */_Bool) 427657443550121517ULL)) ? (((/* implicit */unsigned long long int) 5478463443170617144LL)) : (7579951566179246592ULL))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0])), (var_0))))))));
                        var_16 = ((/* implicit */int) min((((10866792507530305044ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_3 + 1] [14ULL] [i_3] [i_3] [i_3]))))), (min((((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_3])) ? (18013298997854208ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1])))), (((var_1) - (((/* implicit */unsigned long long int) arr_1 [9LL]))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_10))));
        /* LoopSeq 3 */
        for (short i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            arr_16 [i_4] [i_4 + 2] = ((/* implicit */short) 1482223090U);
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((arr_10 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [15U]))) : (max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) arr_14 [i_0 + 2]))))));
            var_19 = ((/* implicit */unsigned short) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_4] [i_0] [i_0 + 1])))) << (((((/* implicit */int) ((short) (unsigned char)255))) - (201)))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            var_20 ^= min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_5]))))), (max((arr_19 [i_0] [i_5 - 1] [i_5 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23091)) ? (-9188857996032685649LL) : (1007874012717469803LL)))))));
            var_21 -= ((/* implicit */unsigned char) var_2);
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_22 = ((/* implicit */long long int) var_8);
            var_23 *= ((/* implicit */unsigned long long int) var_0);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 2) 
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_7])) ? (((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0 + 1])) ? (arr_24 [i_0 + 3] [i_0 + 2] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 1] [i_0 + 2]))))) : ((~(max((((/* implicit */unsigned long long int) var_10)), (arr_18 [8U] [i_0] [(short)8]))))))))));
            arr_26 [i_0] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7]))) | (7579951566179246571ULL)))) || (((/* implicit */_Bool) arr_19 [i_0] [i_0 - 1] [i_7 - 2]))))), (1007874012717469803LL)));
            arr_27 [11LL] [i_7] = ((/* implicit */short) -850178707);
            var_25 = ((/* implicit */unsigned char) (~(arr_10 [i_7] [(short)14])));
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_12)) - (min((max((35183298347008ULL), (((/* implicit */unsigned long long int) 3321880484U)))), (((((/* implicit */_Bool) 5478463443170617144LL)) ? (((/* implicit */unsigned long long int) -6065922428687338250LL)) : (var_1))))))))));
                var_27 ^= ((/* implicit */unsigned char) (+(max((((((/* implicit */unsigned long long int) arr_21 [17LL] [i_7] [9U])) / (arr_24 [i_0] [i_7] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_7] [i_8])))))));
                arr_30 [(unsigned char)5] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((signed char) 1932908931634724977LL)))));
                var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_8)), ((-(((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_7] [i_8])))))))));
            }
            for (short i_9 = 3; i_9 < 21; i_9 += 4) 
            {
                var_30 = ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), (arr_29 [i_0 + 2] [i_0 + 2] [23U] [(short)16]))))) | (max((((/* implicit */long long int) arr_13 [i_7] [i_9])), (-4705230423190713141LL))))) & (((((/* implicit */_Bool) ((long long int) arr_21 [i_0] [i_0] [i_9 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_7 + 1] [i_7 + 1] [i_9 - 3]))) : (((long long int) arr_4 [(unsigned char)13] [(unsigned char)13] [i_9])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    arr_36 [i_0 + 1] [i_0 + 1] [i_9 + 3] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)3]))) * (arr_19 [i_7] [i_7] [i_10])))) ? ((+(((/* implicit */int) (unsigned char)152)))) : ((+(((/* implicit */int) var_8))))))) ? (max((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) (unsigned char)102)), (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_23 [i_0] [i_7] [i_9])), (arr_15 [i_7] [i_10])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 3; i_11 < 23; i_11 += 1) 
                    {
                        arr_41 [i_0 + 2] [i_10] = ((/* implicit */unsigned int) (+(arr_32 [i_0 - 1] [i_7 - 2] [i_9 + 1] [(short)12])));
                        arr_42 [i_0] [9] [i_10] [i_10] = ((/* implicit */signed char) (+(3511871409U)));
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        arr_45 [i_0] [i_7] [i_10] [i_0] [i_12] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned int) 9223372036854775807LL))))) ? ((-(18019086630159430098ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (2780951956U))))));
                        var_31 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (signed char)-32)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_6))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_29 [2LL] [2LL] [2LL] [i_10]))) ? (9187343239835811840ULL) : (((/* implicit */unsigned long long int) 31525197391593472LL))))) ? (((/* implicit */int) arr_23 [i_7] [i_9] [i_10])) : (((/* implicit */int) ((_Bool) ((_Bool) arr_19 [i_7 - 2] [i_10] [17U]))))));
                    }
                    arr_46 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) % (6884314639992111896LL)))) ? (427657443550121517ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((short) (unsigned char)201))))));
                }
                arr_47 [i_0 + 3] [i_7] [i_0 + 3] = ((/* implicit */unsigned long long int) (signed char)12);
            }
        }
    }
    var_34 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 31525197391593472LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)6878)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -6248287831757360067LL)) || (((/* implicit */_Bool) 12101976551815601814ULL)))))) : (3175855803U))));
    var_35 = ((/* implicit */unsigned long long int) max((var_10), (var_0)));
}
