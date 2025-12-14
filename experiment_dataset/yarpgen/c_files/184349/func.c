/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184349
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = min((var_6), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))));
                    arr_8 [i_0] [i_2] [i_1 + 2] [i_2] = ((/* implicit */unsigned char) 0ULL);
                    var_10 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1 - 2] [i_2]);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) 18446744073709551590ULL))), ((-(1742791327U)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
    var_12 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                arr_14 [i_3] [i_3] = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-5))))) == ((~(arr_12 [i_3] [i_4]))))));
                arr_15 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)249))) ? (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_11 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_3]) | (arr_10 [i_3])))) ? (((/* implicit */int) ((_Bool) arr_11 [i_4]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_11 [i_3])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (~(min(((+(((/* implicit */int) var_8)))), (var_2)))));
}
