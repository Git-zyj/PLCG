/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11344
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
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) 1046783704U))))))))));
    var_14 ^= ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) 9514656007191752539ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_15 &= ((/* implicit */short) (-(((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_3)))) ? (max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) -356071800609640931LL)))) : (((/* implicit */unsigned long long int) ((long long int) var_12)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) arr_6 [11LL] [11LL]);
                            var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_7 [6U] [6U]) : (((/* implicit */unsigned int) -2117837972))))) ? ((~(((/* implicit */int) var_7)))) : (((int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) var_8))))))) : (((long long int) arr_8 [7U] [(unsigned short)11] [(unsigned short)11] [4ULL]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((short) var_0)), (arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1]))))));
                var_19 += ((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(short)8])) ? (arr_9 [6U] [9ULL] [9ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
            }
        } 
    } 
}
