/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136048
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
    var_16 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)18795)))) + (var_7)));
    var_17 = ((/* implicit */unsigned long long int) (~(var_0)));
    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)59241))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [12ULL] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (arr_0 [0]) : (((/* implicit */unsigned long long int) arr_1 [12LL])))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1)) & (arr_1 [(_Bool)1])))))) ^ (((/* implicit */unsigned long long int) ((long long int) arr_0 [(short)10])))));
        var_19 = ((/* implicit */unsigned int) var_10);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 4; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_0] [i_1] [6U] [i_2])), ((signed char)91)))) : (((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [i_0] [i_2] [i_3])))))) + ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -748224969)) : (arr_3 [i_0] [i_1] [i_0])))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_3)) << (((((/* implicit */int) (short)-18795)) + (18807))))) == ((-(((/* implicit */int) (unsigned char)103)))))))) & (((((var_10) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0 - 1] [i_3 - 2]))))) ? (min((((/* implicit */unsigned long long int) 29300469)), (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */int) ((unsigned char) min((var_11), ((+(var_7))))));
                        arr_11 [i_3] [i_0] [i_2] [i_3] [1LL] [i_3] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((min((arr_1 [i_0]), (arr_1 [i_0]))) << (((((long long int) (+(((/* implicit */int) (short)18795))))) - (18795LL)))))) : (((/* implicit */_Bool) ((((min((arr_1 [i_0]), (arr_1 [i_0]))) + (9223372036854775807LL))) << (((((long long int) (+(((/* implicit */int) (short)18795))))) - (18795LL))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) & (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) : ((~(arr_1 [i_0])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(7168753459865150863LL)))) ? (((int) arr_13 [i_6 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (arr_18 [i_4] [i_5])))))))));
                    arr_21 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217727)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [(_Bool)1] [i_4]))) : (262143LL)))), (((var_4) ? (arr_17 [i_4]) : (((/* implicit */unsigned long long int) -2363587189402281176LL))))))) ? (((((/* implicit */_Bool) arr_5 [i_6] [i_6 + 1] [i_6 - 2])) ? (arr_5 [i_6] [i_6 - 1] [i_6 - 2]) : (arr_5 [i_6] [i_6 - 2] [i_6 - 1]))) : (((((/* implicit */_Bool) ((arr_7 [i_4] [i_5] [i_5] [i_5]) ? (arr_15 [(unsigned char)15]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [0LL] [i_5] [i_6 + 1] [i_6])))))) ? (((unsigned long long int) arr_1 [i_6])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (-581283534) : (((/* implicit */int) (short)9872))))) ? (((/* implicit */long long int) min((1991972934U), (((/* implicit */unsigned int) -1326711944))))) : (min((2095145597700168805LL), (7168753459865150863LL)))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) (_Bool)1))))) + (arr_5 [i_6] [i_4] [i_6 + 1])))));
                    arr_22 [i_6] [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) && (((((/* implicit */_Bool) arr_0 [i_6])) && (((/* implicit */_Bool) ((signed char) var_7)))))));
                }
            } 
        } 
        var_25 = min((var_5), (((((/* implicit */_Bool) -1326711920)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)86)))));
    }
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((unsigned int) var_14)))));
}
