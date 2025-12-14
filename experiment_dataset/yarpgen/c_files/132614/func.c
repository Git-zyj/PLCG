/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132614
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)-112))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */signed char) (_Bool)1);
        var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0])), ((short)-11958)))) ? ((~(arr_0 [i_0]))) : (((((/* implicit */_Bool) (signed char)-112)) ? (arr_0 [i_0]) : (arr_0 [9U])))))));
        var_18 = ((/* implicit */_Bool) max((((((/* implicit */int) (signed char)2)) & (((/* implicit */int) (short)-24758)))), (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((_Bool) 13852257420539254543ULL);
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */_Bool) (short)-11958)) && (((/* implicit */_Bool) arr_4 [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-29196)) < (((int) arr_4 [i_1]))))))));
        arr_6 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_5 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)31834))))) ? ((+(((/* implicit */int) arr_4 [5U])))) : (((/* implicit */int) min(((short)26787), ((short)-15986)))))), ((-(((/* implicit */int) (signed char)-112))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(2500505020923021263LL)))) ? (((/* implicit */int) (short)-14003)) : (((/* implicit */int) min((((/* implicit */signed char) ((2969959250U) >= (var_14)))), (min((((/* implicit */signed char) (_Bool)1)), (var_12))))))));
        var_22 = ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */int) arr_4 [i_1 - 1])) | ((~(((/* implicit */int) (short)24758)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */signed char) (-(((((/* implicit */int) ((_Bool) var_3))) >> (3U)))));
                arr_11 [i_3] [i_2] [i_2] |= ((/* implicit */short) ((min((((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) arr_5 [i_2])))), (((((/* implicit */_Bool) (short)-14013)) ? (((/* implicit */int) (short)-14003)) : (((/* implicit */int) (unsigned char)145)))))) >= (((((/* implicit */int) arr_5 [i_3])) ^ (((/* implicit */int) arr_5 [i_2]))))));
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_3]);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((short) (short)8806)))));
            }
        } 
    } 
}
