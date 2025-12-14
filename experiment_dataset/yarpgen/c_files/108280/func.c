/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108280
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
    var_13 = ((/* implicit */signed char) var_0);
    var_14 ^= ((/* implicit */signed char) ((var_4) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) min((var_5), (var_9)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))))) >> (((((/* implicit */int) arr_0 [i_1])) >> (((((/* implicit */int) arr_0 [i_0 + 2])) - (56822)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])) ? (((arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) << (((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) - (16654157220697934892ULL))))) : (((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ^ (arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]))));
                            var_16 = ((/* implicit */_Bool) arr_6 [11ULL]);
                            arr_12 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_1 [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)42870));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                            {
                                var_18 *= ((/* implicit */unsigned long long int) var_11);
                                var_19 *= ((/* implicit */unsigned short) (_Bool)0);
                            }
                            var_20 = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_0] [i_4 - 1] [i_1] [i_0]), (((/* implicit */unsigned short) var_11)))))) % (1279101611064009559ULL)));
                            var_21 = ((/* implicit */signed char) ((_Bool) min((arr_15 [3ULL] [3ULL] [i_4] [i_4 + 1] [i_4 - 1]), (((/* implicit */unsigned long long int) (signed char)25)))));
                            var_22 = ((/* implicit */unsigned short) ((signed char) ((13684577578594394596ULL) << (((((((/* implicit */int) (unsigned short)34201)) % (((/* implicit */int) arr_14 [i_1] [i_4 - 1] [(unsigned short)5])))) - (15997))))));
                            var_23 *= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)34190)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))) : (arr_8 [i_4 - 1] [i_1] [i_4 - 1] [i_1]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) : (min((((15443955370314222447ULL) << (((((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_5])) - (27342))))), (arr_15 [i_5] [i_5] [i_4] [i_1] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
