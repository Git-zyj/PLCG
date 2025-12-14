/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109306
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49591)) ? (((((/* implicit */int) (signed char)126)) | (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max((((/* implicit */short) var_5)), ((short)32767)))) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_2))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_0);
        arr_3 [i_0] = arr_1 [i_0];
        var_11 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2138282543U)) ? (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_0 [(unsigned short)9] [i_0])))), (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_4)))))))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(((/* implicit */int) (short)-32767)))))));
    }
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) -1273723292))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_15 = (~(((/* implicit */int) var_8)));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) arr_4 [i_2]))))))), ((+(min((((/* implicit */unsigned int) (_Bool)0)), (2200274211U))))))))));
                var_17 = ((/* implicit */_Bool) arr_5 [i_2]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_4);
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2013265920U)) ? (((/* implicit */int) var_2)) : (var_1)))))))));
}
