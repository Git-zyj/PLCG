/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18519
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_1] [i_2])))) : (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0] [i_1 - 1] [i_0]) : (((/* implicit */unsigned int) -185242386)))))));
                    var_21 = ((/* implicit */short) min((var_21), (((short) arr_4 [i_1] [(unsigned char)0]))));
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)18)), (arr_0 [i_1] [i_0])))) : (((/* implicit */int) var_9)))))));
                    arr_7 [i_0] [5LL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_2]))) || (((/* implicit */_Bool) ((unsigned char) (!(var_10)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (unsigned short)39256)))));
                        var_23 = ((/* implicit */signed char) arr_10 [i_4]);
                        var_24 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_4] [6LL]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_4] [2U]))))) : ((~(var_0)))))));
                        var_25 ^= ((/* implicit */unsigned int) ((signed char) ((short) min((-185242386), (((/* implicit */int) (unsigned char)18))))));
                    }
                } 
            } 
        } 
    }
    var_26 += ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) : (-760221483672368365LL))) % (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) ((int) var_6))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6))))));
    var_27 = ((/* implicit */unsigned int) var_8);
}
