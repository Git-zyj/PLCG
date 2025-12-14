/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106337
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
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])), ((~(2121578282012603726ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [9ULL] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 3]);
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [7ULL] [i_0] [13]);
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned char) (signed char)-1)), (arr_1 [i_0 - 1]))));
        arr_14 [i_0] = ((/* implicit */int) ((unsigned int) min((min((16181886574881899170ULL), (((/* implicit */unsigned long long int) arr_8 [i_0])))), ((-(var_15))))));
        arr_15 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])), ((~(arr_2 [i_0 - 3])))));
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 3; i_5 < 23; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 23; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_29 [i_6] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_12))))) : (((long long int) var_7)))), (((/* implicit */long long int) arr_17 [i_7]))));
                        arr_30 [i_4] [i_4] [i_4] = ((min((((unsigned long long int) var_9)), (var_14))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))));
                    }
                } 
            } 
            arr_31 [i_4] [i_5 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) ((18446744073709551595ULL) >= (arr_19 [i_5 - 1] [i_5 - 1]))))));
        }
        /* LoopSeq 2 */
        for (int i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 3; i_9 < 22; i_9 += 4) 
            {
                arr_39 [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_8 + 4] [i_8 + 2] [i_8 + 4] [i_8] [i_8] [i_9 - 1])) != (((/* implicit */int) ((signed char) arr_16 [i_8 + 4] [i_8])))));
                arr_40 [i_4] [i_4] = min(((-((~(16181886574881899170ULL))))), (((/* implicit */unsigned long long int) arr_16 [i_4] [i_9 + 1])));
            }
            arr_41 [i_8] = ((/* implicit */signed char) arr_25 [i_4] [i_8] [i_8 + 1] [i_8]);
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 1) 
            {
                for (short i_11 = 2; i_11 < 21; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            arr_48 [i_4] [i_10] [(_Bool)1] [i_10] [i_12] = ((/* implicit */int) var_6);
                            arr_49 [i_10] [i_10] [i_10] [i_8] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) min((var_3), (((/* implicit */short) arr_37 [i_8])))))));
                        }
                    } 
                } 
            } 
            arr_50 [i_8] = (-(((/* implicit */int) (((+(((/* implicit */int) var_3)))) > (((/* implicit */int) min((arr_20 [i_8]), (((/* implicit */short) arr_35 [i_4])))))))));
        }
        for (int i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            arr_55 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~((+(((6265844517776230171ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_4] [i_13] [i_13] [i_13])))))))));
            arr_56 [i_4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 7557815384548307618LL)) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) arr_20 [i_4]))))));
            arr_57 [i_13] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) var_9)), (arr_36 [i_4] [i_13] [i_13])))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                {
                    arr_63 [i_15] [i_15] = ((/* implicit */unsigned short) ((min((arr_52 [i_4] [i_14] [i_15]), ((~(((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4] [i_14 - 1] [(unsigned char)5])))))) / ((-(arr_43 [i_15])))));
                    /* LoopSeq 1 */
                    for (int i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        arr_68 [i_4] [i_14 - 1] [i_15] [i_15] [21LL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_9)))) + (2121578282012603751ULL)));
                        arr_69 [i_15] [(unsigned char)23] [i_16 - 1] = ((/* implicit */unsigned char) arr_16 [i_15] [8ULL]);
                    }
                    arr_70 [i_15] [i_14] [i_15] = ((short) 16181886574881899161ULL);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 4; i_17 < 21; i_17 += 3) 
        {
            for (long long int i_18 = 3; i_18 < 23; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_78 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_47 [i_4] [i_4] [i_18] [i_18] [i_17 - 1] [i_19] [i_18 + 1]);
                        arr_79 [i_19] [i_18] [i_17 + 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_77 [i_4] [i_17] [i_18] [i_18 - 3] [i_17 + 3]))) ? ((~(3145710175369076974ULL))) : ((~(16325165791696947897ULL)))));
                    }
                } 
            } 
        } 
    }
    var_17 = var_16;
    var_18 = var_7;
}
