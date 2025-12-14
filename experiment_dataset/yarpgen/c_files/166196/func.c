/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166196
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2 - 2] [i_2 - 3])) ? (arr_5 [i_2] [i_2 + 2] [i_2]) : (((/* implicit */long long int) arr_3 [i_0 + 2] [i_2 - 3] [i_2 - 2])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6112058989463596105LL)))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_1] [i_3]) : (arr_10 [i_0] [i_1] [i_3] [i_4])))) ? (-6038565871607710318LL) : (-6588795051893340556LL))));
                                var_17 &= ((/* implicit */unsigned char) min((arr_0 [i_3]), (((/* implicit */long long int) arr_3 [23LL] [23LL] [i_3]))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] [i_5 + 2] [i_0] [i_6] [i_7] = ((/* implicit */unsigned int) -1351489519866307689LL);
                                var_18 = ((/* implicit */unsigned int) -9223372036854775798LL);
                                var_19 = ((((unsigned int) (~(((/* implicit */int) arr_14 [i_0] [i_7]))))) >> ((((~(3177513367U))) - (1117453920U))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] = ((/* implicit */unsigned char) 1351489519866307698LL);
                var_20 = arr_6 [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) 218776552U)))));
    var_22 = 1351489519866307689LL;
    var_23 = ((/* implicit */unsigned char) (-(-5855095042087211366LL)));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_9))));
}
