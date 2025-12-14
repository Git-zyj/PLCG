/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146129
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
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0] [16U]))));
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_5))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_12 = ((/* implicit */int) arr_3 [i_1] [i_1]);
        arr_6 [(unsigned short)2] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1] [7U]);
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_13 = ((/* implicit */signed char) var_7);
            arr_9 [i_1] [i_1] [i_1] &= ((/* implicit */int) arr_4 [i_1] [i_1]);
        }
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 3; i_4 < 8; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        {
                            arr_22 [i_1] [(signed char)9] [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) arr_12 [i_1] [i_4 - 1] [i_5]))));
                            arr_23 [i_1] [i_3] [i_4 + 1] [i_5] [i_6] = (((!(((/* implicit */_Bool) arr_17 [(_Bool)1] [i_5] [i_4] [4U] [i_1])))) ? (var_4) : (((/* implicit */unsigned int) arr_13 [i_3 - 1] [i_4 - 1] [i_6 - 2])));
                            var_14 &= ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_4] [8] [i_5] [i_6 - 1])) ? (arr_0 [i_4 + 2]) : (arr_13 [i_1] [i_1] [i_1]));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_30 [i_7] [i_8] = var_3;
                            var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3209488719530385961LL)) ? (-1394416211) : (((/* implicit */int) (unsigned char)100))))), (var_4)));
                            arr_31 [i_1] [i_3] [6] [i_7] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1394416211)) ? (-1394416211) : (max((1394416203), (((/* implicit */int) (unsigned char)159))))))) ? (arr_10 [i_1] [i_8]) : (((((/* implicit */_Bool) (unsigned char)7)) ? (4032187506U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)6] [(signed char)6] [(signed char)6])))))));
                        }
                    } 
                } 
            } 
        }
        var_16 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) 2524550349U)) ? (((/* implicit */unsigned long long int) 1)) : (3961913538128491075ULL))))));
        var_18 -= ((/* implicit */unsigned char) var_4);
    }
    var_19 = ((/* implicit */long long int) var_7);
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (16777215)))), ((((_Bool)0) ? (2524550353U) : (1770416946U)))));
    var_21 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 1074365161371884518ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152))) : (2524550349U)))) : (2900891695712273068ULL))) : (var_5));
}
