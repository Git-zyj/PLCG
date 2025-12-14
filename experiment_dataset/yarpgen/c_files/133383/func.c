/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133383
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
    var_16 = max((((/* implicit */unsigned int) var_11)), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_12))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_0)), (var_14)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((max((((((/* implicit */int) var_1)) / (((/* implicit */int) (short)25442)))), (((/* implicit */int) var_7)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))))))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (short i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (-(max((((int) var_0)), (((/* implicit */int) var_9))))));
                            arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [i_1 + 2])))) < (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25442))) > (1824372150U)))) ^ (0)))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) -391005978)) || (((/* implicit */_Bool) 10920649776007346819ULL))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) 3912277094U)) || (((/* implicit */_Bool) var_3)))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_2] [i_2] [i_1] [i_2] = arr_9 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1];
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (short)-26723))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                            arr_20 [i_1] [i_6] [i_2] [i_1 + 1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32321)) ? (((/* implicit */int) (unsigned short)57382)) : (391005978)))))))) - (((long long int) var_8))));
                            arr_21 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (arr_3 [i_0] [i_0] [i_1]))))))));
                        }
                    } 
                } 
                arr_22 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 391005977)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25446))) : (2251799813685240ULL)));
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
            {
                arr_26 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (signed char)22)) / (((/* implicit */int) (short)-22423))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(-1449493030))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((short) (unsigned short)25520))) : ((+(((/* implicit */int) var_14))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) var_14))))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))));
                            var_25 = ((/* implicit */_Bool) ((long long int) 0U));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) var_3);
            }
            /* vectorizable */
            for (short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_1]);
                arr_33 [i_1] = ((/* implicit */long long int) var_0);
                var_28 = ((/* implicit */short) ((((-6361850375960623898LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) > (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
            }
            var_29 = ((/* implicit */long long int) var_3);
            arr_34 [i_1] = ((/* implicit */long long int) var_11);
        }
        var_30 -= ((/* implicit */short) var_8);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) ((3816308500U) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))));
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (~(((/* implicit */int) var_4)))))));
        var_33 = ((/* implicit */int) (+(((((/* implicit */long long int) var_12)) / (arr_35 [i_11] [i_11])))));
        var_34 = ((/* implicit */unsigned short) ((short) ((arr_35 [i_11] [i_11]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)53))))));
    }
    for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        arr_39 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned int) -684088839)) & (647619179U))));
        arr_40 [i_12] [i_12] = ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) var_10))))))));
        arr_41 [i_12] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))), ((+(((((/* implicit */_Bool) var_14)) ? (arr_35 [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        var_35 -= ((/* implicit */_Bool) arr_36 [i_12]);
        var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)25450)) ? (3517427231319340779LL) : (-1LL))) < (((((arr_36 [i_12]) >= (-15LL))) ? (((arr_35 [i_12] [i_12]) / (arr_35 [i_12] [i_12]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))))));
    }
    var_37 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (short)-14982)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) (short)-25442)))))), (((/* implicit */int) (unsigned short)44377))));
    var_38 += ((/* implicit */_Bool) (+(((((/* implicit */int) var_14)) << (((((((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) + (5185470077189039839LL))) - (25LL)))))));
    var_39 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) ((unsigned short) var_8)))), (((((/* implicit */_Bool) var_6)) ? (min((var_2), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18883))) / (1824372150U))))))));
}
