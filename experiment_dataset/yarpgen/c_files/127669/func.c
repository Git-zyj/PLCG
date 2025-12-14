/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127669
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(signed char)1] [i_1] [(signed char)1] [(signed char)1] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_4 [i_0] [i_1] [i_2]))), (max((((/* implicit */int) max(((unsigned char)204), (((/* implicit */unsigned char) var_9))))), (((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned short)16383);
                    var_10 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((var_6), ((signed char)-31)))) : (((((/* implicit */int) (unsigned short)49152)) & (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ ((+(((/* implicit */int) ((signed char) var_1)))))));
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 9; i_5 += 3) 
            {
                {
                    arr_15 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3] [i_4] [i_5])) << (((((/* implicit */int) arr_12 [i_4])) - (50)))))) ? (((/* implicit */int) ((_Bool) (unsigned short)49134))) : (((/* implicit */int) ((short) arr_3 [i_3] [i_3] [i_3]))))));
                    var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_5 - 1]), (arr_10 [i_3 + 2])))) ? ((~(((/* implicit */int) arr_10 [i_3 + 2])))) : (((((/* implicit */int) (unsigned char)108)) % (((/* implicit */int) arr_10 [i_3 + 3]))))));
                }
            } 
        } 
        var_13 += ((/* implicit */unsigned short) var_1);
        var_14 = ((/* implicit */unsigned char) max((var_14), (((unsigned char) ((((/* implicit */_Bool) arr_13 [i_3 - 1])) ? (((/* implicit */int) arr_10 [i_3 + 2])) : (((/* implicit */int) arr_13 [i_3 + 2])))))));
        var_15 = ((/* implicit */unsigned char) arr_3 [i_3] [i_3 + 1] [i_3]);
    }
}
