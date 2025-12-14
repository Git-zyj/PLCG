/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124688
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
    var_18 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) -1906132119))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)91)))))))) ? (((/* implicit */int) ((unsigned char) (short)-12188))) : ((-((-(-1116637244)))))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_1 - 2]), (((/* implicit */unsigned char) arr_1 [i_1 + 1]))))) && (((/* implicit */_Bool) max((arr_0 [i_1 - 1]), (arr_0 [i_1 + 1]))))));
        var_21 += var_13;
    }
    for (int i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */signed char) (unsigned char)165);
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 - 2])) % (((/* implicit */int) arr_0 [i_2 - 1])))))));
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) (signed char)56)), (arr_4 [4U])))) >= (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)65535)))) != (((1906132104) + (((/* implicit */int) (short)-19582)))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) -1906132083))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [6])) ? (arr_7 [8LL]) : (arr_7 [(signed char)0])));
    }
}
