/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142050
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
    var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_9)))))) == (-5721364362385244134LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = (-(((((/* implicit */_Bool) ((arr_2 [i_1] [i_0 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (5721364362385244131LL)))) ? ((~(((/* implicit */int) (unsigned short)1738)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5325101222513506216LL))))))));
                arr_4 [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) 5721364362385244133LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2317774294U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_6 [(unsigned char)1] [i_3])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34831)) >> (((7497160707224523836LL) - (7497160707224523805LL)))))) : (1977193009U))) == (var_2)));
                    arr_14 [i_4] [i_3] = ((/* implicit */short) (((-(-2969168687551331987LL))) >> (min((((arr_9 [i_2] [8LL] [(short)0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
}
