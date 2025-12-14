/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118005
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) arr_2 [i_0]))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(1683437215)))) || ((!(arr_0 [i_0 - 3]))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_5))));
            arr_8 [i_0] [10LL] = ((/* implicit */unsigned short) arr_6 [i_0] [(signed char)9]);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_20 *= ((/* implicit */_Bool) arr_7 [7ULL] [7ULL] [i_2]);
                        var_21 *= ((/* implicit */signed char) (((-2147483647 - 1)) + (2147483647)));
                        var_22 = arr_12 [i_1] [10];
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (~(-2147483647)));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((arr_19 [(unsigned short)9] [i_1 - 2] [i_1] [i_1 + 1] [i_1]) >> (((((arr_1 [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (2287110033109613514ULL))))))));
                            var_25 = ((/* implicit */long long int) (!(((2147483647) >= (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_7 = 2; i_7 < 11; i_7 += 1) /* same iter space */
        {
            var_26 = var_4;
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (long long int i_10 = 2; i_10 < 9; i_10 += 2) 
                    {
                        {
                            var_27 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_8] [i_8] [(unsigned short)0] [i_10] [i_10]))));
                            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((long long int) -3303463801057997904LL)))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    for (signed char i_12 = 1; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 - 4])) != (((/* implicit */int) arr_2 [i_0 - 2]))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_8 + 2] [i_8 + 3] [i_8 + 3] [i_8 - 1] [i_8 + 2])) ? (((/* implicit */int) var_17)) : (2147483644)));
                            var_32 = ((/* implicit */signed char) (-(arr_9 [i_0 - 4])));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 2) /* same iter space */
            {
                arr_41 [6] [i_7] [i_7] [i_7 + 1] = ((/* implicit */signed char) -3303463801057997893LL);
                var_33 = (+(var_5));
            }
            arr_42 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) (signed char)-57)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            var_34 = ((/* implicit */unsigned long long int) arr_25 [i_7] [i_7] [i_7 - 2] [i_7 - 2]);
        }
        for (signed char i_14 = 2; i_14 < 11; i_14 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) var_17))))))));
            var_36 = ((unsigned long long int) arr_18 [i_0 - 4] [i_0 - 4] [i_14 - 1] [i_14 - 2] [i_14]);
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16545)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (unsigned short)20393))));
        }
        var_38 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    }
    for (unsigned int i_15 = 4; i_15 < 11; i_15 += 4) /* same iter space */
    {
        arr_51 [i_15 + 1] [i_15] = var_6;
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 72057594029539328LL)) ? (2147483647) : (((/* implicit */int) (_Bool)1))));
        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_48 [i_15 + 1])))) * (((/* implicit */int) var_7))))), (((((((/* implicit */_Bool) (unsigned short)0)) ? (16585914598711481852ULL) : (((/* implicit */unsigned long long int) -1634373825)))) >> (((((((/* implicit */int) var_8)) * (((/* implicit */int) arr_40 [i_15] [i_15] [i_15])))) - (3595))))))))));
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) - (((((((/* implicit */int) var_8)) + (2147483647))) >> (((3394712653U) - (3394712643U))))))), ((-(((/* implicit */int) (signed char)127)))))))));
    }
    /* vectorizable */
    for (unsigned int i_16 = 4; i_16 < 11; i_16 += 4) /* same iter space */
    {
        var_42 = ((/* implicit */long long int) (-(725447431)));
        var_43 = ((/* implicit */int) (signed char)127);
        var_44 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_16 - 1]))));
    }
    for (unsigned int i_17 = 4; i_17 < 11; i_17 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            for (unsigned short i_19 = 1; i_19 < 10; i_19 += 1) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_45 ^= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (arr_50 [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (min((((((/* implicit */_Bool) arr_13 [(signed char)9] [i_18] [i_19 + 2] [i_20])) ? (((/* implicit */int) var_0)) : (var_2))), (2118794917))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_2)) : (-3303463801057997904LL))))));
                        var_46 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) min((((/* implicit */int) var_17)), (arr_9 [i_19 + 1]))))))), (max((((/* implicit */unsigned long long int) (signed char)108)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (14250599369039161914ULL) : (((/* implicit */unsigned long long int) -72057594029539323LL))))))));
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */long long int) var_10);
        arr_65 [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_17 + 1] [i_17 + 1] [i_17])) ? (2147483636) : (var_5)))) : (max((((/* implicit */long long int) (_Bool)0)), (6159491414228167659LL)))));
    }
    /* LoopNest 2 */
    for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
    {
        for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_23 = 1; i_23 < 24; i_23 += 1) 
                {
                    for (signed char i_24 = 4; i_24 < 22; i_24 += 3) 
                    {
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned short) var_7);
                                arr_79 [(_Bool)1] [i_21] [i_21] [i_23 + 1] [i_24 + 1] [i_22] [(signed char)22] = ((/* implicit */unsigned int) (~(max((((/* implicit */int) (signed char)47)), (2147483644)))));
                                var_49 = ((/* implicit */unsigned short) max((var_49), ((unsigned short)34357)));
                            }
                        } 
                    } 
                } 
                arr_80 [i_21] [i_22] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-29)), (var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_21])))));
                var_50 = ((((/* implicit */_Bool) 536870911ULL)) ? (((/* implicit */unsigned long long int) 2165702436U)) : (536870911ULL));
            }
        } 
    } 
}
