/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156211
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
    var_12 = ((/* implicit */long long int) ((unsigned short) ((int) var_5)));
    var_13 = (((-(((/* implicit */int) var_8)))) >> (((((/* implicit */int) ((short) ((unsigned char) (unsigned short)60327)))) - (146))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [16LL] [(unsigned char)10])) : (arr_2 [i_1] [i_1])))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1] [(_Bool)1])) || (((/* implicit */_Bool) var_0)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10))))))));
                var_15 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) == (var_5))) ? (max((((/* implicit */unsigned int) var_9)), (arr_0 [i_0]))) : (max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(var_11))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))))) : (arr_2 [3] [i_1]))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((var_0) > (((/* implicit */long long int) arr_0 [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (!(var_3)))) >= (((/* implicit */int) ((11238230980590114366ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))))) % (((/* implicit */int) min((((/* implicit */short) var_8)), (arr_11 [(unsigned char)10] [i_3]))))));
                var_17 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_2] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */int) (short)0)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775790LL))) + (27LL)))))))) ? (((unsigned int) (unsigned short)0)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [14]), (var_5)))) ? (((/* implicit */int) ((_Bool) (unsigned short)6203))) : (((((/* implicit */_Bool) var_0)) ? (-1429339862) : (1302834738))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_6))));
}
