/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150414
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_15)))))) <= (((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))), (((((/* implicit */_Bool) (short)25916)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 8491890251833122996ULL))))));
                    var_19 = ((/* implicit */signed char) ((unsigned long long int) min((((((/* implicit */_Bool) (signed char)86)) || (((/* implicit */_Bool) (signed char)86)))), (((((/* implicit */int) (signed char)-70)) <= (((/* implicit */int) (signed char)-48)))))));
                    arr_14 [i_2] [5] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) min((var_8), (((/* implicit */short) var_10)))))))), (-7397678279471539912LL)));
                    arr_15 [1ULL] [(unsigned char)5] [i_2] [i_3 + 1] = max((var_9), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_12)))) || (((/* implicit */_Bool) max((var_14), (var_14))))))));
                }
            } 
        } 
        arr_16 [i_1] = var_7;
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        arr_20 [i_4] = ((short) var_12);
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) min((min((var_0), (4062348485U))), (((/* implicit */unsigned int) max(((signed char)-70), (((/* implicit */signed char) var_10)))))))) ? ((-(max((var_14), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                arr_27 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) min((min((min((var_0), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned int) var_10))))) || (((/* implicit */_Bool) var_14))));
            }
            var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-67)))))));
            /* LoopSeq 2 */
            for (signed char i_7 = 1; i_7 < 19; i_7 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-54), ((signed char)-79)))) ^ (((/* implicit */int) (signed char)-79))))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (10360230911915373367ULL)))));
                var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_0)), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) ? (min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_9))))) : (min((((/* implicit */long long int) var_11)), (var_2))))))));
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_32 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_15)))), (((/* implicit */int) max((var_15), (((/* implicit */short) var_9)))))))) || (((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) (short)-25931)), (9223372036854775807LL)))))));
                    arr_33 [i_7] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)47)), (9223372036854775807LL)))) ? (max((4269734071U), (((/* implicit */unsigned int) (signed char)-70)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) ((short) (unsigned short)65517))))))));
                    var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)0)), (max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    var_26 = ((/* implicit */_Bool) ((short) var_4));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                }
            }
            for (signed char i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                var_28 = ((/* implicit */short) max((((unsigned short) min((var_12), (((/* implicit */unsigned long long int) var_6))))), (min((((/* implicit */unsigned short) min((var_8), (((/* implicit */short) var_10))))), (max(((unsigned short)40149), (((/* implicit */unsigned short) var_4))))))));
                var_29 += ((/* implicit */int) max((((/* implicit */unsigned long long int) max((min((1023U), (((/* implicit */unsigned int) (unsigned short)65533)))), (((/* implicit */unsigned int) var_11))))), (max((((/* implicit */unsigned long long int) var_11)), (18446744073709551604ULL)))));
                arr_38 [i_10] [i_5] [i_5] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (max((var_2), (((/* implicit */long long int) (unsigned short)40172))))));
            }
            arr_39 [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_11))))), (max((var_3), (((/* implicit */unsigned short) var_10))))))) <= (((((/* implicit */_Bool) min((-1264231593), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min(((unsigned short)40181), (((/* implicit */unsigned short) var_8))))) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))))));
        }
        for (long long int i_11 = 1; i_11 < 18; i_11 += 4) 
        {
            arr_43 [i_11] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((var_7), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) || ((_Bool)1))))))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))));
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (signed char i_13 = 4; i_13 < 21; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (_Bool)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) 0LL))))) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) max((var_13), (((/* implicit */signed char) ((var_5) <= (var_2)))))))));
                            arr_53 [i_4] [i_14] [i_12] &= ((/* implicit */signed char) var_14);
                        }
                    } 
                } 
            } 
            var_31 += ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 6284848369969526168LL)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) ((((/* implicit */int) (short)-12658)) <= (((/* implicit */int) var_8))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (short i_16 = 3; i_16 < 20; i_16 += 4) 
            {
                for (short i_17 = 1; i_17 < 21; i_17 += 1) 
                {
                    {
                        arr_62 [i_4] [i_4] [i_4] [i_16] [i_4] |= ((/* implicit */signed char) var_7);
                        var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))) <= (((/* implicit */int) (short)-32317))));
                    }
                } 
            } 
            var_33 = ((((/* implicit */_Bool) (signed char)-7)) || (((/* implicit */_Bool) var_3)));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2272897214405198093LL)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (unsigned char)7))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_7))));
        }
    }
    var_35 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13887)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))) : (((((/* implicit */_Bool) 1048575ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1)))))));
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) || ((!(((/* implicit */_Bool) var_3)))))))));
}
