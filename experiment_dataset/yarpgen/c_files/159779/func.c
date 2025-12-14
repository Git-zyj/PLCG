/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159779
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
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_5)) + (2147483647))) << (((var_6) - (11112922792988918760ULL)))));
    var_16 = ((/* implicit */signed char) ((var_11) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)92))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-5810))))) ? (max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 + 4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1484970289U)))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))) : ((~(arr_6 [i_0] [i_1] [(short)3] [(unsigned short)4])))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (arr_1 [16U]) : (arr_0 [i_2] [i_1]))) != (((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) : (var_8))))))));
                    var_19 = ((/* implicit */int) var_9);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) 8225303522209133769LL);
                                arr_17 [i_4] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) var_6);
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_8))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [5U] [i_2] [5U])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_1 + 4])) : (var_3)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 4]))));
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]));
        arr_19 [i_0] &= ((/* implicit */unsigned char) ((((unsigned int) var_6)) == (1484970295U)));
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(1484970289U)))) ? ((~(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) var_7)))))) < (((/* implicit */int) var_1))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (unsigned short i_7 = 2; i_7 < 21; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((long long int) ((var_7) || (((/* implicit */_Bool) var_12))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6]))) < ((~(1484970298U)))))))));
                        var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_8])))))))));
                        arr_33 [i_5] [i_5] = arr_25 [i_6] [(_Bool)1];
                        arr_34 [i_7] = ((/* implicit */signed char) arr_31 [i_5] [i_5] [(signed char)21] [i_5] [i_5] [(signed char)11]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) 2809997006U)) ? (var_14) : (var_14))), (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned short)65528)))))));
        arr_35 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58198))))) ? (((arr_23 [i_5]) + (((/* implicit */int) var_2)))) : (((/* implicit */int) max((var_5), (arr_20 [i_5]))))))) ? ((~(arr_28 [i_5] [17U] [i_5] [17U]))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-21022))))), ((+(((/* implicit */int) var_10))))))));
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 4; i_10 < 20; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                for (unsigned int i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    {
                        var_26 = ((/* implicit */short) var_6);
                        arr_46 [i_11] |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned char)27))) <= (((((/* implicit */_Bool) arr_30 [i_9] [i_12 + 2])) ? (((/* implicit */int) arr_38 [i_9] [i_11])) : (var_3)))));
                        var_27 = ((/* implicit */unsigned long long int) arr_32 [i_9] [i_10]);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned int) var_5);
    }
}
