/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12034
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) var_6);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0])) <= (var_10)))))))));
                                var_19 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_12 [i_2] [i_4])))));
                                var_20 |= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_7 [i_0] [i_1] [i_2]))) <= (arr_7 [i_0] [i_0] [i_0])));
                            }
                            var_21 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)23254)))) * (((/* implicit */int) (signed char)28))));
                            var_22 = ((/* implicit */_Bool) (+((~(((/* implicit */int) min((var_0), (var_15))))))));
                            /* LoopSeq 1 */
                            for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                            {
                                var_23 = min((((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1]))) == (11215018996870512260ULL)))) == (((/* implicit */int) var_9))))), (var_0));
                                var_24 = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_5]);
                                arr_17 [i_5] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) max((min((11215018996870512260ULL), (9226099325503980879ULL))), (var_4)));
                                arr_18 [(_Bool)1] [7LL] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) (_Bool)0);
                            }
                            arr_19 [(signed char)21] [i_1] [15LL] [i_3] = ((((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3])) - ((((~(((/* implicit */int) (signed char)-110)))) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_15);
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) var_12)))))));
    var_27 |= ((/* implicit */signed char) 14891462682942385270ULL);
}
