/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182098
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 1]);
        arr_2 [i_0] = ((/* implicit */signed char) ((long long int) -2098815211));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) arr_1 [14]);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (-2098815185)));
        var_13 = ((/* implicit */long long int) ((arr_5 [i_1]) & (arr_5 [i_1])));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */short) ((long long int) var_6));
        arr_10 [i_2] = ((/* implicit */unsigned int) (+(14415502241218995223ULL)));
    }
    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(-2098815185)))) ? (-2098815220) : ((+(((/* implicit */int) (_Bool)1)))))) != ((-(((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))))))));
        arr_15 [i_3] = ((/* implicit */unsigned char) ((min((arr_13 [i_3 + 1] [i_3]), (arr_13 [i_3 - 2] [i_3]))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
        arr_16 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3])) | (((/* implicit */int) (unsigned short)3584))));
        arr_17 [i_3] = ((/* implicit */unsigned char) arr_14 [i_3]);
    }
}
