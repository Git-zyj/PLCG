/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107406
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
    var_17 = ((/* implicit */long long int) min((var_17), (((((var_4) == (((/* implicit */int) var_11)))) ? (var_10) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)1)))))) + (var_10)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */short) arr_9 [i_0]);
                                var_19 = ((/* implicit */short) min((((unsigned long long int) arr_12 [i_2] [10] [i_2 + 2] [i_2] [(_Bool)1] [i_4])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49497)) + (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0] [i_0]));
                    var_21 ^= ((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 17308622273911961483ULL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((unsigned short) 9266746870426804511ULL)))))) ^ (min((((/* implicit */unsigned int) ((unsigned short) var_11))), (var_15)))));
                    arr_16 [i_0] [(signed char)5] [i_5] = ((/* implicit */unsigned char) (+(9179997203282747104ULL)));
                }
                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 2])) && (((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2]))))), (((long long int) -553595573))));
                var_24 = ((/* implicit */long long int) var_0);
                arr_17 [(unsigned short)6] [(unsigned short)6] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) + (9266746870426804511ULL)));
            }
        } 
    } 
}
