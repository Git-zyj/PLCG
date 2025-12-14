/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187518
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
    var_15 = ((/* implicit */_Bool) ((var_7) ? (min((((/* implicit */unsigned long long int) (-(var_9)))), (max((var_3), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)14]))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))));
                arr_7 [i_0] [i_1] |= ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1)))))) * (arr_4 [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                {
                    var_17 = (-(((/* implicit */int) (short)3469)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_18 += ((/* implicit */unsigned char) ((unsigned long long int) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (13982397298234790386ULL))));
                        arr_18 [i_5] [i_3] [i_4] [i_4] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) arr_13 [i_4] [i_4]))));
                    }
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? ((~(var_12))) : (((/* implicit */int) var_7))))) ? (min((((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)6546)))), ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (((unsigned char) var_2)))))));
                }
            } 
        } 
    } 
}
