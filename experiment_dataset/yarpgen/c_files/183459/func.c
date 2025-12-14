/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183459
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */long long int) (_Bool)0);
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0])) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_1 [i_2]))))))))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) < (2322759612U))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_0] [i_2]), (var_10))))) : (min((2322759612U), (1972207683U))))))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (_Bool)1))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (2322759604U) : (((/* implicit */unsigned int) -1)))))))));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3)));
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) 2819098781U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) -732942257)) < (-1598599596612245285LL))))))) / (((/* implicit */unsigned long long int) -1)))))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (int i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        arr_20 [i_3] [i_4] [i_5 - 2] [i_5 - 2] [2ULL] &= ((int) ((7738918920541586766LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) var_0)) : (-1999269373))))));
                        var_19 -= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)1))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((8500774404510530237LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (var_1)))));
                        arr_29 [i_3] [i_7] [i_8] [i_9] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_8] [i_9 + 2] [i_9 - 1] [i_7])))));
                        var_21 -= ((/* implicit */unsigned char) ((((-10110885618102470LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 19; i_10 += 1) 
            {
                for (long long int i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    for (short i_12 = 1; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_22 |= var_2;
                            var_23 = ((/* implicit */_Bool) min((var_23), (((_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (-16) : (((/* implicit */int) (signed char)-90)))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((var_9) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) arr_24 [i_3] [i_7])))))));
        }
        for (long long int i_13 = 2; i_13 < 20; i_13 += 4) 
        {
            var_25 -= arr_34 [i_3] [i_3] [i_13] [(unsigned short)4] [(unsigned short)4];
            arr_39 [i_3] [i_13] [i_13] = ((/* implicit */long long int) ((-1423732259) & (((/* implicit */int) (!(((/* implicit */_Bool) 8503857339836951363LL)))))));
        }
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_5))));
            var_27 = min((max((min((603006231U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-3)) || (((/* implicit */_Bool) -1423732259))))))), (var_5));
            var_28 *= ((/* implicit */_Bool) var_2);
        }
        var_29 = ((/* implicit */unsigned int) min((var_29), ((-(var_5)))));
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_31 -= ((/* implicit */short) -496912144);
                        var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) == (3691961065U)))), (arr_51 [16U] [12] [i_17])))) ? (((arr_43 [(short)2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1972207683U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) : (3691961065U))))));
                        var_33 -= ((signed char) ((3680621525U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242)))));
                    }
                } 
            } 
        } 
    }
}
