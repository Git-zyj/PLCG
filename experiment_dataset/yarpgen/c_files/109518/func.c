/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109518
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
    var_14 ^= ((/* implicit */unsigned int) var_2);
    var_15 += ((/* implicit */signed char) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_12))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_16 |= ((max((arr_7 [i_2] [4LL] [i_2 - 2]), (arr_7 [8U] [(signed char)6] [i_2 - 2]))) ^ (max((((((/* implicit */_Bool) 8995766786530700513LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)6] [i_1] [(short)6] [i_1]))))), (((((/* implicit */_Bool) var_1)) ? (1545780681U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) - (((max((arr_11 [i_1] [i_2 - 1] [(short)8]), (var_8))) - ((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))))))));
                            var_18 += ((/* implicit */unsigned int) max((arr_11 [i_1] [(short)8] [i_1]), (((((/* implicit */_Bool) arr_0 [0U] [i_3])) ? (((/* implicit */int) arr_4 [(unsigned char)6] [3ULL] [i_0])) : (((/* implicit */int) (short)19262))))));
                            var_19 |= ((/* implicit */unsigned long long int) (~(((long long int) ((((/* implicit */unsigned int) var_4)) / (4294967292U))))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((arr_1 [9U] [i_3]), (((/* implicit */unsigned long long int) -6319262373714207841LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : ((+(((/* implicit */int) arr_6 [1U] [(short)5] [i_1])))))), (((/* implicit */int) ((arr_0 [i_2 - 1] [i_2 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)2] [i_1] [5U]))))))));
                        }
                    } 
                } 
                var_20 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [4ULL] [i_1] [4ULL])) > (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)2]))))) << (((max((max((17U), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_9))))))) - (4294967215U)))));
                var_21 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_9 [i_1] [i_0] [i_0] [i_0])), (arr_11 [4ULL] [4ULL] [i_1]))) + ((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_22 = ((/* implicit */signed char) (+((~(4294967269U)))));
                    arr_15 [(signed char)6] [(unsigned char)3] [i_4] [6LL] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1]))))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    arr_20 [6LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_11 [0] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_7] [(unsigned char)9] [i_0])) : (((/* implicit */int) var_12))))))));
                                var_24 += ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                    arr_25 [(unsigned char)5] [0U] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_5])) ? (var_1) : (4294967292U))));
                }
                for (unsigned short i_8 = 4; i_8 < 9; i_8 += 2) 
                {
                    arr_30 [i_1] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_28 [(short)4] [i_1] [4LL]))));
                    var_25 |= ((/* implicit */unsigned long long int) arr_9 [i_0] [(short)3] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (long long int i_10 = 3; i_10 < 9; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) min((3315889560173585743LL), (arr_21 [7] [i_0] [i_1] [i_0]))))) || (((/* implicit */_Bool) ((max((var_1), (((/* implicit */unsigned int) var_2)))) ^ (((/* implicit */unsigned int) arr_11 [i_9] [i_9] [i_8]))))))))));
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((var_4) < (((/* implicit */int) arr_27 [i_9] [(_Bool)1] [(unsigned char)0] [1])))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_5)))))))));
                    var_29 = ((/* implicit */long long int) max((var_29), (min((((/* implicit */long long int) (~(var_6)))), (max((((long long int) 17U)), (((/* implicit */long long int) (+(4294967279U))))))))));
                }
            }
        } 
    } 
}
