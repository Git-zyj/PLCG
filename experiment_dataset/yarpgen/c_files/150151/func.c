/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150151
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
    var_16 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_5)), (var_8))), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-29336))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) * (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned char)7] [i_1])) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) var_12)))))))));
                                arr_17 [i_0] [i_2] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_14)))) << (((long long int) arr_13 [i_0] [i_4] [i_0] [i_3] [i_4] [i_4] [(_Bool)1]))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] = max((var_3), ((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) max((arr_8 [19LL] [i_1] [19LL] [i_1]), (((/* implicit */signed char) arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]))))) : (((((/* implicit */_Bool) 6674775538628628166LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_1]))))) || (((/* implicit */_Bool) ((unsigned short) arr_3 [22LL] [22LL]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [5ULL] [i_0] [i_1] [i_1] [i_1] [5ULL])) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (signed char)41))))))));
                arr_20 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */int) var_15)) == (((/* implicit */int) arr_14 [i_0] [i_0])))), (((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (1579055471U))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_6] [i_6] [i_5]))) >= (max((arr_10 [i_5] [i_6]), (((/* implicit */unsigned long long int) arr_21 [i_5] [i_6]))))));
                    var_19 -= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) (_Bool)1))), ((unsigned short)63466)));
                    var_20 = ((/* implicit */_Bool) min(((~(18446744073709551613ULL))), (((/* implicit */unsigned long long int) -27LL))));
                    var_21 *= ((/* implicit */unsigned char) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_22 [1LL]))))) : (((/* implicit */int) ((signed char) min((((/* implicit */short) (_Bool)1)), ((short)1)))))));
                    var_22 *= var_14;
                }
            } 
        } 
    } 
}
