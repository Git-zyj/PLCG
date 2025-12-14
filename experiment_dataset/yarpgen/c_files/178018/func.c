/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178018
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
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) arr_0 [i_1]);
                var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 - 4] [i_1 - 4] [i_1 - 4]))))));
            }
        } 
    } 
    var_16 += ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-61)) % (((/* implicit */int) (signed char)-115))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_17 += ((/* implicit */short) 3599274653820721572LL);
                        arr_15 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) arr_12 [(unsigned char)11] [i_2]);
                        arr_16 [i_2] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)29347))));
                    }
                } 
            } 
        } 
        arr_17 [(_Bool)1] [(short)0] &= ((/* implicit */unsigned char) -3599274653820721573LL);
        arr_18 [i_2] = var_12;
        arr_19 [i_2] = ((/* implicit */unsigned short) arr_7 [i_2]);
    }
    for (short i_6 = 2; i_6 < 15; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 3; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_18 |= ((/* implicit */signed char) (+(var_9)));
                        var_19 -= ((/* implicit */unsigned short) max((((5813889380751400028LL) - (3599274653820721572LL))), (((/* implicit */long long int) min((2003648234U), (((/* implicit */unsigned int) (signed char)-55)))))));
                        var_20 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_32 [i_6] [i_6] = ((((/* implicit */long long int) (~(((/* implicit */int) ((short) var_6)))))) != (min((min((3599274653820721572LL), (((/* implicit */long long int) (signed char)-61)))), (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_6])) << (((((/* implicit */int) var_8)) - (118)))))))));
        }
        for (unsigned char i_10 = 1; i_10 < 15; i_10 += 2) 
        {
            arr_35 [i_6] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_26 [i_6 - 1] [i_10 - 1])), ((-(((/* implicit */int) var_7))))))) ? (3599274653820721572LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200)))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)203))) ? ((-(((/* implicit */int) arr_31 [i_6 - 2] [i_6] [i_6 + 1] [i_10 + 2] [i_10])))) : (((/* implicit */int) max(((unsigned char)161), (((/* implicit */unsigned char) (signed char)-96)))))));
        }
        var_22 = ((/* implicit */unsigned short) var_0);
        var_23 = ((/* implicit */short) arr_20 [i_6 - 1]);
    }
    for (short i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 4; i_13 < 17; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        for (short i_15 = 4; i_15 < 16; i_15 += 2) 
                        {
                            {
                                arr_47 [i_11] [i_12] [i_13 - 1] [i_14] = ((short) (-(5813889380751400036LL)));
                                arr_48 [i_11] [i_11] [i_13] [i_14] [i_15] = ((/* implicit */unsigned short) arr_39 [i_11] [i_12] [i_11]);
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned short) var_4);
                    var_25 = ((/* implicit */unsigned char) max(((~(max((3631248447U), (((/* implicit */unsigned int) (short)4253)))))), (((/* implicit */unsigned int) ((short) min((arr_41 [i_11]), (((/* implicit */unsigned long long int) var_5))))))));
                    arr_49 [i_11] [i_13] = ((/* implicit */short) min((min((((((/* implicit */int) (signed char)-94)) % (((/* implicit */int) arr_40 [i_11] [i_11])))), (((/* implicit */int) arr_43 [12] [i_11] [i_11] [i_13])))), ((~(((/* implicit */int) arr_36 [i_11]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_26 = (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_4)), (1064343513U))), (((/* implicit */unsigned int) var_11))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_1))));
                        var_28 -= ((/* implicit */short) ((signed char) (+(((/* implicit */int) max(((unsigned char)157), (((/* implicit */unsigned char) (_Bool)0))))))));
                        var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-4249)))), (((arr_52 [i_11] [i_11] [i_11]) + (((/* implicit */int) arr_55 [i_11]))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)27)) << (((((((/* implicit */int) arr_53 [i_16] [i_17] [i_18])) + (53))) - (27))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)33098))))))) : ((~((-(arr_51 [i_11] [i_18])))))));
                    }
                } 
            } 
        } 
    }
}
