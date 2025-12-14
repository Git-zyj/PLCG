/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187968
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_11 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_3 - 2]))) | (var_5)));
                        var_12 = ((/* implicit */unsigned long long int) ((long long int) var_8));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 + 2] [i_2])) <= (((/* implicit */int) arr_5 [i_0] [i_0]))));
                        arr_14 [i_0] [i_1] [i_1] [i_0] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_3] [i_3 - 1]))) < (var_0)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_13 = ((/* implicit */int) ((var_3) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4])) != (((/* implicit */int) var_2)))))));
                arr_18 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1 - 2] [i_4]);
                arr_19 [i_0] = ((/* implicit */unsigned int) (+(-8886541253991745630LL)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) var_6);
                            var_15 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) arr_17 [i_4] [i_4]))) | (arr_9 [9] [i_1] [(_Bool)1])));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_16 = ((/* implicit */short) arr_7 [6U] [i_0] [i_7]);
            arr_27 [i_7] [i_7] = ((/* implicit */short) (unsigned char)212);
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_35 [i_10] [i_7] [i_8] [i_7] [i_0] = ((/* implicit */unsigned short) arr_31 [i_7] [i_7] [i_8 + 1] [i_9] [i_10 - 1] [i_10]);
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_22 [i_0] [i_7] [7U] [9U]))));
                            var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-112)) : (arr_16 [i_10] [i_7] [i_7])))));
                            var_19 = ((/* implicit */_Bool) ((short) ((arr_2 [i_0] [i_0] [(short)8]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_7] [i_9] [i_0] [i_9] [i_7]))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_3))));
                        }
                    } 
                } 
            } 
        }
        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 2; i_14 < 10; i_14 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) ((arr_20 [(unsigned short)0] [i_14 - 1]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))));
                            var_23 = (~(((/* implicit */int) ((unsigned short) var_10))));
                            arr_46 [i_0] [i_0] [i_0] [(unsigned short)9] [(short)1] [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_44 [i_0] [i_11] [i_0] [i_0]))));
                            arr_47 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2078813672)) ? (((/* implicit */unsigned long long int) -8886541253991745630LL)) : (11ULL))) << (((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) var_1)))) - (18308031224314212504ULL)))));
                            arr_48 [i_14] [(short)7] [(short)7] [(short)7] = ((/* implicit */unsigned int) (~(arr_41 [4ULL] [i_14 + 1] [i_14 - 1] [i_14 - 2])));
                        }
                        arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-1))));
                        arr_50 [i_0] [i_11] [i_11] [i_12] = ((/* implicit */long long int) arr_7 [(unsigned char)6] [i_11] [i_11]);
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 9223372036854775806LL)), (18446744073709551615ULL)));
}
