/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127283
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3496975587U)))))));
    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9123385112588907355LL)) ? (((/* implicit */int) (short)-905)) : (((/* implicit */int) ((unsigned short) var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 2665290500U)) ? (var_14) : (2620910220U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10))))))) : ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-636678120661523077LL)))))));
    var_18 = ((unsigned short) var_5);
    var_19 += ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (3442056920U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) 1700658416U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)25540)))) ? (min((((/* implicit */long long int) (short)-1)), (arr_2 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) min(((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_1])))))));
                var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
            }
        } 
    } 
}
