/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171459
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
    var_10 = ((/* implicit */unsigned char) ((var_1) % (((/* implicit */unsigned int) (-2147483647 - 1)))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((long long int) -8959591413122431205LL)))) ? (((((/* implicit */int) ((signed char) -8959591413122431205LL))) + ((-2147483647 - 1)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42254)) / (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)40528)) ? (((/* implicit */int) arr_3 [i_0 - 1] [(unsigned short)1])) : (((/* implicit */int) (unsigned short)19944)))) : (258048)))));
                var_13 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (5537404799600996957ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25007)))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_8))));
                arr_5 [i_0] [(unsigned short)6] [i_1] &= ((/* implicit */unsigned int) var_2);
                var_14 = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_7 [i_2] [i_2]))));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)120))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) arr_6 [i_2]))))));
        var_18 = 1099511627775ULL;
    }
}
