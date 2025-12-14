/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168158
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1153058031)), (min((var_6), (((/* implicit */unsigned int) arr_5 [i_0] [10LL] [(_Bool)1]))))))), (((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (_Bool)1))))) ? (((17160011186759772479ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */int) var_4)))))))));
                            var_12 ^= ((/* implicit */long long int) arr_0 [4LL]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_13 = min((((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) (_Bool)1)), (281474976710655LL)))))), (((((/* implicit */unsigned long long int) -1363541713)) - (1461326547967032697ULL))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((int) 4294967293U)) <= (((/* implicit */int) ((_Bool) arr_1 [(unsigned char)11]))))))) > (min((var_1), (((/* implicit */long long int) (signed char)-95))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 10; i_8 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 1; i_10 < 12; i_10 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (((!(arr_15 [i_6] [i_6] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_7] [i_10 - 1] [i_10] [3U] [i_7])) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9] [(_Bool)1] [i_7] [i_6]))) <= (var_9)))))))) : (max((arr_14 [i_6] [i_6] [i_10]), (((long long int) var_2))))));
                                arr_30 [i_6] [10U] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) ((unsigned char) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10 - 1] [i_8 + 3] [i_8]))) : (var_9))));
                                var_17 = ((/* implicit */unsigned char) ((min((arr_20 [i_9] [i_8 + 1] [i_7]), (((/* implicit */unsigned int) (_Bool)1)))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((signed char) ((var_5) > (((/* implicit */int) ((_Bool) -961515662)))))))));
}
