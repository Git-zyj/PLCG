/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16436
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_17), (1217798915U)))))) : (var_17)));
    var_19 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) 1217798900U)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_17)) : (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [1LL] [1LL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) & ((+(11003217157409733364ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : (max((var_7), (((((/* implicit */_Bool) 1217798906U)) ? (3077168389U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3678)))))))));
                        var_20 *= ((/* implicit */unsigned short) var_16);
                        var_21 *= ((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_0]);
                    }
                } 
            } 
        } 
        arr_13 [(unsigned char)7] |= ((/* implicit */short) ((arr_7 [i_0]) / (max((((/* implicit */unsigned long long int) 1217798906U)), (arr_9 [i_0] [i_0] [i_0])))));
        var_22 = ((/* implicit */signed char) var_9);
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    arr_24 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [(_Bool)1])) ? (arr_22 [i_6] [i_5] [i_4]) : (arr_22 [i_4] [(_Bool)1] [i_4])))) ? (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))));
                    arr_25 [i_6] = ((/* implicit */unsigned short) max((max((var_9), (((/* implicit */unsigned long long int) arr_17 [i_6] [i_5])))), (((/* implicit */unsigned long long int) min((arr_14 [(signed char)17] [i_4]), (arr_14 [i_5] [i_6]))))));
                }
            } 
        } 
        var_23 -= ((/* implicit */short) var_3);
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5573909229258607307ULL)) ? (12785236774526553821ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10503)))));
        var_25 = ((/* implicit */unsigned char) arr_14 [i_4] [i_4]);
        arr_26 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) arr_19 [i_4] [14ULL] [14ULL])))) : (((((/* implicit */_Bool) var_15)) ? (arr_21 [i_4] [i_4] [i_4]) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))))));
    }
    var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)146)), (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) (signed char)-122)), (3077168389U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))))))));
}
