/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118652
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
    var_17 ^= ((var_13) ? ((~(var_9))) : (var_9));
    var_18 += ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (~((~(arr_1 [i_1]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_19 += ((/* implicit */_Bool) ((unsigned int) ((unsigned short) arr_10 [i_0] [i_0] [i_3] [i_0])));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_1 [i_3]))));
                        arr_11 [i_0] [i_1] [i_1] [i_1] = ((var_11) && (((/* implicit */_Bool) arr_0 [i_2] [i_2])));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3] [i_0])))))));
                        var_22 *= ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            arr_15 [i_0] [i_0] [i_0] = var_16;
            var_23 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_4]);
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_24 ^= ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) -434972828)) : (1721462642850155981ULL))) == (((/* implicit */unsigned long long int) var_14))));
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                        arr_22 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_14 [i_5] [6U] [i_5]))));
                    }
                } 
            } 
            arr_23 [i_0] [6U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (unsigned char)4))))) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        }
        var_25 = ((/* implicit */_Bool) min((var_25), (var_4)));
    }
    for (short i_7 = 3; i_7 < 20; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                {
                    arr_33 [i_7 - 3] [(signed char)2] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)0))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (17787410287353250641ULL))))));
                    var_26 *= ((/* implicit */unsigned long long int) arr_24 [2] [18]);
                }
            } 
        } 
        var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_28 [i_7 - 1] [i_7 - 2] [i_7 - 3])))) ? (((((/* implicit */_Bool) arr_27 [i_7 + 1])) ? (arr_27 [i_7 - 1]) : (arr_27 [i_7 - 2]))) : ((+(max((((/* implicit */unsigned long long int) 113401598U)), (1721462642850155995ULL)))))));
    }
    for (int i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    {
                        var_28 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) arr_38 [i_12] [i_12])) : (((/* implicit */int) var_8))))));
                        var_29 &= (((!(((/* implicit */_Bool) var_14)))) ? (arr_39 [i_10] [i_12] [i_12]) : (arr_45 [i_10]));
                        var_30 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_30 [i_11])), (((arr_27 [i_10]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16806)))))))) && (((_Bool) (signed char)101))));
                        var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_10] [i_11] [i_12] [i_13]))) : (arr_24 [i_10] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) -434972828))))))))));
                        arr_48 [i_12] [i_12] [i_12] [i_12] &= ((int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) arr_26 [i_10])) : (((/* implicit */int) arr_26 [i_10]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_14 = 3; i_14 < 17; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                {
                    arr_53 [i_10] [i_10] [12ULL] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_43 [i_14 - 2] [i_15] [(short)4])) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_10] [i_14 - 1])))))));
                    var_32 ^= ((/* implicit */signed char) ((17787410287353250627ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_46 [i_14] [i_14] [i_15] [i_15])))))))) & (((/* implicit */int) min((arr_52 [i_10]), (((/* implicit */short) arr_36 [i_14 + 1] [i_14 - 2])))))));
                    arr_54 [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_4)))));
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            {
                                arr_61 [i_10] [i_10] [i_15] [i_10] [i_10] = ((/* implicit */unsigned short) ((short) var_3));
                                var_34 += ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_40 [i_17] [i_14])) ? (((/* implicit */unsigned long long int) ((arr_32 [i_17] [i_14] [17U] [i_14]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_44 [i_14 - 3] [i_14 - 3] [(signed char)7] [i_14 - 3]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27881))) : (31457280ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
