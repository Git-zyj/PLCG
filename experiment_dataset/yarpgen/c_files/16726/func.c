/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16726
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
    var_10 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? ((-(arr_3 [i_0] [i_0]))) : (((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2] [i_0])) : (arr_9 [i_0] [i_1] [i_1] [i_3])))) ? ((-(var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))) ? (((unsigned long long int) (~(arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_3] [i_3] [i_2 + 1] [i_1]))))));
                            var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_4 [i_0] [12LL] [i_0])))))) - ((+(((/* implicit */int) var_0))))));
                            arr_12 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) arr_4 [i_0] [i_1] [(unsigned char)2]));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_22 [i_0] [i_6] [i_6] [i_5] [i_4] [i_0] [i_0]))))) ? (((int) ((unsigned int) arr_20 [i_0] [i_1] [i_0] [i_6]))) : (((((((/* implicit */int) var_7)) * (((/* implicit */int) arr_22 [i_0] [i_1] [i_4] [i_6] [i_6] [i_4] [i_4])))) / ((+(((/* implicit */int) arr_18 [6LL] [i_1] [i_1] [i_5]))))))));
                                var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (-(var_3)))))));
                                var_14 = arr_14 [i_0];
                                arr_25 [i_0] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((arr_14 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))) && (((/* implicit */_Bool) ((14772966803367942216ULL) - (18446744073709551615ULL)))))))));
                                var_15 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) (-(arr_6 [i_0] [i_1] [i_0] [i_6])))) / ((-(arr_2 [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_16 *= ((/* implicit */unsigned char) arr_10 [3U] [i_0] [i_1] [i_1]);
                var_17 = ((/* implicit */signed char) arr_6 [i_1] [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))), ((~(((/* implicit */int) (unsigned char)53)))))) : (((/* implicit */int) (!(((_Bool) var_6)))))));
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (!(((_Bool) ((signed char) arr_27 [i_7])))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_7])) * ((+(((/* implicit */int) arr_28 [i_8]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [(short)11]))) < (arr_30 [i_8])))) : (((((/* implicit */_Bool) 8073143824379628733LL)) ? (((/* implicit */int) arr_29 [i_7])) : ((+(((/* implicit */int) (_Bool)1)))))))))));
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                var_21 = var_5;
                var_22 = ((/* implicit */signed char) arr_30 [i_9]);
            }
        }
        for (unsigned short i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_3)))))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) arr_26 [i_7])))) - (52)))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_30 [i_7]))));
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(arr_27 [i_11]))))));
        arr_39 [(unsigned char)10] [i_11] = arr_36 [i_11] [i_11] [i_11];
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_44 [i_13] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_36 [i_11] [i_11] [i_11])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_29 [i_11])) >= (((/* implicit */int) arr_36 [i_13] [i_11] [i_11]))))))))) ? (((/* implicit */int) var_7)) : ((-((+(((/* implicit */int) arr_28 [i_13]))))))));
                    var_26 = arr_37 [(_Bool)1];
                    arr_45 [i_13] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_43 [i_11] [(signed char)1] [i_11] [i_11]))))));
                }
            } 
        } 
        arr_46 [i_11] = ((/* implicit */unsigned char) (+(arr_30 [i_11])));
        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~((+(var_1)))))) ? ((~(((/* implicit */int) max((arr_43 [i_11] [i_11] [i_11] [i_11]), (arr_27 [i_11])))))) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_43 [i_11] [i_11] [i_11] [(_Bool)1]))))))));
    }
}
