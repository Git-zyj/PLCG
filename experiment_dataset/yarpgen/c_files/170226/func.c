/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170226
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((-6156129207635556614LL) < (((/* implicit */long long int) ((/* implicit */int) var_7)))))) * (((((/* implicit */int) (signed char)5)) - (((/* implicit */int) (unsigned char)190))))))) ? (((/* implicit */int) (short)10855)) : (((((/* implicit */_Bool) (unsigned short)2532)) ? (((/* implicit */int) (short)-464)) : (((/* implicit */int) (short)-10855))))));
                arr_8 [i_0] [i_1] &= ((/* implicit */_Bool) arr_5 [i_1 - 1]);
                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */int) ((((/* implicit */_Bool) -6156129207635556614LL)) || (((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)5237)) | (((/* implicit */int) arr_1 [i_1 + 1])))) >> (((((/* implicit */int) arr_5 [i_1 - 1])) - (112)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-464)) > (((/* implicit */int) arr_1 [i_1])))))) - (((((/* implicit */_Bool) var_12)) ? (6156129207635556614LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-5238)), (0)))) : (((((/* implicit */_Bool) var_8)) ? (630396486199820975ULL) : (((/* implicit */unsigned long long int) 6156129207635556614LL)))))), (((/* implicit */unsigned long long int) var_6))));
    var_17 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-10855)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))));
}
