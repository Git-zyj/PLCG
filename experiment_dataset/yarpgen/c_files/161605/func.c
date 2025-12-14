/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161605
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
    var_15 = ((/* implicit */unsigned long long int) max((max(((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))), ((~(((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_16 &= ((/* implicit */unsigned char) ((((32752) ^ (0))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (((((/* implicit */unsigned int) ((/* implicit */int) (short)15360))) ^ (3546422286U)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (short)5812))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)7680)));
                                var_18 &= ((/* implicit */signed char) (short)15351);
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max(((((_Bool)0) ? (8796036169393819177LL) : (8796036169393819174LL))), (((/* implicit */long long int) max(((short)-21848), ((short)4620)))))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */_Bool) var_2);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            arr_15 [i_5 + 1] &= ((/* implicit */unsigned int) var_12);
            var_21 |= ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */int) var_8)) >> (((58308764U) - (58308734U))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_3)))))));
            var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_9 [i_0 + 3]))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
        {
            var_23 *= ((short) ((unsigned int) var_6));
            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7659))) : (8386560U))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            arr_27 [i_6] [i_0] [i_7] [i_6] [i_0] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_1))))));
                            arr_28 [i_0 - 2] [i_0 - 2] [i_7] [i_8] [i_9] = ((/* implicit */int) (((!(var_1))) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_10 [i_9] [i_8] [i_6 - 2] [i_6 - 2] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -32763))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) 32774))));
        }
    }
    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (unsigned int i_13 = 4; i_13 < 9; i_13 += 1) 
                {
                    {
                        var_26 = (i_13 % 2 == zero) ? (max((((/* implicit */long long int) (signed char)15)), (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_12)))) ? (((var_11) >> (((((/* implicit */int) arr_5 [i_10] [i_11] [i_13] [i_13])) + (6717))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-18841))))))))) : (max((((/* implicit */long long int) (signed char)15)), (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_12)))) ? (((var_11) >> (((((((/* implicit */int) arr_5 [i_10] [i_11] [i_13] [i_13])) + (6717))) - (20794))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-18841)))))))));
                        var_27 -= ((/* implicit */_Bool) ((int) max((((var_4) * (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))))));
                        arr_42 [i_10] [(_Bool)1] [i_12] [i_13] [i_13] = ((/* implicit */signed char) (-(max((((/* implicit */long long int) var_5)), (-8796036169393819178LL)))));
                        /* LoopSeq 1 */
                        for (int i_14 = 3; i_14 < 9; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) max((var_7), (((/* implicit */unsigned long long int) max((((long long int) var_1)), (((/* implicit */long long int) ((unsigned int) (short)-16720))))))));
                            var_29 ^= ((/* implicit */signed char) ((unsigned short) var_8));
                            var_30 -= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) 68719474688LL)) ? (((/* implicit */int) (unsigned short)57856)) : (((/* implicit */int) arr_44 [i_14 - 3] [i_14 - 3] [i_10] [i_13] [i_12])))), (((/* implicit */int) arr_36 [i_11 + 1] [i_11 - 1] [i_12])))), ((~((~(((/* implicit */int) var_10))))))));
                        }
                    }
                } 
            } 
        } 
        arr_47 [i_10] = ((/* implicit */int) (signed char)6);
    }
    /* LoopSeq 1 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((3350855023U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (max((8553661595611635157ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))));
        var_32 = ((/* implicit */unsigned int) ((int) var_5));
        var_33 = ((/* implicit */_Bool) max((((unsigned short) max((var_0), (((/* implicit */int) (unsigned short)4))))), (((/* implicit */unsigned short) (_Bool)1))));
    }
    var_34 += ((/* implicit */unsigned int) (-(var_7)));
}
