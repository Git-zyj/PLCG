/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114426
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
    var_20 = ((/* implicit */signed char) min(((short)-8179), ((short)5749)));
    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) <= (((((/* implicit */_Bool) 2147483136U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_9)), ((short)-4)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ^ (var_6)))) && (((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)2]))));
        var_22 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(3675212187599680323LL)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 451358023370428497LL)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) -1)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_1 [i_1] [i_0])));
                var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) << (((var_13) - (2568413157U)))));
                arr_10 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_0])) << (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])))))));
            }
        }
        for (short i_3 = 3; i_3 < 24; i_3 += 4) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_3 - 3] [i_3 + 1] [i_3 - 2]))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        arr_18 [i_5] [(_Bool)1] [i_4] [i_0] [i_5] [i_4] = ((/* implicit */unsigned short) arr_0 [i_3] [i_0]);
                        arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(unsigned char)17] [i_3] [i_0] [i_3 - 3])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) arr_6 [i_0] [i_3] [i_0] [i_3 + 1]))));
                        arr_20 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-451358023370428496LL)));
                    }
                } 
            } 
            var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [8U])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-26618))))) ? (((/* implicit */int) (short)-26639)) : ((+(((/* implicit */int) (short)27992))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 23; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_28 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) 14922198818969339935ULL));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3] [i_3 + 1] [i_0])) <= (((/* implicit */int) (short)4))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) var_12);
        arr_32 [i_8] = ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_17 [i_8] [(_Bool)1] [i_8 - 1] [i_8 - 1]), (arr_17 [i_8] [(signed char)2] [i_8 - 1] [i_8 - 1])))), (((min((arr_27 [(short)16] [i_8]), (arr_29 [13]))) ? (max((var_4), (((/* implicit */int) arr_27 [i_8] [(short)5])))) : ((~(((/* implicit */int) (unsigned short)65535))))))));
        arr_33 [i_8] [i_8] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-26618))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-22853), (((/* implicit */short) var_17)))))) : (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [12LL] [i_8]))) : (var_0))))), (((/* implicit */unsigned long long int) ((long long int) ((short) (_Bool)1)))));
    }
    for (signed char i_9 = 4; i_9 < 21; i_9 += 2) 
    {
        arr_36 [i_9] = ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_35 [i_9 - 4]) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_9] [i_9] [i_9 - 2] [(_Bool)1])))))))), (var_10)));
        var_32 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((2171451602U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95)))))) ? (((/* implicit */unsigned long long int) ((var_14) & (((/* implicit */unsigned int) 523317674))))) : (min((((/* implicit */unsigned long long int) var_13)), (arr_1 [i_9] [7ULL]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_9])) && (((/* implicit */_Bool) var_1))))))));
    }
    for (short i_10 = 2; i_10 < 19; i_10 += 4) 
    {
        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_35 [i_10]) : (((/* implicit */int) arr_11 [i_10 + 1] [9U])))) << (((((((/* implicit */int) arr_38 [12] [i_10 - 1])) + (94))) - (27)))))) < (max((((/* implicit */long long int) arr_22 [i_10 + 1] [i_10 - 2] [i_10])), (((((/* implicit */_Bool) (short)29052)) ? (((/* implicit */long long int) var_11)) : (-4401544944864164999LL)))))));
        arr_41 [i_10 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_40 [i_10 + 1] [i_10 + 1]), (arr_40 [i_10 - 1] [i_10 + 2]))))));
        arr_42 [i_10] [i_10 + 1] = ((/* implicit */int) var_13);
    }
}
