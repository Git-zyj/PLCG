/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125159
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_12 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)31849)))))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 1]))) : (arr_5 [i_0] [(short)8] [i_0])))));
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_1 [i_0] [i_1]))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_0])) : (((/* implicit */int) var_3))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(arr_9 [i_0] [i_0] [i_0])))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_0])))));
            arr_11 [i_0] = ((/* implicit */unsigned int) ((long long int) arr_6 [i_0]));
            var_15 = ((/* implicit */unsigned char) ((signed char) arr_5 [i_0] [i_0] [i_2]));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) % (var_2))))))));
        }
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            var_17 = ((/* implicit */short) (~(arr_7 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_18 = (~(((((/* implicit */_Bool) var_9)) ? (arr_7 [i_5] [i_3 + 1] [i_4]) : (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4])))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_14 [i_5] [i_4] [i_0])) : (1751761807)))) / ((+(arr_12 [i_3 + 1] [i_3])))));
                        arr_22 [i_5] [i_0] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */short) 1242806473U);
                        arr_23 [i_5] [i_0] [i_3 + 1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */unsigned char) 1879048192U);
                            arr_33 [i_3 - 1] [i_3] [i_0] [i_7] [i_8] = ((/* implicit */_Bool) ((379692397253615038LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) -4250191190215974471LL)) ? (((/* implicit */unsigned int) 1340659012)) : (2871206619U))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_20 = ((/* implicit */signed char) var_10);
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    {
                        var_21 ^= (!(((/* implicit */_Bool) arr_5 [i_0] [i_10] [i_10])));
                        var_22 = ((short) (~(((/* implicit */int) var_3))));
                        var_23 = ((/* implicit */unsigned long long int) var_7);
                        arr_41 [i_0] [i_0] [i_10] [i_11] = ((/* implicit */unsigned char) arr_2 [i_9] [i_9]);
                    }
                } 
            } 
            arr_42 [i_0] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2126417213)) ? (((((/* implicit */_Bool) -1925796387721250880LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64089))) : (5U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121)))));
            arr_43 [i_0] = (!(((/* implicit */_Bool) ((unsigned char) arr_36 [i_0] [i_9] [i_9]))));
        }
        var_24 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) & (var_11))) : (((/* implicit */long long int) arr_2 [i_0] [i_0])));
        arr_44 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_36 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))));
        arr_45 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 3; i_12 < 16; i_12 += 1) 
    {
        arr_49 [0LL] |= ((/* implicit */signed char) (~(((/* implicit */int) arr_47 [i_12 - 3]))));
        arr_50 [i_12] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (4170768096U)));
        var_25 = (-(((/* implicit */int) arr_47 [i_12 - 2])));
    }
    var_26 += ((/* implicit */unsigned char) max(((~(((/* implicit */int) ((var_5) != (var_7)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_3))))))));
}
