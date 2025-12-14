/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121208
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
    var_15 = ((/* implicit */long long int) (((-(var_8))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 8888695228804005708ULL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (short)24065)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((signed char) (+(var_4)))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 &= ((/* implicit */short) ((11616739941009760332ULL) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((-1211110058), (arr_10 [i_0] [i_1] [14])))), (((((/* implicit */_Bool) -5995274747453018081LL)) ? (-5872296802258856041LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32742))))))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((((((((/* implicit */_Bool) var_7)) ? (3604406057132217866ULL) : (15885738737117558292ULL))) % (((/* implicit */unsigned long long int) max((-1072829748), (((/* implicit */int) (short)127))))))), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_2)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
