/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131329
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
    var_11 |= ((/* implicit */short) max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)26)))), (((/* implicit */int) (unsigned short)20319))))), (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)45217)));
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (max((0LL), (((/* implicit */long long int) arr_4 [i_0] [i_1])))))) | (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-8))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_4] = ((/* implicit */unsigned char) ((long long int) ((_Bool) (unsigned short)20319)));
                                arr_14 [i_0] [i_2] [i_2] [i_3 + 2] [i_3 + 2] [i_4] [i_4] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)45229)))));
                                var_14 = ((/* implicit */signed char) (unsigned short)65520);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20319)) / (1263440789)))))))) : (((((/* implicit */_Bool) ((unsigned char) -2147483621))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-16)))) : (min((((/* implicit */long long int) (short)-32755)), (-1711781101792451874LL)))))));
                            arr_27 [i_5] [i_5] [i_5] [i_8] [i_8] [2LL] = ((/* implicit */unsigned short) ((arr_20 [15LL]) | (((/* implicit */int) arr_18 [i_7]))));
                            arr_28 [i_8] [i_8] [i_5] = ((/* implicit */long long int) ((_Bool) (+(0LL))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min(((-(((/* implicit */int) min(((unsigned short)20319), ((unsigned short)0)))))), (((int) ((int) var_1))))))));
                        }
                    } 
                } 
                arr_29 [3ULL] [i_6] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (min((-5623614770842545539LL), (9223372036854775807LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)240)))))))))))));
}
