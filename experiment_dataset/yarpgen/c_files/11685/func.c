/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11685
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned int) var_17);
                                var_19 = ((/* implicit */_Bool) var_6);
                                arr_13 [i_1] [i_3] [i_2 + 3] [i_1] [i_1] = ((/* implicit */unsigned int) var_16);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((((/* implicit */int) arr_11 [i_2 + 1] [i_0] [i_2 + 1] [i_0] [i_2 + 1])) - (((/* implicit */int) arr_11 [i_2 + 3] [i_0] [i_2 - 1] [i_0] [i_2 + 2])))))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_4 [i_1] [i_1] [i_2 + 3])))) ? (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_7))), (((/* implicit */long long int) (+(((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2 + 2] [i_2 + 2])) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) <= (68719476735LL))))))))));
                    var_22 += ((/* implicit */_Bool) min((((var_13) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2 + 3])))))));
                }
            } 
        } 
        var_23 = var_12;
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_7] [i_8])) ? (((/* implicit */int) arr_6 [i_7] [i_6] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_7 [i_5] [i_6] [i_8])) ? (arr_7 [i_5] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                        var_25 += var_9;
                        arr_23 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_10)), ((signed char)34)))) ? (((((/* implicit */_Bool) 3922361659064569116ULL)) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_2 [i_5])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)12945))))));
                    }
                } 
            } 
        } 
        var_26 += ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (1147422419U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24560)))))), (((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (signed char i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    {
                        arr_31 [i_10] [i_9 + 1] = var_7;
                        var_27 = ((/* implicit */unsigned int) arr_0 [i_11]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 18; i_13 += 3) 
            {
                {
                    var_28 += ((/* implicit */signed char) (((-(((/* implicit */int) var_10)))) & (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned char)33)), (arr_38 [i_5] [i_12] [i_13 - 1] [i_13 - 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_12]))))))));
                    var_29 &= ((/* implicit */unsigned char) ((_Bool) var_3));
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_9))))), (arr_38 [i_5] [i_12] [i_13 - 2] [i_12]))))))));
                    var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_13 - 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_5] [i_13 - 1] [i_5])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))))) : (arr_30 [i_5] [i_12] [i_13 + 1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_13 - 1] [i_12] [i_12] [i_12] [i_5])))))));
                }
            } 
        } 
    }
    var_32 = var_12;
    var_33 = (-(((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4)))) ? (((var_13) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
    {
        arr_43 [i_14] = ((/* implicit */unsigned int) var_3);
        arr_44 [i_14] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_18 [i_14] [i_14] [i_14] [i_14]))), (((/* implicit */long long int) min((var_14), (((/* implicit */unsigned short) var_3))))))), (((/* implicit */long long int) (_Bool)1))));
        arr_45 [i_14] = ((/* implicit */_Bool) var_14);
    }
    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) max((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)25566)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))))));
}
