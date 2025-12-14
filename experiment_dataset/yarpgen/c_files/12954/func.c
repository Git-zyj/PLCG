/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12954
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
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (576451956210401280ULL))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((576451956210401280ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (unsigned char)246)) : (((((/* implicit */_Bool) (short)7805)) ? (((/* implicit */int) (short)-2048)) : (((/* implicit */int) (short)-7797))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) var_5)), (((/* implicit */unsigned char) var_7)))))) : (var_15)));
    var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) var_6))))) ? (((int) var_2)) : (((/* implicit */int) var_11)))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (var_13)))) ^ (((/* implicit */int) var_7))))), (max((min((var_12), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_7)), (var_14))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-23047)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (short)-2048))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) ((var_12) & (((/* implicit */unsigned int) var_10))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            var_22 = ((((/* implicit */int) var_11)) ^ (((((/* implicit */int) var_2)) - (((/* implicit */int) var_2)))));
                            arr_16 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) var_14);
                        }
                        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 3) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) ((long long int) var_13));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_7))));
                        }
                        for (long long int i_6 = 3; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            var_25 = ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (short)28947)) * (((/* implicit */int) (unsigned short)414)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (var_13)))));
                            var_26 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_2))));
                        }
                        for (long long int i_7 = 3; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            var_28 *= ((/* implicit */unsigned long long int) ((unsigned short) var_5));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4)))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((unsigned int) var_9)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            arr_30 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (short)-28950))));
            var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))));
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((int) var_5)))));
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_14))));
            arr_31 [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            var_34 ^= ((((/* implicit */int) var_11)) * (((/* implicit */int) var_14)));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))));
        }
        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    for (unsigned short i_13 = 1; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) ((((_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_13)))));
                            arr_46 [i_0] [i_0] [i_10] [i_11] [i_12] [i_12] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_14 = 2; i_14 < 22; i_14 += 3) 
            {
                arr_49 [i_10] [i_10 + 1] [i_14] [i_0] = ((/* implicit */unsigned char) ((var_1) && (((/* implicit */_Bool) var_8))));
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (var_10)));
            }
        }
        arr_50 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    for (signed char i_18 = 3; i_18 < 22; i_18 += 4) 
                    {
                        {
                            arr_61 [i_18] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned char)255)) : (-448381521))));
                            var_38 = ((/* implicit */unsigned short) ((unsigned long long int) var_1));
                            arr_62 [i_18 - 1] [i_18] [i_17] [i_16] [i_15] [i_18] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                            var_39 = ((_Bool) var_2);
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_5))))));
                        }
                    } 
                } 
            } 
            var_41 *= ((/* implicit */_Bool) ((unsigned char) ((unsigned int) var_10)));
        }
        for (unsigned int i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))));
                var_43 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) var_10))));
                var_44 = ((/* implicit */short) ((signed char) var_9));
                var_45 = var_7;
            }
            for (unsigned char i_21 = 0; i_21 < 24; i_21 += 2) 
            {
                var_46 ^= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)));
                var_47 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_6)) : (var_13)))));
                var_48 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned short)65105)) : (-2056665164)));
                var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((((/* implicit */int) ((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) / (var_10))))));
                var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))));
            }
            for (long long int i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                var_51 = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)166)));
                var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_12))))));
            }
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    {
                        arr_79 [i_24] [i_0] [i_19] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_6)));
                        var_53 = ((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned int) var_6))));
                        var_54 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_14))) != (((/* implicit */int) (signed char)125))));
                    }
                } 
            } 
            var_55 = ((/* implicit */int) ((unsigned int) var_10));
        }
    }
}
