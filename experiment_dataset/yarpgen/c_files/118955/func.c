/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118955
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((int) (-(((/* implicit */int) var_7))))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_7 [i_2] [i_0])), (-3797261713876145594LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)191)) * (((/* implicit */int) (signed char)17)))))))) ? (((/* implicit */int) var_13)) : (((arr_6 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1]))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min(((short)15182), (((/* implicit */short) (_Bool)1))))) : ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    var_17 = (((~(((/* implicit */int) arr_3 [i_0 + 1] [i_0])))) & (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-19)) || (((/* implicit */_Bool) ((unsigned short) (signed char)103)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_8)))) : (((var_12) % (((/* implicit */int) (short)13297))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) (unsigned char)86))))) : (((((/* implicit */int) min(((short)-15184), (((/* implicit */short) (unsigned char)0))))) | (((/* implicit */int) min(((unsigned char)255), ((unsigned char)140))))))));
    var_19 = ((/* implicit */unsigned short) min(((-(var_10))), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */int) (unsigned char)255)), (var_12)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) var_1))))))) ? ((+(((/* implicit */int) var_5)))) : ((+((+(-2147483629)))))));
}
