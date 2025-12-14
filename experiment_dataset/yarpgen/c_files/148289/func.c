/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148289
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
    var_11 = (!(((/* implicit */_Bool) var_3)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1] [i_0]))) ? (var_5) : (((/* implicit */long long int) ((unsigned int) var_9)))));
            var_13 = arr_1 [i_0 - 1];
            var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
            arr_7 [i_0] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_5 [i_0 + 1])) ^ (((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
            arr_8 [(unsigned short)16] = ((/* implicit */short) (-(arr_3 [i_0 - 2] [i_0 + 1])));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) != (((/* implicit */int) var_10))));
            arr_12 [i_2] = ((/* implicit */_Bool) ((arr_5 [i_0 + 1]) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [2] [i_0 - 1]))) % (arr_5 [i_0])))));
            arr_13 [i_2] = ((/* implicit */signed char) arr_3 [i_0 - 3] [i_0 - 1]);
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_19 [i_0 - 3] [i_0 + 1] [i_0])) + (49)))));
                            arr_25 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_5 - 1] [i_0 - 3] [i_4] [i_5 - 1] [i_6]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    for (unsigned short i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_6 [i_3] [10ULL] [i_8]))));
                            arr_36 [i_0] [(signed char)18] [(unsigned short)12] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(0)))) % ((+(var_9)))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_29 [i_3] [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0]))))));
            var_19 = ((/* implicit */signed char) (unsigned short)8);
        }
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 1; i_12 < 9; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_10] [i_12 - 1] [15LL]))));
                        arr_47 [0LL] = (-(((/* implicit */int) ((signed char) arr_22 [i_10] [i_10] [i_10] [(_Bool)1] [(_Bool)1] [i_10]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_14 = 3; i_14 < 10; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_15] [i_14 - 3] [17ULL]))) : (((arr_5 [i_10]) << (((/* implicit */int) var_8))))));
                        var_22 = ((/* implicit */_Bool) arr_26 [14LL] [i_11] [6LL]);
                        var_23 = ((/* implicit */int) ((signed char) arr_9 [(signed char)18] [i_14 - 3] [i_14 + 1]));
                        arr_54 [i_10] [i_10] [i_10] [(short)4] [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_45 [i_14] [i_11])) ? (0) : (((/* implicit */int) arr_10 [i_14])))) < (((/* implicit */int) arr_20 [i_10] [i_11] [i_14 - 3] [i_14 + 1] [i_14 - 2]))));
                    }
                } 
            } 
            arr_55 [i_11] = ((/* implicit */unsigned short) (+((-(0)))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((_Bool) arr_33 [i_16] [i_16] [i_16] [i_16] [i_10] [i_10] [i_10])) ? (arr_31 [i_16]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_10] [i_16] [i_16] [i_10] [(unsigned short)7] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1U))))));
            var_25 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_34 [i_10] [i_10] [i_16] [i_16] [i_16])) : (var_2)))));
            var_26 = ((/* implicit */_Bool) var_5);
            var_27 = ((/* implicit */short) arr_32 [i_10] [i_10] [i_10] [i_10]);
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            arr_61 [i_10] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_57 [0U] [i_10])) < (var_2)))) ^ (((/* implicit */int) ((unsigned char) var_0)))));
            arr_62 [7ULL] [i_17] [5U] = ((/* implicit */long long int) ((((((var_2) + (2147483647))) << (((((/* implicit */int) arr_35 [i_10])) - (40))))) - (((/* implicit */int) ((signed char) var_2)))));
            var_28 = ((/* implicit */int) arr_19 [i_17] [i_10] [i_10]);
        }
        var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (arr_46 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) / (arr_4 [i_10])));
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 1) 
            {
                {
                    var_30 = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_32 [i_10] [(signed char)0] [i_18] [i_19])))));
                    var_31 = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-78)))) - (2)));
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) % (((/* implicit */int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
        var_33 = ((((/* implicit */int) (_Bool)1)) << (((arr_37 [i_10] [i_10]) - (1151757489))));
    }
    for (short i_20 = 0; i_20 < 20; i_20 += 1) 
    {
        arr_71 [i_20] = ((/* implicit */unsigned int) ((unsigned short) var_10));
        arr_72 [i_20] = ((/* implicit */_Bool) ((unsigned int) 4ULL));
    }
    var_34 = (~((+((-(var_2))))));
}
