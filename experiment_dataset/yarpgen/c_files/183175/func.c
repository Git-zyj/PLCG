/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183175
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
    var_14 = ((/* implicit */int) 939423708248686828ULL);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_15 = ((((/* implicit */_Bool) (((_Bool)1) ? (673719102) : (((/* implicit */int) (unsigned short)65535))))) ? (18065372474066603499ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1]))));
                            var_16 = ((/* implicit */int) (unsigned char)156);
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)138)) ? (9953240199305930269ULL) : (((/* implicit */unsigned long long int) 1545036338U))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 1545036331U))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_6 [i_4 - 1] [i_4])) : (-978181733))))));
                        }
                        for (int i_5 = 3; i_5 < 18; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 3375421503989192459LL)))))))));
                            var_21 = ((/* implicit */signed char) arr_6 [i_0] [i_1]);
                            arr_15 [i_5] [i_5] [i_2] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */long long int) min(((-(((int) 18446744073709551615ULL)))), (arr_8 [i_2] [16ULL] [i_2 - 1] [i_2 + 2] [i_2 + 3] [i_5 - 1])));
                        }
                        for (int i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2 + 3] [i_1] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((arr_16 [i_0] [i_0] [i_6] [i_1] [i_2 - 1] [i_6] [i_6 - 1]), (((/* implicit */unsigned int) (signed char)-1)))), (((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_2] [(unsigned char)4] [i_6] [i_2 + 3] [i_6 + 1]))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (2749930957U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))))))))));
                            var_22 |= ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) % (((/* implicit */long long int) min((arr_18 [i_0] [(signed char)9] [i_0] [i_3] [i_6] [i_6]), (arr_18 [i_2] [i_1] [i_2 + 3] [i_3] [i_6] [i_6 - 2]))))));
                        }
                        var_23 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_5))))));
                    }
                } 
            } 
            arr_20 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)18761))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)175))))) : (((arr_10 [i_0] [i_0] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_0] [i_0] [i_0]))) : (-883211316269779907LL))));
        }
        var_24 = arr_10 [i_0] [i_0] [i_0] [i_0];
        var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (short)18761)) | (((/* implicit */int) arr_14 [16ULL]))))) ? (((/* implicit */unsigned long long int) ((883211316269779906LL) % (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (arr_12 [i_0] [i_0] [i_0] [i_0])))));
        var_26 += ((/* implicit */long long int) -185268093);
    }
    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        arr_24 [i_7] = ((/* implicit */short) (-(-1LL)));
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_8)) - (146)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)));
        var_28 = ((/* implicit */unsigned char) (signed char)-1);
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    {
                        var_29 |= ((/* implicit */short) (-(1086215327U)));
                        arr_34 [i_7] [i_8] [i_7] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) arr_21 [i_9] [i_9]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (0ULL) : (min((0ULL), (((/* implicit */unsigned long long int) 1975676227U)))))))));
                        arr_35 [i_7] [i_9] [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_7] [i_7]))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        arr_39 [i_11] |= ((/* implicit */unsigned char) ((int) arr_10 [i_11] [i_11] [i_11] [14]));
        var_30 ^= ((/* implicit */int) (signed char)-98);
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            for (long long int i_13 = 1; i_13 < 17; i_13 += 1) 
            {
                for (unsigned char i_14 = 3; i_14 < 18; i_14 += 4) 
                {
                    {
                        var_31 |= ((/* implicit */long long int) var_11);
                        var_32 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (unsigned short)61930)) : (((/* implicit */int) (signed char)-116)))) : (((/* implicit */int) (unsigned char)59))))), ((((_Bool)1) ? (-6282281366028367118LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_14 - 2])) || (((/* implicit */_Bool) arr_0 [i_14 - 2])))))) <= (4611686018427387904ULL)));
                        var_34 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (short)-18762)))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_11] [i_13]))) + (5741640318272713882ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (arr_42 [i_11] [i_11] [i_12]) : (((/* implicit */int) (unsigned char)139)))))))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned short)21704)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 1107769832739198158LL)))))))));
        arr_50 [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-27))));
    }
    var_36 = ((/* implicit */unsigned long long int) var_10);
}
