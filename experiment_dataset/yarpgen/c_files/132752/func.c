/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132752
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 *= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) (signed char)1)));
                    var_21 = min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (589605954)))), (min((((/* implicit */long long int) var_3)), (var_7))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) -589605954)) ? (((/* implicit */int) var_0)) : (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -589605955)) ? (((/* implicit */int) (signed char)-7)) : (-589605954))) % (((/* implicit */int) ((signed char) var_9))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] [i_3] [i_4] = ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55696)) + (-589605955)))) ? (((/* implicit */unsigned long long int) -589605955)) : (arr_4 [i_0 + 1])));
                                arr_14 [i_2] [i_2] [i_3] = ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (13729280033090078466ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-32)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_11))));
    var_24 = ((/* implicit */signed char) (-(((int) ((4717464040619473169ULL) <= (13729280033090078448ULL))))));
    /* LoopSeq 3 */
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((((/* implicit */_Bool) arr_17 [i_5])) ? (4717464040619473149ULL) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (-589605951) : (((/* implicit */int) (short)-11347))))))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) var_6);
        /* LoopSeq 3 */
        for (long long int i_6 = 3; i_6 < 14; i_6 += 1) 
        {
            var_25 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((arr_15 [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [15ULL])))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 589605951)) ? (589605953) : (((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 3) 
                {
                    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        {
                            arr_36 [i_7] [(unsigned short)11] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_5] [i_7])) ? (((/* implicit */unsigned long long int) min((min((-589605955), (589605954))), (((/* implicit */int) var_15))))) : (min((((/* implicit */unsigned long long int) (signed char)-19)), (arr_32 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])))));
                            arr_37 [i_6] [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((13729280033090078466ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (min((589605972), (589605953))) : (((/* implicit */int) arr_18 [i_9])))), (min((((/* implicit */int) var_5)), (-589605954)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            var_26 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_35 [12ULL] [i_5 + 1] [i_10] [(_Bool)1] [i_10])) ? (arr_35 [11U] [i_5 - 1] [i_10] [i_10 - 1] [13U]) : (((/* implicit */unsigned long long int) -589605954)))));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_25 [i_5]))));
        }
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), ((signed char)-109)));
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    {
                        arr_48 [i_12] &= ((((((/* implicit */_Bool) arr_24 [i_13])) ? (2031371486U) : (max((arr_15 [i_5]), (((/* implicit */unsigned int) var_10)))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5]))));
                        arr_49 [i_5] [i_5] [i_11] [i_5] &= ((unsigned short) (_Bool)1);
                        var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) var_12))), (((((/* implicit */_Bool) ((short) var_15))) ? (8301268531952776711ULL) : (arr_35 [i_5] [i_11] [i_13] [i_13] [i_5 + 2])))));
                    }
                } 
            } 
            arr_50 [i_5] = ((((((/* implicit */_Bool) -589605968)) ? (((/* implicit */int) min(((signed char)-76), (var_10)))) : (((/* implicit */int) ((arr_35 [i_5] [i_5] [i_11] [i_11] [i_11]) > (var_9)))))) == (min((((/* implicit */int) ((unsigned short) arr_44 [i_5] [(signed char)9] [i_5] [i_11]))), (((((/* implicit */_Bool) arr_46 [i_5] [i_5 + 2] [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-4)))))));
        }
        arr_51 [i_5] = ((/* implicit */signed char) var_12);
    }
    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */int) ((unsigned int) ((arr_17 [i_14 + 1]) < (((/* implicit */unsigned long long int) -589605954)))));
        arr_54 [8U] |= min((arr_38 [3U]), (min((((signed char) (signed char)-1)), (((/* implicit */signed char) (_Bool)0)))));
    }
    for (unsigned short i_15 = 1; i_15 < 14; i_15 += 2) /* same iter space */
    {
        arr_58 [i_15] = ((/* implicit */unsigned long long int) ((signed char) (signed char)-1));
        var_31 += ((/* implicit */unsigned short) arr_23 [i_15] [i_15]);
        arr_59 [i_15] = ((/* implicit */unsigned short) (signed char)-21);
    }
    var_32 = ((/* implicit */unsigned int) max((var_32), (((((/* implicit */_Bool) 589605953)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) : (1265710334U)))));
}
