/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143479
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
    var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) 524287U)), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_0)))))))));
    var_15 *= 2813736108U;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
        var_17 |= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_5)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_14 [7U] [i_0] [i_2] [i_0] [10LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_3]))));
                                var_18 = ((/* implicit */unsigned short) ((signed char) ((unsigned short) arr_11 [i_0])));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (signed char)40))));
                    var_20 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                    var_21 = ((/* implicit */unsigned char) var_11);
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    {
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_2);
                        arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */short) (unsigned char)7)), ((short)-1)))), (1533788371)))), (min((((/* implicit */long long int) (_Bool)1)), (var_12)))));
                        var_22 -= ((/* implicit */int) arr_0 [i_5] [i_6]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 2; i_11 < 24; i_11 += 4) 
                    {
                        var_23 = ((/* implicit */int) 4294443009U);
                        var_24 |= ((/* implicit */signed char) var_9);
                        var_25 = ((/* implicit */int) var_3);
                    }
                    var_26 = min((((/* implicit */unsigned int) ((int) var_3))), (((unsigned int) 0LL)));
                    var_27 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3))))), (max((((/* implicit */unsigned int) ((int) arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))), (min((var_5), (arr_21 [i_5])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52617)) ? (min((((/* implicit */long long int) 2139095040U)), (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_42 [i_13] = ((/* implicit */unsigned short) ((int) var_12));
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_9))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
    {
        arr_46 [i_14] [i_14] = ((/* implicit */unsigned char) max((max((((unsigned int) (unsigned char)7)), (((/* implicit */unsigned int) ((short) 524287U))))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            for (unsigned short i_16 = 1; i_16 < 24; i_16 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) max((var_30), ((-(var_7)))));
                        arr_54 [i_14] = min((((/* implicit */unsigned long long int) 4803903894749067769LL)), (7095920024251661888ULL));
                        arr_55 [i_17] [i_14] [i_14] [i_14] = max((min((((long long int) arr_21 [i_14])), (-4803903894749067770LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)127)))), (var_2)))));
                        var_31 = ((/* implicit */long long int) var_8);
                    }
                    var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) (unsigned short)18543))))), (max((((/* implicit */unsigned long long int) 0U)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (1143914305352105984ULL)))))));
                    var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)59699)), (876377634U)));
                }
            } 
        } 
        var_34 = (~(max(((-(((/* implicit */int) var_0)))), (-185562104))));
        arr_56 [i_14] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) 0LL)))));
    }
    /* vectorizable */
    for (signed char i_18 = 0; i_18 < 22; i_18 += 3) 
    {
        var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2678256358U))));
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_10 [i_18] [i_18] [i_18] [i_18]))));
        var_37 = ((int) 4294443014U);
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) arr_4 [i_18]))));
    }
    var_39 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)12209))))))), (1495059500U)));
    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (+((+(11589031040142901921ULL))))))));
}
