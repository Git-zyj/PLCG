/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18657
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_0] = max((((/* implicit */unsigned long long int) arr_12 [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_4])), (var_3));
                                var_15 = ((/* implicit */_Bool) ((unsigned long long int) var_4));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) (short)25726);
                            arr_20 [i_5] [i_6] [i_1] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)64848);
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_1] [(signed char)22] [i_6])) : (((((/* implicit */_Bool) (unsigned short)64827)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_6 [i_0 + 2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) var_5)) : (var_13)))))))) : ((~(var_13))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) % (arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_0] [i_7] [i_1] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_0] [7ULL]))))) : (3075784107013748314ULL))));
                            arr_27 [i_1] = ((_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7]))) - (arr_10 [i_1] [i_7] [i_8])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 3; i_11 < 6; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) max((arr_30 [i_11 - 1]), (arr_30 [i_11 - 3])))) & (min((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_9] [i_10] [i_11 + 2] [i_12])) < (((/* implicit */int) var_2))))), ((+(arr_34 [i_12] [i_10] [i_10] [i_9])))))));
                            var_19 = max((max((arr_24 [i_11 - 1] [i_11] [i_11 + 3] [i_11 + 2] [i_12] [0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_11 - 3] [i_11 + 3] [i_11 - 3] [i_12])) - (((/* implicit */int) arr_33 [i_11 + 3] [i_11 + 2] [i_11 + 1] [i_12]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 2; i_13 < 7; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_20 += max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (((arr_23 [i_9] [i_10] [i_13] [i_14]) | (arr_23 [i_9] [i_10] [i_13] [(signed char)10]))));
                            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((short) var_5)), (((/* implicit */short) ((unsigned char) arr_24 [i_9] [i_9] [i_10] [2LL] [i_13] [i_14])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64865))))) / (max((arr_13 [i_9] [i_9] [i_10] [i_10] [(signed char)21] [i_13] [i_14]), (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_14])))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((short) (((!(arr_40 [i_9] [i_10] [i_14] [i_9]))) ? (((/* implicit */int) (unsigned short)683)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64857))) <= (-2305843009213693952LL))))))))));
                            arr_43 [i_14] [i_10] [i_14] = ((/* implicit */long long int) (~(arr_13 [i_9] [i_10] [i_13 + 2] [i_14] [1LL] [i_9] [i_14])));
                        }
                    } 
                } 
            }
        } 
    } 
}
