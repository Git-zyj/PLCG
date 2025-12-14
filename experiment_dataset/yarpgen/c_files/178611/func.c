/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178611
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+((-(((/* implicit */int) var_5)))))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)5950)) / (((/* implicit */int) min(((short)5950), (((/* implicit */short) var_10)))))));
                    arr_8 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4086781302U)) ? ((-(((/* implicit */int) (short)5950)))) : (min((((/* implicit */int) var_7)), (var_0)))))) - (var_4)));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-5951)) : (((/* implicit */int) (unsigned char)190))))))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-30863)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65527))))) : (((((/* implicit */_Bool) (-(7622503891260914019LL)))) ? (var_0) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        for (short i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 18; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (max((((/* implicit */long long int) var_10)), (7622503891260914019LL))))))));
                    var_18 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_3]) + (((/* implicit */int) var_11))))) ? (((/* implicit */int) (short)5952)) : (-44983419)))), ((~(var_1))));
                }
            } 
        } 
    } 
}
