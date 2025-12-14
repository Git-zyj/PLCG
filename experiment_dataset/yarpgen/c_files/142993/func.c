/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142993
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
    var_17 = ((/* implicit */short) (-((-(var_5)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) arr_1 [i_0]);
                            var_18 = ((/* implicit */unsigned long long int) ((long long int) 0LL));
                            arr_11 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) min((max((arr_1 [i_2 - 2]), (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 + 2]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned int) (-(min((((long long int) arr_2 [(_Bool)1])), (((((/* implicit */_Bool) 6590382781412859885LL)) ? (5334711029755415082LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((long long int) 6910446518138370041LL));
                        arr_18 [i_0] [i_5] [i_0] = ((/* implicit */int) (~((-(arr_15 [4ULL] [4ULL] [i_5 - 1] [i_5 - 2])))));
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_4] = (-(var_11));
                }
                /* LoopSeq 1 */
                for (short i_6 = 1; i_6 < 6; i_6 += 4) 
                {
                    arr_23 [i_0] [i_6] [i_6] [i_0] = min((((/* implicit */long long int) (_Bool)1)), (-2637887383910041895LL));
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 8; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_2 [i_0]))));
                        arr_26 [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_0])) < (((/* implicit */int) arr_16 [i_0]))))) / (((/* implicit */int) arr_16 [i_0]))));
                    }
                }
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-6278)) ? (6910446518138370066LL) : (((/* implicit */long long int) var_7))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_1);
    var_24 = var_2;
}
