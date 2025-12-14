/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169703
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
    var_14 = ((/* implicit */short) var_7);
    var_15 = ((/* implicit */unsigned char) ((var_13) % (((/* implicit */unsigned long long int) ((unsigned int) var_6)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */short) var_11);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) min((((int) (short)32749)), (((((/* implicit */int) arr_5 [i_0] [13ULL])) % (((/* implicit */int) var_9)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_17 ^= ((/* implicit */short) ((((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) > (((((/* implicit */_Bool) arr_1 [i_2] [i_4])) ? (2147483647) : (((/* implicit */int) var_2))))));
                                var_18 ^= ((/* implicit */short) ((-5676370982946540387LL) ^ (((/* implicit */long long int) 1679688415U))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2] [i_2]))))), (max((((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (arr_11 [i_0]))), (((/* implicit */unsigned long long int) var_1)))))))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_2])))))), (((var_6) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1530751304)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_3] [i_2])))))) : (((((/* implicit */_Bool) var_11)) ? (10087694342629697328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18829))))))))))));
                            }
                            for (short i_6 = 1; i_6 < 21; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_8 [i_6 + 1] [20U] [20U]);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (arr_14 [i_2 + 1] [i_2 - 2])))) ? (max((((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_1])) ? (((/* implicit */int) arr_9 [(short)3] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)27)))), (((/* implicit */int) ((unsigned char) arr_8 [(unsigned short)10] [i_1] [i_1]))))) : (((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_1] [i_1] [(unsigned char)19] [i_0] [i_2] [(unsigned char)19])))));
                                arr_20 [i_0] [i_1] [7ULL] [7ULL] [16LL] = ((/* implicit */long long int) ((arr_19 [i_0]) / (((/* implicit */int) ((signed char) min((arr_18 [8] [i_1] [i_1] [i_1] [9ULL] [(unsigned short)7]), (var_11)))))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (var_4)));
                            }
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((max(((short)-28022), ((short)-19804))), (((/* implicit */short) arr_2 [i_2])))))));
                            var_25 = ((/* implicit */_Bool) var_0);
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                            {
                                var_26 ^= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_22 [i_2])) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) var_7)))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((signed char) ((var_6) ? (((/* implicit */int) (short)-18829)) : (((/* implicit */int) arr_18 [(short)2] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_15 [i_8] [i_8] [i_3] [i_0] [i_1] [(short)14] [i_0]), (arr_4 [i_2] [i_2 + 1] [i_2])))) < (((((/* implicit */int) ((arr_22 [i_0]) == (((/* implicit */int) (unsigned short)21656))))) << ((((+(((/* implicit */int) (short)18819)))) - (18811)))))));
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [16ULL] [i_0] [(unsigned char)7] [i_0] [i_0]))));
                                var_29 = ((/* implicit */short) arr_23 [i_1] [i_0] [i_3]);
                                var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_2 - 1] [i_8])) < (((/* implicit */int) max((min((((/* implicit */short) var_2)), (arr_5 [i_2 - 1] [i_0]))), ((short)32767))))));
                            }
                            for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 3) 
                            {
                                var_31 = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) ((signed char) 0ULL))), (max((var_13), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [(short)15])))))));
                                var_32 -= (short)-29836;
                                arr_30 [i_9 + 1] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((unsigned long long int) max((((/* implicit */unsigned long long int) min((arr_22 [i_3]), (-1173252305)))), (max((arr_23 [i_0] [i_0] [i_9]), (arr_14 [i_0] [i_9])))));
                            }
                            /* vectorizable */
                            for (short i_10 = 1; i_10 < 20; i_10 += 4) 
                            {
                                var_33 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_13 [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) >> (((arr_11 [i_0]) - (11233393556885189306ULL)))));
                                arr_34 [i_2] [i_1] [22] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (var_6)));
                                var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1099511627775ULL)) ? (875629815U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10249)))));
                            }
                            var_36 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((-1773911973), (((/* implicit */int) (_Bool)1))))), (4294967295U)));
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */int) arr_26 [i_1] [i_0] [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_38 -= ((/* implicit */unsigned char) var_6);
}
