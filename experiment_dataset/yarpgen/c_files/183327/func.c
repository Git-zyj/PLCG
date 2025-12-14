/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183327
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9099692681218067422LL)) ? (9099692681218067421LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        var_18 = (~(((((/* implicit */_Bool) var_1)) ? (var_6) : (var_6))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 2834188547U)) == ((~(var_16)))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_5)))))))) : (((((/* implicit */_Bool) 15U)) ? (var_16) : (var_6)))));
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((var_6), (((/* implicit */long long int) (_Bool)1))))))) <= (((long long int) (_Bool)1))));
    var_21 = ((/* implicit */signed char) ((int) 3144818081U));
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        var_22 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)58), ((unsigned char)58))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7251526129645186643LL)) ? (((/* implicit */long long int) 921548974U)) : (-3977931190855985028LL))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) ((long long int) var_5));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_18 [7LL] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned char) ((var_15) > (((/* implicit */long long int) ((/* implicit */int) var_13))))))))), (((((/* implicit */_Bool) 4249832687U)) ? (var_15) : (var_17)))));
                var_24 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_9)), (arr_1 [i_4]))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [i_4]))))))))));
            }
        } 
    } 
}
