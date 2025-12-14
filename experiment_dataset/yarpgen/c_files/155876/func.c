/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155876
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)0))))) % (arr_0 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(arr_4 [i_0])));
                        var_19 ^= ((/* implicit */unsigned short) arr_7 [i_2] [i_0] [i_2]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)117))))));
                        var_21 |= ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1]);
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((long long int) arr_14 [i_0]));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) ^ (5240611298844395015ULL)))) ? (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned short)46136)))) : (((/* implicit */int) (signed char)33))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 2; i_9 < 6; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_34 [i_10] [i_10] [i_9 - 2] [i_9 - 1] [i_9 - 1] [3LL])) / (var_15)));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_11] [i_9 - 2] = ((/* implicit */signed char) (_Bool)1);
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 9093728829183292958ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62345))) : (3487465086U)));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((504403158265495552ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_9] [i_10] [i_9] [i_11]))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_9] [i_6] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (var_3)))) : (arr_19 [i_12] [i_10])));
                            var_27 += ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-6))));
                            var_28 = ((/* implicit */int) (signed char)30);
                        }
                        var_29 = ((/* implicit */long long int) arr_25 [i_0] [i_0] [i_9 + 1] [i_6]);
                        arr_41 [i_0] [i_0] [i_9 + 4] [3U] = arr_0 [i_10] [i_0];
                    }
                } 
            } 
        }
    }
    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((17942340915444056064ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105)))))) ? (var_8) : (min((var_9), (((var_18) - (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
    var_31 = ((/* implicit */unsigned int) var_15);
}
