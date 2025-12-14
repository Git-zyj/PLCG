/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109356
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(-1896216538)));
        arr_3 [i_0] = ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) arr_1 [i_0])));
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1836951312)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                for (unsigned char i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    {
                        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))) : (((((-1836951325) + (2147483647))) >> (((arr_12 [i_1] [i_1] [i_2] [i_1] [i_1]) + (1537501549)))))));
                        var_22 = ((/* implicit */_Bool) ((signed char) (-2147483647 - 1)));
                        var_23 = ((/* implicit */_Bool) min((var_23), (var_10)));
                    }
                } 
            } 
        } 
        var_24 += ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((0LL) * (((/* implicit */long long int) arr_12 [i_1] [(_Bool)1] [(_Bool)1] [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) var_15))));
        arr_13 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_2)))));
    }
    var_25 -= (~(((/* implicit */int) (unsigned char)245)));
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (-1896216538) : (((/* implicit */int) (unsigned char)153)))))))) + ((~(var_6)))));
}
