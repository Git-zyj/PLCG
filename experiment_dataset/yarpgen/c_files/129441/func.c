/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129441
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) 1625665517))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [(short)0] [(_Bool)1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (((+(var_5))) <= (arr_3 [i_0] [i_0] [i_0])));
                        arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] &= ((arr_1 [i_3]) / (((((((/* implicit */int) arr_4 [i_0] [20U] [i_0] [i_1])) + (2147483647))) >> (((((/* implicit */int) var_1)) + (90))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_11 *= ((/* implicit */unsigned int) (~(-1625665518)));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        arr_24 [i_4] [i_7] [i_6] [i_4] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_6 [i_7])) + (((/* implicit */int) arr_6 [i_7])))));
                        arr_25 [i_5] [i_5] [i_7] [i_5] = ((((((/* implicit */int) arr_18 [i_4] [i_4] [i_4])) & (((/* implicit */int) arr_18 [i_4] [i_4] [i_4])))) >> (((((/* implicit */_Bool) (unsigned char)15)) ? (((((/* implicit */int) (short)30395)) >> (((var_5) - (2147786937658845046LL))))) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_4])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) (~(2305843009213693951LL)));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    arr_37 [20] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-47)) - (1030311882)));
                    arr_38 [i_8] = ((/* implicit */_Bool) ((long long int) max((arr_4 [i_8] [i_8] [i_8] [(unsigned short)12]), (arr_4 [i_10] [i_8] [i_8] [i_10]))));
                    arr_39 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-32747)), (min((((/* implicit */unsigned short) arr_8 [i_8] [i_8] [i_8] [i_8] [i_8])), (var_3)))))) < (((/* implicit */int) var_7))));
                    arr_40 [(short)4] &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_31 [i_9] [4])) || (((/* implicit */_Bool) var_9)))));
                    arr_41 [i_8] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_36 [i_8] [i_9] [i_9] [i_9]))));
                }
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_13 += ((/* implicit */int) arr_43 [i_8] [i_9] [16LL]);
                    arr_45 [i_8] [i_8] [i_11] [i_9] = ((/* implicit */unsigned int) ((unsigned short) ((short) (+(arr_1 [i_8])))));
                    arr_46 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)0)))) - (((((/* implicit */_Bool) arr_4 [i_8] [i_9] [i_8] [i_11])) ? (arr_3 [i_8] [i_8] [i_8]) : (arr_3 [i_8] [i_9] [i_11])))));
                    arr_47 [i_8] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1625665531)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_8] [i_9])) ? (arr_29 [i_8] [i_11]) : (arr_29 [i_8] [i_11])))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_6)))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_50 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)43040))))))) ? (((((/* implicit */_Bool) arr_34 [i_8] [i_8])) ? (arr_3 [i_8] [i_8] [i_8]) : (((((/* implicit */_Bool) 6357519893712433841LL)) ? (arr_3 [i_8] [i_9] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8]))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)32747)))));
                    var_14 = (~(((/* implicit */int) arr_31 [i_9] [(unsigned short)20])));
                }
                arr_51 [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) arr_5 [i_8]);
                var_15 = ((/* implicit */short) min((min((((/* implicit */int) (short)14997)), ((-2147483647 - 1)))), ((~(arr_5 [i_9])))));
            }
        } 
    } 
}
