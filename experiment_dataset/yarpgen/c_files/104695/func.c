/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104695
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
    var_12 = (~(var_3));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) (_Bool)1);
                        var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_0] [i_2 - 1] [6LL]))) ^ (max((((/* implicit */unsigned long long int) (+(-2026820960)))), (max((arr_6 [i_0]), (((/* implicit */unsigned long long int) var_11)))))));
                        var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_1))), (((((/* implicit */_Bool) -2026820960)) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_2] [i_2])) : (var_7)))));
                        var_16 = ((/* implicit */_Bool) arr_2 [i_0]);
                        var_17 ^= (-(((/* implicit */int) arr_10 [i_0] [i_3] [i_2 - 1] [i_3])));
                    }
                } 
            } 
        } 
        var_18 |= ((/* implicit */unsigned int) ((long long int) ((_Bool) (unsigned short)52814)));
        /* LoopNest 3 */
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
                        var_20 ^= (+(((/* implicit */int) var_9)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 12; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                {
                    arr_24 [i_0] [i_0] [i_8 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_7] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12722))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_8] [i_0] [i_0] [5ULL] [i_0] [i_0])) >> (((var_4) - (9260155135154954990ULL)))))) : (max((var_4), (var_4)))))) ? (((/* implicit */int) arr_15 [i_0] [i_7 + 2] [i_0])) : (((/* implicit */int) ((_Bool) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                    arr_25 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) arr_20 [i_8] [i_7]))));
                    arr_26 [(short)6] [i_7] [i_0] [i_8 + 4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_11 [i_7] [i_7 + 1] [i_8] [i_7] [i_8] [(short)1])), (max((var_10), (((/* implicit */long long int) var_7))))));
                    arr_27 [i_0] [i_7] [i_0] = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) max((18446744073709551615ULL), (18446744073709551615ULL)))) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((unsigned int) arr_11 [i_8 + 1] [i_8 + 2] [i_7 - 1] [(signed char)14] [i_7 + 3] [i_7])))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) min(((+(var_4))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
    }
    for (int i_9 = 1; i_9 < 16; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    var_22 -= ((/* implicit */short) ((((((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_2)))))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_34 [i_9] [i_9])) : (((/* implicit */int) (short)11806))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_0))))))));
                    var_23 = ((/* implicit */long long int) (~(var_0)));
                    var_24 = ((/* implicit */unsigned char) ((max((min((var_3), (var_3))), (((/* implicit */unsigned long long int) var_1)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))) ? (((/* implicit */long long int) ((315895286) >> (((var_3) - (515174157707670591ULL)))))) : (((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                }
            } 
        } 
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned int) arr_35 [i_9 - 1] [7] [i_9 - 1]);
    }
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                for (int i_15 = 1; i_15 < 23; i_15 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (unsigned short)52812))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 18446744073709551615ULL))) ? (max((((/* implicit */unsigned long long int) var_5)), (arr_43 [i_15] [i_14] [i_13] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_12] [i_12] [i_12] [i_15])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0)));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (arr_40 [i_12])));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)12724)) ? (1790615879) : (((/* implicit */int) (unsigned char)242)))) << ((((~(var_11))) - (1373124415)))))) > (min((((/* implicit */unsigned long long int) (+(var_7)))), (max((672339326666665911ULL), (((/* implicit */unsigned long long int) 1189542995)))))))))));
                    }
                } 
            } 
        } 
        arr_45 [i_12] = ((/* implicit */_Bool) var_2);
        /* LoopSeq 2 */
        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_29 = ((/* implicit */short) var_0);
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    for (int i_19 = 1; i_19 < 21; i_19 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) var_0);
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (672339326666665911ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_43 [i_12] [i_12] [i_12] [i_12])))) : ((+(var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_18] [i_17] [i_16] [i_12]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_12] [i_12] [i_12] [i_12]))) : (var_10)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (var_10)))));
                        }
                    } 
                } 
            }
            var_32 ^= ((/* implicit */unsigned long long int) (unsigned char)133);
            /* LoopSeq 2 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                arr_60 [i_20] [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_12] [i_16] [0ULL] [i_12] [i_20 - 1])))))));
                /* LoopNest 2 */
                for (signed char i_21 = 3; i_21 < 24; i_21 += 2) 
                {
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_33 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) 16594692979851144965ULL))) ? (arr_43 [i_12] [i_16] [i_20 - 1] [i_22]) : (((/* implicit */unsigned long long int) var_7)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [(short)4] [i_12] [i_12] [i_12] [i_12]))))) >> (((var_4) - (9260155135154954986ULL))))))));
                            arr_67 [i_22 - 1] [i_20] [i_20] [i_20] [i_12] = ((/* implicit */unsigned long long int) (+(-315895296)));
                        }
                    } 
                } 
                arr_68 [(unsigned char)14] [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_38 [i_16] [i_16])) ? (var_11) : (var_7))) : (((/* implicit */int) ((signed char) arr_64 [(short)21] [i_16] [i_20] [i_16] [i_12])))))) : (((((/* implicit */_Bool) 14346894499530322512ULL)) ? (((long long int) arr_51 [i_12] [i_12] [i_12] [i_20])) : (var_10)))));
                var_34 = ((/* implicit */short) ((((max((((/* implicit */unsigned long long int) var_1)), (var_0))) + (((/* implicit */unsigned long long int) min((arr_51 [i_12] [i_16] [i_16] [i_16]), (arr_51 [i_12] [i_12] [i_20] [i_12])))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_5)))))))));
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 3; i_24 < 22; i_24 += 2) 
                {
                    for (signed char i_25 = 0; i_25 < 25; i_25 += 4) 
                    {
                        {
                            var_35 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7602594891076095998LL))));
                            var_36 = ((/* implicit */_Bool) min((var_36), ((!(((/* implicit */_Bool) (unsigned char)32))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) var_6))));
                var_38 -= ((/* implicit */unsigned int) var_11);
            }
        }
        for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 1) 
            {
                var_39 = ((/* implicit */int) min((var_39), (var_7)));
                var_40 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_9))))) ? (var_0) : (((((/* implicit */_Bool) (short)-10708)) ? (var_0) : (var_4))))) > (min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_10)) > (13666668350014179266ULL))))))));
            }
            var_41 = ((/* implicit */unsigned long long int) (((((-(var_7))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) var_2))));
            arr_83 [i_12] [i_26] = ((/* implicit */_Bool) max((((/* implicit */short) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0))))))), (var_2)));
        }
    }
}
