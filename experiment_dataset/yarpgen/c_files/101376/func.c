/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101376
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
    var_18 = max((((((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-126))))) | (max((-1386744892), (((/* implicit */int) var_13)))))), (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)33585)) != (var_0)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */short) -1386744892);
                arr_5 [i_0] [(short)5] = ((/* implicit */short) (((!(((/* implicit */_Bool) max(((unsigned short)23555), (((/* implicit */unsigned short) (short)3107))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)5)) - (((/* implicit */int) (short)0))))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) arr_4 [1])))) : (((/* implicit */int) max((arr_2 [(unsigned char)14] [i_0]), (arr_2 [i_1] [i_1])))))) : (((/* implicit */int) max(((unsigned short)33842), (((unsigned short) arr_4 [i_0])))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(max(((-(((/* implicit */int) (short)-14517)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [(unsigned short)0] [i_0])) : (((/* implicit */int) (unsigned char)30)))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_8)) > (var_10)))))));
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)167)))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)31950))))))) ? (((((/* implicit */_Bool) max(((short)-14517), (var_8)))) ? (-720545394) : (var_10))) : (((/* implicit */int) max((((/* implicit */short) (signed char)38)), (min((((/* implicit */short) (unsigned char)248)), ((short)-1851))))))));
}
