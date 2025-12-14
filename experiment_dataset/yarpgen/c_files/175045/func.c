/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175045
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned int) -9223372036854775803LL));
        arr_5 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) < (((/* implicit */int) arr_0 [i_0 + 4])))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_9 [i_0] [i_0 + 1] [4U] = ((/* implicit */unsigned short) -2147483632);
            arr_10 [i_0] [i_1] = ((/* implicit */short) 1524356110U);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_3 [i_2])))) && (((/* implicit */_Bool) (~(2000347739U))))));
            arr_14 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)41897)) & (((/* implicit */int) (unsigned short)54978))))));
            arr_15 [i_0] = ((/* implicit */_Bool) ((unsigned char) 359679111U));
        }
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_12) / (121789295)))) <= (((unsigned int) var_13))))) == (((/* implicit */int) var_8))));
    var_20 &= ((/* implicit */unsigned int) (unsigned short)41894);
}
