/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119699
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) -1372897943)) : (min((var_2), (((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)-61))))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) (~(-1372897943)));
                    arr_8 [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((var_7) - (1326990411)))))))) ? ((~(var_14))) : (((/* implicit */unsigned int) var_5))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1372897929) + (((/* implicit */int) (unsigned char)126))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -232717836099031402LL)) ? (var_3) : (((/* implicit */int) var_6))))))));
                }
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (1498511256)));
                arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(var_12)))))) ? ((~(((((/* implicit */int) (short)-1640)) | (((/* implicit */int) (short)-1643)))))) : ((~(((int) (_Bool)0))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 4 */
    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        arr_14 [i_3 - 1] [i_3] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 994227924U)) || (((/* implicit */_Bool) -1372897930)))) ? ((+(var_10))) : ((+(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)16383))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_5) : (var_12)))) : (var_8))) : (((((/* implicit */_Bool) (~(var_14)))) ? (((var_4) ? (((/* implicit */unsigned int) var_12)) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)128))))))));
        /* LoopSeq 3 */
        for (short i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                arr_22 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (65148684U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (var_5)))))) : (max((4127474442U), (((/* implicit */unsigned int) (unsigned short)61816))))));
                var_19 = (+((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)1639)) : (((/* implicit */int) var_11)))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                            arr_28 [i_3] [i_3] [18] [(short)16] [i_3] [i_3] [i_3] &= ((/* implicit */int) var_6);
                            arr_29 [i_4] [i_4] = ((/* implicit */unsigned short) (+(var_2)));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_14))));
                        }
                    } 
                } 
                arr_30 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_4] = ((/* implicit */long long int) (~((~(max((var_8), (4127474440U)))))));
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)-1640)), (4127474471U)));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                arr_34 [i_4] = ((/* implicit */long long int) var_6);
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_0))));
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (((var_2) + (((/* implicit */long long int) var_8))))));
            }
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (short i_10 = 3; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned char i_11 = 3; i_11 < 21; i_11 += 4) 
                    {
                        {
                            arr_42 [i_3] [i_3] [(unsigned short)2] [(signed char)3] [i_4] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (var_14) : (((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) var_11)) - (19)))))) ? (var_8) : (((/* implicit */unsigned int) (+(var_10))))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((var_12) >= (((/* implicit */int) var_1))))) >= (var_12))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (int i_13 = 1; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) var_5)) / (548682072064ULL))))))));
                            var_27 = ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
                arr_48 [i_4] [i_4 + 2] [i_9] [i_4] = ((/* implicit */unsigned int) var_7);
            }
            /* LoopSeq 1 */
            for (short i_14 = 1; i_14 < 21; i_14 += 2) 
            {
                var_28 += ((/* implicit */unsigned char) var_10);
                /* LoopNest 2 */
                for (short i_15 = 4; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned char i_16 = 4; i_16 < 21; i_16 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1372897949)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 11873590925692360449ULL))))) : (var_12)))) : (var_13)));
                            var_30 = ((/* implicit */unsigned char) var_3);
                            var_31 -= ((/* implicit */int) var_4);
                            arr_58 [i_4] [i_4] [i_14] [i_15] = max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) (-(var_13)))))));
                        }
                    } 
                } 
            }
            arr_59 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)132))));
        }
        for (long long int i_17 = 1; i_17 < 21; i_17 += 1) 
        {
            var_32 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)247)) ? (133141814) : (((/* implicit */int) (short)1633))))) + (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
            /* LoopSeq 3 */
            for (unsigned short i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                arr_65 [i_18] [i_17] [i_3] = ((/* implicit */unsigned int) var_9);
                var_33 += ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) ((((/* implicit */long long int) 11U)) % ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (4294967295U)))))) - (16)))));
            }
            for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                var_34 *= ((((((/* implicit */_Bool) (unsigned short)37297)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) var_10)))))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))));
                arr_68 [i_17] = var_10;
            }
            for (unsigned char i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                var_35 = ((/* implicit */short) max((((((/* implicit */int) var_0)) % (var_5))), ((~(-1372897964)))));
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 548682072062ULL)) ? (1498511268) : (((/* implicit */int) (signed char)112))))) : (var_14)))))))));
            }
            var_37 = ((/* implicit */unsigned short) var_0);
        }
        for (long long int i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            var_38 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) ((int) var_2))) ? (((unsigned long long int) (unsigned short)37297)) : (((/* implicit */unsigned long long int) (+(4294967295U))))))));
            arr_75 [i_21] [(_Bool)0] = ((/* implicit */signed char) var_8);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_22 = 0; i_22 < 23; i_22 += 1) 
            {
                arr_79 [i_21] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28233))) < (1611484019U))))) + ((-(var_14)))));
                arr_80 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8191LL)) ? (((/* implicit */int) (_Bool)1)) : (-1372897943)));
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (int i_24 = 2; i_24 < 22; i_24 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) var_6);
                            var_40 ^= ((int) -5424115117315335792LL);
                        }
                    } 
                } 
                var_41 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned char)171)))))) ^ (((((/* implicit */unsigned int) var_7)) / (var_14)))));
            }
        }
    }
    for (int i_25 = 0; i_25 < 17; i_25 += 4) 
    {
        var_42 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3434573948U)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 1856528169))))) : (((/* implicit */int) (!(var_4))))))) ? (var_5) : (var_5)));
        arr_89 [i_25] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? ((+(var_8))) : (((/* implicit */unsigned int) var_10)))) * (((/* implicit */unsigned int) max((((/* implicit */int) ((var_7) == (((/* implicit */int) (signed char)-105))))), (var_12))))));
        /* LoopNest 3 */
        for (unsigned int i_26 = 0; i_26 < 17; i_26 += 1) 
        {
            for (int i_27 = 1; i_27 < 15; i_27 += 2) 
            {
                for (signed char i_28 = 2; i_28 < 16; i_28 += 4) 
                {
                    {
                        arr_98 [i_25] [i_25] [7] [i_25] [i_26] = ((/* implicit */int) var_15);
                        arr_99 [i_25] [i_25] [i_26] [i_28] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                        arr_100 [i_25] [i_26] [i_26] [i_26] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(6560619649921331043ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) ? (((((/* implicit */_Bool) (unsigned short)56207)) ? (var_5) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)1)))))) : (1498511256)));
                    }
                } 
            } 
        } 
    }
    for (signed char i_29 = 1; i_29 < 8; i_29 += 4) 
    {
        arr_103 [i_29 + 2] = max((-2472323943836444983LL), ((+(8173LL))));
        arr_104 [i_29] [i_29 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned int) -1498511264)) : (2076859528U)));
    }
    for (unsigned char i_30 = 2; i_30 < 21; i_30 += 4) 
    {
        var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))));
        var_44 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-64)), (1176975391)));
        var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        arr_107 [14] [i_30] = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned int) var_7))));
    }
}
