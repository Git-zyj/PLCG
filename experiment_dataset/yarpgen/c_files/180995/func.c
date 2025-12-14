/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180995
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
    var_15 |= var_4;
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((signed char) ((unsigned int) min((var_13), (((/* implicit */unsigned long long int) var_6))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((unsigned short) (short)32251)))));
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 387858653535317541ULL))) >= (var_12))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_2] = (~(((unsigned long long int) ((_Bool) (unsigned short)35841))));
            arr_9 [(signed char)22] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((short) (-(var_14))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_13 [i_1] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_19 [i_3] [i_3] [22LL] [i_5] = ((/* implicit */short) (+((+(((long long int) (unsigned short)65535))))));
                        arr_20 [22ULL] [i_3] [i_4] [i_3] [i_5] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_13)))));
                    }
                } 
            } 
        }
        arr_21 [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(var_11)))) ^ ((~(7119837849140671837ULL)))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            var_17 = ((/* implicit */short) ((long long int) (~(var_12))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 4; i_9 < 23; i_9 += 4) 
                    {
                        {
                            arr_34 [i_7] [i_8] [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((_Bool) -2060366418));
                            arr_35 [i_7] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-20932))));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(-8494773879119702076LL))))));
            }
        }
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    {
                        arr_46 [i_1] [i_11] [i_11] [i_12] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (~(var_0)))))));
                        arr_47 [i_11] [i_11] [i_12] = ((unsigned short) ((unsigned short) ((unsigned int) var_6)));
                    }
                } 
            } 
            var_19 *= ((/* implicit */short) ((((long long int) ((unsigned char) (unsigned short)65535))) >> (((((long long int) (+(((/* implicit */int) (short)-24))))) + (78LL)))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            arr_52 [i_13] [0ULL] = ((/* implicit */unsigned short) var_4);
            var_20 = ((/* implicit */unsigned short) var_2);
        }
        for (signed char i_14 = 4; i_14 < 21; i_14 += 1) 
        {
            var_21 = ((/* implicit */signed char) (~(max(((-(var_8))), (((/* implicit */unsigned long long int) var_10))))));
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((669322237614027711ULL) == (var_8))))));
                            arr_65 [i_1] [i_1] [i_16] [i_16] [i_17] [i_17] = ((/* implicit */unsigned char) ((short) ((var_12) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))));
                        }
                    } 
                } 
            } 
            arr_66 [i_1] [i_14] [19] = ((/* implicit */int) (((+(1040187392U))) ^ ((~(var_10)))));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            arr_70 [i_1] [(unsigned short)14] [23ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
            var_23 = (+((-(10997870205368223198ULL))));
            arr_71 [i_1] [i_18] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)5975))));
        }
        /* vectorizable */
        for (short i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((_Bool) var_10)))));
            /* LoopSeq 2 */
            for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_21 = 0; i_21 < 24; i_21 += 1) 
                {
                    arr_78 [i_20] [i_1] [i_19] [i_20] [i_19] = ((/* implicit */unsigned int) ((long long int) (short)-23069));
                    arr_79 [i_20] [(short)4] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                }
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (~(586335173)));
                            var_26 = ((unsigned short) (_Bool)1);
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) % (var_8)))))))));
            }
            for (long long int i_24 = 3; i_24 < 23; i_24 += 3) 
            {
                arr_86 [i_1] [i_1] [i_24 + 1] [i_24] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) || (((/* implicit */_Bool) 864691128455135232ULL))));
                /* LoopSeq 2 */
                for (signed char i_25 = 0; i_25 < 24; i_25 += 1) 
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(var_12))))));
                    arr_90 [i_25] [i_19] [i_19] [(short)2] [(unsigned short)10] = ((/* implicit */short) var_14);
                    /* LoopSeq 1 */
                    for (short i_26 = 0; i_26 < 24; i_26 += 2) 
                    {
                        arr_95 [i_1] [i_19] [i_24] [(unsigned short)9] [i_25] = ((/* implicit */unsigned char) (+(-586335158)));
                        var_29 *= ((/* implicit */_Bool) (+(669322237614027688ULL)));
                    }
                }
                for (short i_27 = 1; i_27 < 22; i_27 += 3) 
                {
                    arr_100 [i_1] [i_1] [i_1] [i_1] [(unsigned char)21] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_2)))));
                    arr_101 [7U] [(unsigned short)19] [i_1] [i_19] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    arr_102 [i_1] [i_1] [i_1] [i_24] [i_27] [(short)18] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                }
                arr_103 [i_1] [1U] [i_19] [i_24] = ((/* implicit */unsigned short) (short)8824);
                arr_104 [i_19] [i_19] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) (unsigned short)0)))))) < (((var_12) + (((/* implicit */long long int) 3339016656U))))));
            }
            arr_105 [i_19] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) var_14));
            arr_106 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
        }
    }
    for (long long int i_28 = 1; i_28 < 9; i_28 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_29 = 0; i_29 < 10; i_29 += 1) 
        {
            for (unsigned char i_30 = 0; i_30 < 10; i_30 += 2) 
            {
                for (unsigned int i_31 = 0; i_31 < 10; i_31 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_32 = 0; i_32 < 10; i_32 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) 1217651560U)) / (var_14))), (((/* implicit */unsigned long long int) ((unsigned short) var_8)))));
                            var_31 *= ((/* implicit */signed char) var_10);
                        }
                        for (unsigned char i_33 = 0; i_33 < 10; i_33 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_0))))));
                            arr_124 [1ULL] [i_28] [i_31] [i_30] [i_28] [i_28] [1ULL] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) var_0))), (((long long int) var_14))));
                        }
                        for (int i_34 = 3; i_34 < 7; i_34 += 2) 
                        {
                            arr_128 [i_28] [i_29] [(short)8] [i_31] [i_31] [i_31] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)-101)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                            arr_129 [i_28] [i_30] [i_30] [i_31] [i_31] [0LL] &= (~(min((((/* implicit */unsigned long long int) var_4)), (var_8))));
                        }
                        for (unsigned short i_35 = 0; i_35 < 10; i_35 += 1) 
                        {
                            arr_133 [i_35] [9ULL] [i_28] [i_28] [i_28] [i_28] [i_28] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_1)))))), (var_10)));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (-(((int) var_13)))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_36 = 0; i_36 < 10; i_36 += 3) /* same iter space */
                        {
                            arr_138 [4U] [i_29] [1U] [i_36] [i_28] = (~(var_11));
                            arr_139 [i_30] [i_29] [i_30] &= ((/* implicit */_Bool) (((-(var_10))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)-3827)) / (var_11))))));
                            arr_140 [i_28] [i_28] [i_30] [(signed char)3] [i_28] = ((/* implicit */short) (~(((int) 3077315736U))));
                            arr_141 [i_28] [i_29] [8ULL] [i_28] [i_36] = ((/* implicit */long long int) (~(var_1)));
                        }
                        for (unsigned long long int i_37 = 0; i_37 < 10; i_37 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_10))))))));
                            arr_144 [i_28] [i_28] [i_28] = ((/* implicit */unsigned short) (-((+(669322237614027718ULL)))));
                        }
                        arr_145 [i_28] [i_29] [i_29] [i_30] [i_31] = ((/* implicit */unsigned char) (!(((_Bool) var_13))));
                        arr_146 [i_29] [i_28] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_2)))));
                    }
                } 
            } 
        } 
        arr_147 [i_28] = ((/* implicit */long long int) ((unsigned char) (-(3339016656U))));
        arr_148 [(signed char)0] |= ((/* implicit */unsigned short) (~((-(var_2)))));
    }
}
