/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107165
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [5ULL] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-15279)))), ((~(arr_1 [i_2])))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) arr_4 [11])) : (0))) + ((+(((/* implicit */int) var_15))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -1733305159)) : (7653546250750664755ULL)))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0]))) : (2096471523)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
    {
        arr_9 [i_3] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3]))))) ? (((int) var_10)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_7 [(_Bool)1])) : (((/* implicit */int) arr_7 [i_3])))));
        var_22 &= ((/* implicit */signed char) var_0);
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1694328387))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((unsigned char) arr_10 [i_4] [i_4]));
        arr_13 [(_Bool)1] = ((/* implicit */signed char) -21);
    }
}
