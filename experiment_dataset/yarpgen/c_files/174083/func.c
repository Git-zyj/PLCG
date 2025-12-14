/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174083
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (~(3823071925U)))) ? (max((var_2), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1930686399U)) ? (1930686372U) : (1930686372U)))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1930686402U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2364280909U)))) ? (((((/* implicit */_Bool) arr_2 [(short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (((+(1930686387U))) * (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) ((arr_5 [i_1]) && (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))), (min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_1] [i_1])))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */int) ((signed char) arr_6 [i_1] [i_1]))) : ((-(((/* implicit */int) arr_6 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((unsigned char) var_8))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 1930686387U))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 21; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_16 -= ((/* implicit */signed char) min((((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_5]))))), (((/* implicit */long long int) arr_22 [17LL]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */short) (-((~(2364280908U)))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_3] [i_4 - 2] [i_5] [i_4 - 1] [i_7])) ? (((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_6] [i_6] [i_7])) ? (((/* implicit */long long int) 1930686387U)) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)14568))))))));
                        }
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((unsigned int) 2364280895U))));
                        var_20 -= ((/* implicit */_Bool) ((((-2087254492) != (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) ((unsigned char) 2364280897U))) ? (var_5) : (((/* implicit */unsigned long long int) (+(7227919378497625833LL)))))) : (((arr_1 [i_4 - 3] [i_4 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_6])))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) 2087254492)))) / (7227919378497625833LL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min(((-(((/* implicit */int) arr_14 [i_3] [i_9])))), (((/* implicit */int) arr_19 [i_3] [i_8])))))));
                    arr_33 [i_3] [i_8] [i_9] = arr_0 [i_8];
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        for (long long int i_11 = 1; i_11 < 23; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                {
                    var_23 -= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_2))) || (arr_5 [i_11 - 1]))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((18446744073709551614ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-12992), (((/* implicit */short) (_Bool)0))))))))) ? (((/* implicit */int) ((short) arr_37 [i_11 + 1]))) : (max((-2147483646), (((((/* implicit */_Bool) arr_6 [i_10] [i_10])) ? (((/* implicit */int) (short)-4093)) : (((/* implicit */int) arr_2 [(_Bool)1])))))))))));
                    arr_42 [i_10] [i_11 - 1] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_36 [i_10]) ? (((/* implicit */int) arr_40 [i_10] [i_10] [i_10])) : (((/* implicit */int) var_0))))) ? (-2087254471) : (((/* implicit */int) (!((_Bool)0))))))) ? (((/* implicit */int) ((max((1930686399U), (((/* implicit */unsigned int) (short)-32253)))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (2364280897U)))))) : (((((/* implicit */_Bool) arr_39 [i_11 + 1])) ? (((/* implicit */int) arr_39 [i_11 - 1])) : (((/* implicit */int) (_Bool)1))))));
                    var_25 = ((/* implicit */long long int) ((((var_4) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) max((arr_34 [i_12]), (((/* implicit */unsigned short) arr_2 [i_10]))))))) << (((((-8974126120608747399LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (8974126120608747412LL)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) (-((~(7227919378497625833LL)))));
    var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) max(((unsigned short)43146), (((/* implicit */unsigned short) (signed char)-7))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
