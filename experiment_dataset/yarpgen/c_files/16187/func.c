/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16187
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [20] = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
        arr_3 [(unsigned short)16] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [9U]))) <= (var_6))) ? (((((/* implicit */int) arr_1 [i_0])) ^ (var_12))) : ((-(((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((var_12) != (((/* implicit */int) var_4)))))) % (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_2))))), (var_3)));
            var_14 -= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1] [i_2])) / (((/* implicit */int) max((var_5), (arr_0 [i_1] [i_2]))))));
            var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)30032)) >= (((/* implicit */int) arr_9 [i_1] [15U] [i_1])))))) : (max((var_11), (((/* implicit */unsigned int) arr_6 [i_1] [i_1])))))), (((/* implicit */unsigned int) arr_6 [(signed char)17] [i_1]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_13 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_11))))));
            arr_14 [i_3] [i_3] |= ((/* implicit */unsigned short) arr_6 [i_1] [i_3]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_22 [i_1] [i_3] = ((/* implicit */unsigned long long int) (-(var_8)));
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35481)) ? (2147483647) : (((/* implicit */int) (signed char)125))))) ? ((~(((/* implicit */int) (unsigned char)140)))) : (((/* implicit */int) var_2)));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_6 [i_4] [i_1])) | (-2LL)));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (var_7)))) >> (((((/* implicit */int) arr_17 [i_5] [0] [i_5] [i_5])) - (29010))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_28 [i_1] [i_6] [i_3] [i_1] = ((((/* implicit */_Bool) (~(-4LL)))) ? (((/* implicit */int) ((arr_23 [i_7] [i_1] [i_1] [i_1]) >= (((/* implicit */long long int) var_0))))) : (((/* implicit */int) var_2)));
                        var_19 = ((/* implicit */unsigned int) arr_15 [(unsigned char)15] [i_7]);
                        arr_29 [i_1] [i_1] [i_6] [i_6] = var_12;
                    }
                } 
            } 
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) + (((int) arr_21 [11U]))));
        }
        var_21 *= ((/* implicit */signed char) 5);
        arr_30 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((268435456) ^ ((-(((/* implicit */int) (signed char)-125))))))) * (((var_11) + (((/* implicit */unsigned int) ((var_7) - (arr_6 [i_1] [i_1]))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) var_5)))));
    var_23 *= ((/* implicit */unsigned long long int) ((int) (signed char)121));
}
