/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123756
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
    var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24472)) ? (((/* implicit */unsigned int) -1007779684)) : (3272295530U)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_0 [(_Bool)0] [i_0]))) + (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [12ULL])), (1007779674)))))))));
        var_16 -= ((/* implicit */unsigned char) var_7);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            {
                arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) arr_4 [i_1]);
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-24472), ((short)-24461))))) : ((-(var_4)))));
                var_18 = ((/* implicit */short) (+(((((/* implicit */int) ((unsigned char) var_11))) * (((/* implicit */int) var_7))))));
            }
        } 
    } 
}
