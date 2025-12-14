/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104850
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 3] [i_1]))) + (arr_2 [i_1 - 2] [i_1 - 2] [i_1])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) <= (((((/* implicit */_Bool) arr_2 [4U] [2ULL] [i_1])) ? (arr_2 [i_0] [3U] [5ULL]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) 0ULL)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2] [(signed char)0] [(short)3] = arr_3 [i_1 - 4];
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */int) (signed char)-117)) - (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((signed char) arr_8 [9U] [i_1] [7U] [i_3] [i_4]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)124)), (arr_8 [i_0] [i_1] [i_1] [i_3] [i_4])))) : (((((/* implicit */_Bool) 8646911284551352320LL)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0] [i_3])) : (31525197391593472ULL)))))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2044972807341204580ULL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_6 [i_3 - 2] [i_3 - 2] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(signed char)4] [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [(signed char)7] [i_0] [i_0] [i_1 - 3] [i_0]))))) ? (((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_1] [i_1] [i_0] [9LL]), (arr_7 [i_0] [i_1] [1U] [i_0])))) : (max((((/* implicit */unsigned long long int) -9223372036854775782LL)), (18415218876317958162ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] = ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_5 [i_0] [1ULL] [9ULL] [i_6])))))))) : (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]) - (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_15))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_5 + 1] [3ULL]))) < (arr_2 [i_1 - 4] [(signed char)7] [i_1 - 4])));
                                var_20 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1024ULL)) ? (((/* implicit */int) arr_25 [i_5] [i_1] [2ULL] [4U] [i_7] [i_1] [i_7])) : (((/* implicit */int) var_2)))) << (((((/* implicit */int) var_16)) + (45)))));
                            }
                            arr_26 [(signed char)0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = var_10;
    var_22 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)-20))))));
}
