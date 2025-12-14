/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125569
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-12)))))))) >> (((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)15] [(short)15]))) : (var_5))))) - (2233)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18))) : (((var_13) + (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_6 [i_2] [i_2] [i_2]))))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) (short)0)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_2])), (((((/* implicit */int) var_2)) - (((/* implicit */int) (_Bool)1))))))) : (13992618610714825814ULL)));
                    var_16 = max((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_2])), (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) 3330817817787768135LL)));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((+(9074191900233246416LL))) != (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (short)(-32767 - 1)))))))))));
                        arr_12 [i_3] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_4]))) > (min((((/* implicit */unsigned long long int) arr_6 [(short)2] [i_4] [(short)2])), (13992618610714825820ULL))))))));
                    var_18 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_7)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))) : (var_0))))) / (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_5] [i_4])) * (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    }
    for (short i_6 = 2; i_6 < 23; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_26 [i_6 - 1] [i_7] [8ULL] [(unsigned short)22] &= min((min((arr_25 [i_6 - 1] [0ULL]), (arr_25 [i_8] [(_Bool)1]))), (((/* implicit */long long int) var_6)));
                    var_19 -= ((/* implicit */unsigned short) arr_19 [i_6] [i_6]);
                    var_20 *= ((/* implicit */unsigned short) (+(((unsigned long long int) ((((/* implicit */_Bool) (short)-20885)) ? (((/* implicit */int) arr_22 [(unsigned short)18] [i_7] [(unsigned short)18])) : (((/* implicit */int) var_6)))))));
                    var_21 = ((/* implicit */short) arr_23 [i_6] [i_7 - 1] [i_8]);
                }
            } 
        } 
        arr_27 [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6 - 2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6] [i_6 - 1] [i_6]))) : (var_7)))), ((-(max((0ULL), (((/* implicit */unsigned long long int) var_13))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        var_22 -= ((/* implicit */short) (!(max(((_Bool)1), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_0)))))));
        var_23 = var_5;
        var_24 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_2)) ? ((-9223372036854775807LL - 1LL)) : (var_7))))) / (max((min((var_13), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
        /* LoopSeq 3 */
        for (short i_10 = 1; i_10 < 7; i_10 += 4) 
        {
            var_25 = (short)-13014;
            var_26 = ((/* implicit */short) ((unsigned short) min((min((((/* implicit */short) arr_28 [i_9] [i_10])), (var_6))), (((short) var_5)))));
            var_27 = ((((/* implicit */int) arr_5 [i_10] [i_10 + 3] [i_9] [i_9])) > ((~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 0ULL))))))));
            arr_33 [i_9] [i_9] = ((/* implicit */short) (+((+(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-32762))))))));
        }
        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 1; i_12 < 7; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    {
                        var_29 = ((/* implicit */long long int) min((((/* implicit */int) ((short) arr_23 [i_12 - 1] [i_12 + 2] [i_12 + 3]))), ((((+(((/* implicit */int) var_6)))) * (((/* implicit */int) max((((/* implicit */short) var_8)), ((short)-21))))))));
                        var_30 = ((/* implicit */unsigned long long int) var_10);
                        arr_43 [i_12 + 2] [(_Bool)1] [i_11] [i_13] [i_13] = ((/* implicit */unsigned short) var_1);
                        var_31 = ((/* implicit */long long int) (+((+(((/* implicit */int) var_2))))));
                        var_32 = ((/* implicit */short) min((3096203705091054974LL), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)34989)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    {
                        arr_49 [i_15] [0ULL] [i_11] [i_11] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (arr_30 [i_9] [i_11]) : (arr_30 [i_11] [i_9]))))));
                        var_33 = ((/* implicit */short) max((var_33), (max((((short) var_0)), (((/* implicit */short) (_Bool)1))))));
                    }
                } 
            } 
            var_34 = ((((/* implicit */_Bool) -25LL)) || (((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) var_2))))));
            var_35 = var_5;
        }
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 2; i_17 < 9; i_17 += 3) 
            {
                var_36 += max(((short)2604), ((short)-12262));
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_17] [i_17 - 2] [i_17 + 1])) && ((!(((/* implicit */_Bool) arr_50 [i_17] [i_17 - 2] [i_17]))))));
            }
            var_38 = ((max((var_11), (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)10130))))));
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 3; i_18 < 8; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_61 [i_9] [i_16] [i_18 - 1] [i_19] [i_19] = ((/* implicit */short) arr_46 [i_9] [i_9] [i_9]);
                        var_39 = ((/* implicit */short) max((min((((/* implicit */unsigned short) (short)17063)), ((unsigned short)65535))), (max((var_3), (((/* implicit */unsigned short) (short)-20885))))));
                    }
                } 
            } 
        }
    }
    for (short i_20 = 0; i_20 < 19; i_20 += 1) 
    {
        arr_64 [i_20] [i_20] = ((/* implicit */unsigned short) arr_23 [i_20] [i_20] [i_20]);
        arr_65 [i_20] = ((/* implicit */short) var_0);
        var_40 = (short)-26845;
    }
    /* LoopNest 2 */
    for (unsigned short i_21 = 1; i_21 < 14; i_21 += 4) 
    {
        for (short i_22 = 3; i_22 < 14; i_22 += 3) 
        {
            {
                var_41 = (~(-25LL));
                var_42 = ((/* implicit */unsigned short) ((max((4194303ULL), (((/* implicit */unsigned long long int) (short)3632)))) ^ (((/* implicit */unsigned long long int) max((((6795557417195332468LL) | (-3330817817787768135LL))), (((/* implicit */long long int) var_9)))))));
                var_43 = ((short) (_Bool)0);
            }
        } 
    } 
}
