/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177378
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
    var_13 = ((/* implicit */signed char) ((int) ((((var_0) + (((/* implicit */unsigned int) var_3)))) + (var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((int) arr_2 [i_0]))) : (min((8921077175024938800ULL), (arr_0 [i_0]))))) >> (((arr_2 [i_0]) >> (((arr_2 [i_0]) - (809055208U)))))));
                arr_5 [i_0] = ((/* implicit */long long int) ((short) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) > (8921077175024938813ULL))))))));
                arr_6 [i_0] [i_0] [(signed char)4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (+(var_2)))) ? (min((9525666898684612816ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2])))))) ^ (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_8 [i_3] [i_1] [i_0])))))));
                            var_15 = ((/* implicit */long long int) ((short) ((unsigned long long int) max((arr_9 [i_3] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_8))))));
                            var_16 = ((/* implicit */unsigned short) ((long long int) (~(((((arr_1 [i_0]) + (2147483647))) << (((((/* implicit */int) var_4)) - (125))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), (var_12))))) <= (((long long int) ((unsigned char) 8921077175024938813ULL)))));
    /* LoopSeq 3 */
    for (int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)3))))) || (((/* implicit */_Bool) max((9525666898684612830ULL), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) var_8))))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_23 [i_8] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */unsigned char) (((((~(((((/* implicit */int) var_1)) << (((1869571009) - (1869570986))))))) + (2147483647))) << (((min((((/* implicit */int) arr_15 [i_5] [i_4])), (min((arr_1 [i_4]), (arr_1 [i_4]))))) + (2044624790)))));
                                arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_4] [i_5] [i_5] [i_7]), (arr_7 [i_4] [i_4] [i_6] [i_7])))) ? (((long long int) arr_7 [i_8] [i_7] [i_5] [i_4])) : (((arr_7 [i_8] [i_7] [i_6] [i_4]) - (arr_7 [i_8 + 1] [i_7] [15ULL] [i_5])))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_4]))))) ? (((arr_17 [i_4] [i_4] [i_4] [i_4]) << (((max((arr_11 [i_4] [i_4]), (((/* implicit */long long int) arr_1 [i_4])))) + (2044624837LL))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_4] [i_5] [i_4] [i_8])))));
                                arr_25 [i_8] [i_7] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                                arr_26 [i_4] [12] [i_4] [i_4] [(signed char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 1869571009))) % ((-(arr_16 [i_8 - 2] [i_8 - 1])))));
                            }
                        } 
                    } 
                    arr_27 [i_4] [i_5] [(short)5] = ((/* implicit */_Bool) ((short) max((-3010126335107261205LL), (((/* implicit */long long int) (signed char)(-127 - 1))))));
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                arr_32 [i_10] = ((/* implicit */signed char) max((arr_22 [i_4] [i_4] [i_10]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) arr_20 [i_9 - 1] [i_9 + 2])) : (((((/* implicit */_Bool) 4503324749463552LL)) ? (((/* implicit */int) arr_3 [i_6])) : (((/* implicit */int) arr_30 [i_5])))))))));
                                arr_33 [i_6] [i_9] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((long long int) arr_3 [i_5]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (arr_9 [i_4] [i_4] [i_4])))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_10])))))) ^ (((unsigned long long int) (~(((/* implicit */int) (short)8191)))))));
                                arr_34 [i_6] [i_6] [(signed char)10] = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) 18446744073709551615ULL)));
                            }
                        } 
                    } 
                    arr_35 [(unsigned char)2] [i_6] = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned long long int) arr_1 [1])) : (arr_9 [i_4] [i_4] [6LL]))), (((/* implicit */unsigned long long int) ((9525666898684612815ULL) == (((/* implicit */unsigned long long int) var_9))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) / (min((((/* implicit */unsigned long long int) arr_22 [i_6] [i_5] [(short)7])), (var_2)))))));
                }
            } 
        } 
        arr_36 [i_4] [(short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_4]) / (((/* implicit */int) ((unsigned char) 733121345)))))) && (((/* implicit */_Bool) var_1))));
        arr_37 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (short)14405)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))) ^ (var_2))) : (((/* implicit */unsigned long long int) ((int) arr_29 [i_4] [i_4])))))));
    }
    for (int i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
    {
        arr_40 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_11] [4ULL] [i_11])) ^ (((/* implicit */int) arr_14 [i_11] [i_11] [i_11]))))) ? (((/* implicit */int) arr_14 [i_11] [i_11] [i_11])) : ((~(((/* implicit */int) var_6))))));
        arr_41 [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_39 [i_11] [i_11])))) <= (max((((/* implicit */unsigned long long int) -1346528314263585063LL)), (1263768094067660679ULL)))));
        arr_42 [i_11] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(short)2])))))) - (min((arr_0 [i_11]), (((/* implicit */unsigned long long int) var_6))))))));
    }
    for (int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) arr_43 [i_12])) || (((/* implicit */_Bool) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_2) >> (((arr_22 [i_12] [i_12] [i_12]) - (1567562651U))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_45 [i_12]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))))) : (((((/* implicit */_Bool) min((arr_17 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned long long int) arr_7 [i_12] [i_12] [i_12] [i_12]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)485)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))) : (min((arr_0 [i_12]), (((/* implicit */unsigned long long int) arr_13 [i_12]))))))));
        arr_47 [i_12] = ((/* implicit */short) ((2200231383U) >= (((/* implicit */unsigned int) -1324380474))));
        var_22 += ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)172))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((arr_11 [i_12] [i_12]), (((/* implicit */long long int) arr_12 [(unsigned char)6])))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12])))))) ? (((long long int) arr_3 [i_12])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))));
    }
}
