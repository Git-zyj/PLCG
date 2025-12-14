/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168313
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
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((var_16), (((int) ((max((9007199254740991LL), (arr_3 [i_0] [i_0]))) <= (var_1))))));
                            arr_9 [i_1] [i_1] [10] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) var_13));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_14 [0LL] [0LL] [0LL] [0LL]), (arr_14 [13] [i_1] [2LL] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1480748460U)))) ? (1654916199U) : (arr_14 [i_0] [i_1] [i_4] [7U])))) : (3050005936473815091LL)));
                        arr_17 [8ULL] [i_4] [8ULL] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
                    }
                    arr_18 [i_4] [i_4] [i_1] [i_0] = ((/* implicit */int) max((max((((((/* implicit */_Bool) 8272691744196722092LL)) ? (317795847725036786ULL) : (((/* implicit */unsigned long long int) 1201559351U)))), (max((12531769098405154954ULL), (((/* implicit */unsigned long long int) -388842036487493166LL)))))), ((-(((arr_5 [i_4] [i_1] [i_1]) & (((/* implicit */unsigned long long int) 3093407945U))))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((10ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1683852559)) || (((/* implicit */_Bool) 8387584U))))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -8272691744196722097LL))));
                                var_20 = ((/* implicit */int) arr_15 [6] [6]);
                                var_21 = ((/* implicit */long long int) (-(arr_23 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7])));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((-277456348) >= (var_11))))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_6] = ((/* implicit */int) ((arr_1 [i_6]) % (((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_6] [i_6] [i_6]))));
                    var_23 = ((/* implicit */long long int) max((var_23), (var_1)));
                }
            }
        } 
    } 
}
