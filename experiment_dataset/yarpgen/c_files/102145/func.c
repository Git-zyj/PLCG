/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102145
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) (unsigned short)49418))))) != (var_18)))) % (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 |= (unsigned char)19;
                arr_6 [(unsigned short)13] [(unsigned short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-100)) ? (6290277291823393142LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))));
                arr_7 [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_0))))) & (max((((/* implicit */int) arr_0 [i_1])), (var_2)))));
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) > ((((-(((/* implicit */int) (signed char)55)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_0 [i_1])))))))));
                var_22 = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_5);
    var_24 *= ((/* implicit */unsigned long long int) ((min((6290277291823393132LL), (max((-6290277291823393132LL), (((/* implicit */long long int) (signed char)55)))))) >> (((((/* implicit */int) var_14)) + (90)))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            {
                var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) >> (((((/* implicit */int) (unsigned char)239)) - (220)))))) ? (((((/* implicit */_Bool) arr_10 [(unsigned char)14])) ? (arr_10 [14]) : (arr_10 [(short)12]))) : (((((/* implicit */unsigned long long int) 1373550241U)) * (arr_10 [10ULL])))));
                arr_13 [12ULL] |= ((/* implicit */_Bool) ((unsigned char) (~(((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_8 [i_3])))))));
            }
        } 
    } 
}
