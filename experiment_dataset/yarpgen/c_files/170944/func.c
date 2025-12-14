/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170944
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) var_16);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? (max((((/* implicit */int) arr_2 [i_0])), (480024536))) : (min((((/* implicit */int) arr_2 [i_0])), (443689405)))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_16)))))));
        var_21 -= ((/* implicit */short) (((!(((/* implicit */_Bool) min((arr_2 [i_0]), (arr_0 [i_0])))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
        var_22 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1071972046U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_14)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_23 = ((/* implicit */short) var_15);
            var_24 = ((/* implicit */unsigned short) max((var_24), (arr_4 [i_1])));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_7))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_9 [i_3] [i_3]) : (((/* implicit */long long int) var_17)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) var_10);
            var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_1 + 2])))) ? (((((/* implicit */_Bool) (unsigned short)27773)) ? (-1LL) : (((/* implicit */long long int) 3222995249U)))) : (((/* implicit */long long int) (~(arr_8 [i_1 + 4] [i_1 + 1]))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            for (unsigned char i_6 = 3; i_6 < 23; i_6 += 1) 
            {
                {
                    var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2995909746U)) ? (((((/* implicit */_Bool) (unsigned char)53)) ? (5384548317781016250ULL) : (17351416407284066239ULL))) : (((/* implicit */unsigned long long int) 1299057549U))))) && (((/* implicit */_Bool) (unsigned short)19974)));
                    var_30 = ((/* implicit */unsigned short) arr_11 [i_1] [i_5]);
                    arr_20 [i_1] [i_5 - 1] [i_5] [i_6 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_5 + 2] [i_5])) ? (var_14) : (min((((/* implicit */long long int) var_17)), (arr_9 [i_5] [i_6]))))) <= (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)90)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6]))))))))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned short)24] [i_5 + 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_11))))))))));
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (int i_9 = 2; i_9 < 15; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) var_11);
                                var_33 = ((/* implicit */unsigned int) var_4);
                                arr_33 [i_8] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)234)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_11] [i_11] [i_9 + 1] [i_7])))))));
                            }
                        } 
                    } 
                    arr_34 [i_7] [i_8] [i_9] |= ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */int) arr_5 [i_7])) : (((/* implicit */int) arr_5 [i_7]))))) <= (min((((/* implicit */long long int) arr_5 [i_7])), (var_14)))));
        var_35 = ((/* implicit */unsigned short) var_10);
        var_36 ^= (signed char)-45;
    }
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        var_37 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_36 [i_12] [i_12])))))) + (((/* implicit */int) var_8))));
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 1; i_15 < 22; i_15 += 1) 
                {
                    {
                        arr_49 [i_12] [i_12] [i_12] [i_13] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) min((4294967295U), (4294443024U)))) ? ((-(((/* implicit */int) (unsigned char)249)))) : (var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) 268435455ULL)))))));
                        arr_50 [i_12] [i_13] [i_12] [i_15 + 2] = ((/* implicit */unsigned long long int) ((648278953) / ((+(((/* implicit */int) arr_48 [i_12] [i_13] [i_15 + 2] [i_15]))))));
                        arr_51 [i_14] [i_14] [i_12] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-30273)))) ? (((/* implicit */unsigned int) var_12)) : (var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12] [i_14] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))))))) : (((/* implicit */int) arr_37 [i_13] [i_12]))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_15 [i_12])) : (var_9)))), ((~(var_13))))))));
        /* LoopNest 3 */
        for (long long int i_16 = 3; i_16 < 22; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                for (unsigned int i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    {
                        arr_61 [i_18] [i_17] [i_12] [i_12] [i_16] [i_12] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_46 [i_18] [i_12])), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) & (arr_19 [i_12] [i_12] [i_18])))))));
                        arr_62 [i_12] [i_12] [i_16] [i_17] [i_17] [i_12] = ((/* implicit */unsigned short) (~(((min((arr_57 [i_12] [i_16 + 1] [i_17] [i_17]), (((/* implicit */unsigned int) arr_53 [i_12] [i_12] [i_12])))) & ((~(var_6)))))));
                    }
                } 
            } 
        } 
        arr_63 [14ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((unsigned char) var_4)))));
    }
    var_39 = ((/* implicit */unsigned int) var_4);
}
