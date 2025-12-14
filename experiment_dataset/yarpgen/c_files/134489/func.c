/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134489
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (1548976277U)))) ? (((/* implicit */unsigned int) var_4)) : (min((1548976277U), (((/* implicit */unsigned int) var_4))))))), (var_5)));
        arr_5 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0 - 1]);
        arr_6 [i_0] = (+(((2745991019U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_11 = ((/* implicit */int) (!(((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) var_3))))) == (arr_9 [i_0] [i_0 - 1] [i_0 - 1])))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (((-(min((var_1), (((/* implicit */long long int) var_0)))))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)65535)))))));
                arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [5U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (9078783565398025978ULL))) >> (((min((((((/* implicit */long long int) var_6)) - (arr_9 [i_0 - 1] [i_1] [i_2]))), (((/* implicit */long long int) var_7)))) + (4198001880444817571LL)))));
            }
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (11549879871056450431ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) + (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))) : (((((/* implicit */_Bool) 3537395741U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (1486937426U)))));
                var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-14763)) || (((/* implicit */_Bool) ((long long int) var_10))))), ((!(((/* implicit */_Bool) min(((unsigned char)48), ((unsigned char)114))))))));
            }
        }
        for (short i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
        {
            var_14 *= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) var_9)))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-(((((/* implicit */_Bool) max((1486937403U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)164))))))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        {
                            arr_28 [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_22 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 + 2]))))), (min((((/* implicit */long long int) var_8)), (var_1)))));
                            var_16 -= ((/* implicit */unsigned short) arr_21 [i_0] [i_0] [(unsigned short)10]);
                        }
                    } 
                } 
            } 
            arr_29 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : (arr_24 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)192)), ((unsigned short)1)))))));
        }
        /* vectorizable */
        for (short i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                arr_35 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)-48));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((2808029870U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))));
                            arr_42 [(unsigned char)0] = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 6494094873886998213LL)) ? (-7202091314024508418LL) : (((/* implicit */long long int) 3813573672U))));
            }
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) 524272))) + (((((/* implicit */_Bool) 4238119592U)) ? (((/* implicit */int) (unsigned short)254)) : (((/* implicit */int) (short)-14684)))))))));
        }
        for (short i_12 = 2; i_12 < 10; i_12 += 3) /* same iter space */
        {
            arr_45 [i_0] [i_12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((3435273598U), (((/* implicit */unsigned int) var_8))))))) ? ((+(16748641392864059587ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-2222659718520110676LL) : (((/* implicit */long long int) arr_43 [i_0 - 1] [i_0 - 1] [i_12 + 1])))))));
            arr_46 [(unsigned short)4] [(signed char)6] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_7)) & (2686398506627375025ULL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((4095366497535076508LL) % (var_10))) : (2251799813685247LL)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (1698102680845492017ULL))));
        }
    }
    /* vectorizable */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = ((/* implicit */unsigned long long int) ((int) var_5));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                arr_56 [i_14] [(unsigned char)1] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (((/* implicit */unsigned long long int) var_10)))))));
                arr_57 [i_14] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)250));
                arr_58 [i_13] [i_14] [i_13] [(short)0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_48 [i_13 - 1] [i_13 - 1]))));
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                arr_61 [i_14] [i_16] [(_Bool)1] [i_14] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [4U] [i_16 - 1] [i_16] [i_16]))));
                arr_62 [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2053))) : (var_5))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1483830558)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))))));
            }
            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)197))));
            arr_63 [i_14] [i_13] [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)6)) && (arr_22 [i_13] [i_13] [i_13] [i_14]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)255))));
            arr_64 [(short)0] [0LL] [i_14] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-21920))))) ? (var_4) : (((/* implicit */int) ((unsigned char) var_8)))));
        }
        arr_65 [i_13] [i_13] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (var_7) : (var_9)))));
    }
    /* vectorizable */
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
    {
        arr_68 [i_17] [i_17] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) - (((/* implicit */int) (unsigned char)0))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned long long int) (unsigned char)255)))));
        arr_69 [i_17 - 1] [0ULL] |= ((/* implicit */int) 2037554163316665576ULL);
        arr_70 [i_17] = ((/* implicit */unsigned long long int) 3877293039U);
    }
    /* LoopNest 3 */
    for (unsigned int i_18 = 1; i_18 < 20; i_18 += 2) 
    {
        for (unsigned char i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) - (var_9)))), (min((arr_76 [i_18 + 1] [i_18 - 1] [i_18 + 2]), (((/* implicit */long long int) (short)14763))))));
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        for (unsigned char i_22 = 2; i_22 < 18; i_22 += 4) 
                        {
                            {
                                arr_83 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_2)))) || (((/* implicit */_Bool) arr_80 [i_18] [i_18] [i_20] [(unsigned char)8] [i_19]))));
                                arr_84 [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) min((((short) arr_73 [i_22 + 4] [i_19] [i_18 + 2])), (((/* implicit */short) (!(((/* implicit */_Bool) var_5)))))));
                                var_22 = ((/* implicit */long long int) (unsigned char)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) var_7))), (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    var_24 = ((/* implicit */unsigned int) ((var_1) > (((/* implicit */long long int) ((((/* implicit */_Bool) 4309200486276034946LL)) ? (((/* implicit */int) (_Bool)1)) : (((int) (_Bool)1)))))));
}
