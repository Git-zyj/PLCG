/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113571
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)13292)) : (1425800920)));
    var_21 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (3695638757342018602LL))) : (((/* implicit */long long int) ((unsigned int) -1425800903)))));
                var_23 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3695638757342018620LL)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (-826656330)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))) : (arr_1 [i_0]))) : (((/* implicit */int) var_19)));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1872286015)) ? ((-(var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)0))))))) - (((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */_Bool) var_17);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) /* same iter space */
        {
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1])) * (((((/* implicit */_Bool) arr_5 [i_3] [(_Bool)1])) ? (((/* implicit */int) var_6)) : (1425800923)))));
            var_25 = ((/* implicit */int) (-(0ULL)));
            arr_11 [i_2] [i_3] [i_3] = ((/* implicit */int) var_0);
        }
        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) arr_5 [(unsigned short)5] [(unsigned short)5])), (826656332)))));
            arr_15 [i_4] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((17534370158835162299ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_4 - 1])))))))) * (arr_8 [i_4 - 2])));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_27 += ((/* implicit */unsigned char) (+(((arr_9 [i_5] [i_6]) ? (((/* implicit */int) arr_9 [i_2] [i_7])) : (((/* implicit */int) arr_9 [i_7] [i_6]))))));
                        var_28 = ((((/* implicit */_Bool) arr_19 [i_7] [i_2] [i_2])) ? (((arr_9 [i_2] [i_2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_5] [i_7])))) : (((/* implicit */int) arr_9 [i_5] [i_5])));
                        var_29 = arr_19 [(short)11] [(short)11] [i_6];
                        arr_22 [i_5] = ((/* implicit */unsigned short) (-2147483647 - 1));
                        arr_23 [i_5] [i_2] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_9 [i_2] [i_7]);
                    }
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) arr_8 [i_6]))))));
                    var_31 ^= ((/* implicit */long long int) (short)-1394);
                    var_32 = ((/* implicit */_Bool) (((~(-476202620153317900LL))) ^ (((((((/* implicit */_Bool) -808308441)) ? (((/* implicit */long long int) var_5)) : (var_15))) % (((/* implicit */long long int) ((/* implicit */int) (short)-12546)))))));
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 3; i_9 < 14; i_9 += 3) 
        {
            var_33 = ((/* implicit */_Bool) arr_24 [i_9 - 2] [i_8]);
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 1; i_12 < 14; i_12 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */int) 3695638757342018627LL);
                            arr_36 [i_11] [i_11] [i_11] [i_8] = ((/* implicit */int) var_19);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) 2097152)) ? (((/* implicit */long long int) -1697067949)) : (7082827157091954979LL)));
            arr_40 [i_8] &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_8])) ? (((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) arr_13 [i_8] [i_8] [i_8])))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_10))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_8])) ^ (((/* implicit */int) arr_2 [i_8] [i_8]))))) ? (arr_26 [i_8] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_8])))))));
            arr_41 [i_8] [16U] = ((/* implicit */short) -1697067958);
        }
        arr_42 [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_17)) - (3770225149U)))) ? ((-(4082349606931038975LL))) : (((((/* implicit */_Bool) -4082349606931038975LL)) ? (((/* implicit */long long int) arr_39 [i_8] [i_8] [1LL])) : (var_13)))))), (var_16)));
        var_36 = ((/* implicit */short) var_14);
    }
}
