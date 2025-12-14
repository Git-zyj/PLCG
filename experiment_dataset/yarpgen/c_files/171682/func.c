/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171682
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((signed char) 4294967295U)))))));
                var_19 = ((/* implicit */int) arr_1 [i_1] [i_0]);
                var_20 = ((/* implicit */_Bool) ((arr_5 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)27959)))));
                var_21 = ((/* implicit */signed char) min((((arr_3 [i_0]) ^ (arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_2 [i_0]))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)2])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((arr_8 [i_2] [i_2]) ? (((/* implicit */long long int) arr_7 [i_2])) : (0LL)));
        var_22 = ((/* implicit */unsigned int) arr_6 [2LL]);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_18 [i_3] [i_4] [i_5] [i_5]))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_21 [i_3] [i_3] [i_5] [i_3] = (~(((/* implicit */int) arr_20 [i_3] [i_5] [i_4] [i_6] [i_4] [i_5])));
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_5] [i_7])) / (((/* implicit */int) arr_1 [i_3] [i_3]))));
                            arr_24 [i_7] [i_7] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_7] [i_5]))));
                            var_25 ^= ((/* implicit */short) ((unsigned long long int) arr_10 [i_3] [i_4]));
                            var_26 = ((/* implicit */unsigned long long int) (+(arr_10 [i_7] [i_5])));
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)182))));
                            var_28 = ((/* implicit */_Bool) ((unsigned long long int) (short)27976));
                            arr_29 [0LL] [i_6] [(_Bool)1] [i_4] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)23820)) ^ (((/* implicit */int) (short)27976))));
                            var_29 = var_0;
                            arr_30 [i_8] = (!(((/* implicit */_Bool) var_1)));
                        }
                        var_30 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                        var_31 = ((/* implicit */short) (~(1579437358U)));
                    }
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2531865059U)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) var_4))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) <= (2682323695U)));
                    var_34 = ((/* implicit */int) arr_26 [i_3] [5U] [i_3] [i_3]);
                }
            } 
        } 
        var_35 = ((/* implicit */_Bool) max((var_35), (arr_8 [i_3] [i_3])));
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        var_36 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_9] [i_9]))))), (((((/* implicit */int) arr_6 [i_9])) / (((/* implicit */int) var_13))))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 3) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    var_37 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_22 [i_10] [i_11 - 1])) ? (((/* implicit */int) arr_4 [i_9] [i_9] [i_9])) : (((/* implicit */int) ((signed char) arr_3 [i_9])))))));
                    var_38 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (_Bool)0)), (arr_5 [i_11 - 1]))) > (max((arr_5 [i_11 - 1]), (arr_5 [i_11 - 1])))));
                    var_39 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0)))) != (max((((((/* implicit */_Bool) arr_26 [i_9] [(unsigned short)15] [3] [i_11 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6))), (((/* implicit */unsigned int) ((int) (short)14005)))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */_Bool) ((7826232088241387558LL) / (((/* implicit */long long int) ((/* implicit */int) (short)27976)))));
                                var_41 = ((/* implicit */short) (+(((max((-2074234302), (((/* implicit */int) (short)23287)))) & (((/* implicit */int) arr_4 [i_10] [i_11] [2ULL]))))));
                            }
                        } 
                    } 
                    arr_43 [i_10] = ((/* implicit */unsigned long long int) arr_5 [i_11]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) (+(((int) arr_36 [i_9])))))));
                    var_43 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4835917628222507777ULL)))) ? (((((/* implicit */_Bool) arr_41 [i_9] [(signed char)5] [13U] [13U] [i_15] [i_15] [7])) ? (((/* implicit */int) arr_41 [i_9] [i_15] [i_15] [(signed char)4] [i_15] [i_14] [11U])) : (((/* implicit */int) arr_41 [(short)8] [i_9] [i_9] [i_9] [i_14] [i_15] [i_14])))) : ((+(((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [(short)11] [(unsigned short)0] [i_9] [i_9]))))));
                    var_44 = ((/* implicit */unsigned long long int) max((851898601), (-851898599)));
                }
            } 
        } 
    }
    for (int i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_17 = 3; i_17 < 15; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_18 = 1; i_18 < 15; i_18 += 2) 
            {
                for (int i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    {
                        var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_19]))));
                        arr_60 [i_16] [(short)9] [i_19] [i_18] = ((/* implicit */unsigned int) max((((/* implicit */int) var_14)), ((+((+(((/* implicit */int) arr_8 [i_16] [i_18]))))))));
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned int) (short)-23820);
            arr_61 [(_Bool)1] [i_17] = ((/* implicit */unsigned char) (-(min((arr_27 [i_17] [(unsigned short)11] [i_17] [i_17] [3LL] [i_17] [i_17 - 3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7)))))))));
            var_47 = ((/* implicit */signed char) (short)-27956);
        }
        for (unsigned short i_20 = 3; i_20 < 14; i_20 += 1) 
        {
            var_48 |= ((/* implicit */_Bool) max((((min((((/* implicit */unsigned int) var_2)), (arr_27 [i_16] [(_Bool)1] [i_16] [i_16] [6U] [i_20] [i_20]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))))), (((/* implicit */unsigned int) arr_28 [i_16] [i_16] [i_16] [i_16] [i_16] [i_20] [i_20]))));
            var_49 *= ((/* implicit */unsigned long long int) (+(min((arr_10 [i_16] [i_20]), (arr_10 [(unsigned char)1] [(_Bool)1])))));
            arr_66 [i_16] [i_16] [i_20] = 4294967282U;
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 16; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                {
                    {
                        var_50 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_25 [i_16] [14LL] [13] [i_20 + 2] [i_21] [i_22]))))));
                        var_51 = ((/* implicit */short) arr_25 [i_16] [i_16] [i_20] [i_20] [i_20] [(short)15]);
                        var_52 &= ((/* implicit */short) (((+(arr_57 [i_20 + 2] [i_20] [i_20 - 3] [i_20 + 1]))) << (((/* implicit */int) (_Bool)0))));
                        var_53 = ((/* implicit */short) (~(((/* implicit */int) (short)-14005))));
                        var_54 = ((/* implicit */short) max((arr_70 [i_16] [i_20] [i_21] [i_22]), (((/* implicit */signed char) max((arr_50 [i_20 + 1] [i_20 - 3]), ((_Bool)0))))));
                    }
                } 
            } 
            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) (short)-27949))));
        }
        arr_72 [i_16] = ((/* implicit */unsigned int) var_9);
    }
    var_56 ^= ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)120))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -270749997333739873LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (5465171967604671456LL))))))), (var_5)));
    var_57 = ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-27958))) * (4294967282U))) != (((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)823))))))));
}
