/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159020
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
    var_18 = ((/* implicit */unsigned int) min((((long long int) ((unsigned long long int) 9147939661944767562LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((12294863302432297631ULL), (4095ULL)))) ? (max((-577004310), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [7ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (signed char)104))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) - (((var_7) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))) - (6151880771277253992ULL)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_19 -= ((/* implicit */short) var_1);
                            arr_13 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [(unsigned short)3] [i_2]))));
                            arr_14 [i_0] [6LL] [i_0] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_2]))) | (arr_10 [i_0] [3] [i_3 + 3])));
                        }
                    } 
                } 
            }
        } 
    } 
}
