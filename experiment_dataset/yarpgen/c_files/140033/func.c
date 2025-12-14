/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140033
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
    var_10 -= (_Bool)1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) -4696966208776169699LL)) ? (((/* implicit */int) (unsigned short)12277)) : (((/* implicit */int) (unsigned short)53557))));
                    arr_7 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31596)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_0] [i_1] [i_2] [(unsigned short)0]) == (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : ((+(1872706270U)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)13812))))) : (2422261026U))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-25538))))) % (min((var_5), (((/* implicit */unsigned int) (_Bool)1))))))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (((((~(1922232511U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */int) (((~(var_7))) == (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) max(((signed char)14), (arr_4 [i_1] [i_2])))) ? (((/* implicit */int) max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [10])))) : (((((-1388155195) + (2147483647))) << (((arr_0 [i_1]) - (12224740783918968562ULL))))))))))));
                }
            } 
        } 
    } 
}
