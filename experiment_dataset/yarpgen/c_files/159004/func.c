/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159004
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned char) arr_0 [i_0] [i_0 + 1]));
        var_20 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_0 [11ULL] [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : ((+(((/* implicit */int) arr_0 [i_0] [i_0 - 2])))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) var_14))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-80)) || (((/* implicit */_Bool) arr_4 [i_1] [i_1])))))) & (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [(signed char)10] [(signed char)10])))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            for (int i_3 = 2; i_3 < 8; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((_Bool) (+(var_8)))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)235))))) ? (((arr_5 [i_1] [i_2 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [(signed char)16])))));
                    arr_15 [i_1] = ((/* implicit */short) arr_5 [4U] [i_2]);
                }
            } 
        } 
    }
    var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) ^ (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_0)))) < (((((/* implicit */int) var_19)) | (var_9))))) ? (((((/* implicit */_Bool) 17033303410010816123ULL)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12286))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    var_27 = ((/* implicit */signed char) var_1);
}
