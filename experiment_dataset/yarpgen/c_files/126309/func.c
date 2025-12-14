/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126309
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? ((~(arr_1 [i_0]))) : (((/* implicit */int) arr_0 [i_0])))));
        var_14 ^= ((/* implicit */signed char) ((long long int) var_9));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((unsigned short) (~(arr_2 [i_1 + 2] [i_1]))));
        arr_6 [i_1 + 1] = ((/* implicit */int) ((0U) & ((-(var_9)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_16 += ((/* implicit */unsigned short) var_10);
            var_17 = ((/* implicit */unsigned short) var_2);
        }
        var_18 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (4035702842U))) <= (((/* implicit */unsigned int) arr_1 [i_1 + 2])));
    }
    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_9 [i_3 - 2])) - (96)))))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1384699297)), (2046564652550108908ULL))))))));
        var_20 = ((/* implicit */signed char) ((((arr_2 [i_3 - 1] [i_3 - 1]) <= (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)27758))))))) || (((/* implicit */_Bool) (signed char)55))));
        arr_12 [i_3] = ((/* implicit */long long int) (((!(((_Bool) 0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (((_Bool)1) ? (-2653875763398855309LL) : (((/* implicit */long long int) arr_2 [i_3] [i_3]))))))) : (18446744073709551615ULL)));
        var_21 ^= ((/* implicit */long long int) ((2046564652550108908ULL) + (((/* implicit */unsigned long long int) 255))));
    }
    var_22 |= ((/* implicit */unsigned long long int) min((1073741823U), (3036813325U)));
    var_23 += ((/* implicit */unsigned short) ((signed char) var_6));
}
