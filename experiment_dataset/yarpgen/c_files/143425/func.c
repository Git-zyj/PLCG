/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143425
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [0U] = ((/* implicit */unsigned long long int) 561088624U);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned char) var_1);
                            var_11 -= ((/* implicit */unsigned short) (~(((15239242063618455389ULL) >> (((((((/* implicit */_Bool) arr_11 [i_0] [(short)4] [8LL] [i_2 + 1] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_4 [5] [0U])))) - (75)))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((3207502010091096224ULL), (15239242063618455389ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [(_Bool)1]))) : ((-(arr_3 [i_1]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)5967)) || (((/* implicit */_Bool) 3207502010091096245ULL))))) != (((/* implicit */int) (_Bool)1))))))));
                arr_13 [1] [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1])) >> (((((/* implicit */int) arr_5 [i_0] [i_1])) - (50764)))))) ? ((~(((/* implicit */int) ((arr_1 [i_0] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1])))))))) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
            }
        } 
    } 
    var_12 = var_7;
    var_13 = ((/* implicit */unsigned short) max((var_13), (var_5)));
}
