/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13248
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (max((-3210124485086626737LL), (((/* implicit */long long int) var_12))))))) < (((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned long long int) var_3)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(2305843009213693952LL)));
        arr_3 [i_0] = ((/* implicit */long long int) var_12);
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) / (2348474525532664478LL)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_13 [i_2 - 1] [9LL] [i_2 + 1] [i_2] [i_1]) : (arr_13 [i_2 - 1] [i_2] [i_2 + 1] [(unsigned char)20] [21ULL])))), ((~(arr_7 [i_2] [i_2]))))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_2 - 1] [i_2 + 1] [0ULL] [i_2 - 1] [i_2 - 1]), (arr_13 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])))) ? (((arr_13 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1]) << (((arr_13 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]) - (5314691709385882822LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147482624)))))))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)9905))));
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_17 [i_2 - 1] [(_Bool)1] [i_2] [i_2] [i_2])) <= (arr_7 [i_2 - 1] [i_2 - 1])));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 725046790)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (arr_16 [i_1] [5LL] [i_3] [i_1] [i_3])))))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) 4294967282U))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_2 + 1]) : (arr_5 [i_2 - 1]))) : (((((arr_5 [i_2 - 1]) + (9223372036854775807LL))) >> (((arr_5 [i_2 + 1]) + (4271644852326303783LL)))))));
                                arr_20 [i_1] [i_2] [i_2] [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) max((arr_14 [i_1] [i_7] [i_3] [10LL] [(short)5]), (((/* implicit */long long int) (~((~(((/* implicit */int) var_13)))))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [(signed char)20] [i_2 - 1] [(short)5] [i_7])) && (((/* implicit */_Bool) arr_13 [(_Bool)1] [i_3] [i_2 + 1] [(short)4] [16LL])))))) - (((((/* implicit */_Bool) arr_13 [(short)3] [i_2] [i_2 - 1] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2959744458U))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_11);
    var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
}
