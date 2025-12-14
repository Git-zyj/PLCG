/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182932
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
    var_20 &= ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((/* implicit */int) min((((/* implicit */short) var_5)), (max((((/* implicit */short) var_6)), (var_2)))))));
    var_21 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [14] [i_2] = ((/* implicit */signed char) var_16);
                    arr_9 [i_0] [i_0] = arr_2 [i_0] [i_0] [i_2];
                    var_22 |= ((((/* implicit */int) (short)23810)) | (((/* implicit */int) (unsigned char)0)));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -959710575)) ? (-959710575) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((min((959710575), (((/* implicit */int) var_2)))), ((-(((/* implicit */int) arr_18 [i_3 + 1]))))));
                    arr_20 [i_3] [i_5] [0U] [i_3] = ((/* implicit */unsigned char) ((-959710576) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)56109)) : (-1)))) || (((/* implicit */_Bool) ((unsigned int) 4655357427497303252LL))))))));
                }
            } 
        } 
        arr_21 [i_3] = ((/* implicit */signed char) arr_4 [i_3] [i_3] [i_3 - 1]);
    }
}
