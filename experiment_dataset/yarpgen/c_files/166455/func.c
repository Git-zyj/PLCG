/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166455
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_19) != (((/* implicit */unsigned long long int) ((191995710U) >> (((var_12) - (12494195376385141770ULL))))))))) >> (((min((4294967293U), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)20))))))) - (4294967270U)))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_21 -= ((/* implicit */int) 2ULL);
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) (-(191995727U)))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            var_23 |= ((/* implicit */signed char) ((((/* implicit */int) ((1682793379524455244LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) >> (((((4294967292U) >> (((arr_9 [i_0] [4]) - (1799439182))))) - (4073U)))));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)105)))))))));
            arr_11 [i_0 - 2] [i_2] = ((/* implicit */unsigned short) (-(1084532700)));
            var_25 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 - 3])) > ((+(arr_9 [i_2 + 2] [i_0 - 2])))));
        }
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_0 [i_0 - 3])), (1786378841U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_3] [i_3])) / (316942917))))))) ? (((((/* implicit */int) (unsigned char)214)) >> (((/* implicit */int) (unsigned short)2)))) : (((/* implicit */int) max((((/* implicit */signed char) arr_10 [i_0] [i_0 + 1] [i_0 + 1])), ((signed char)-105))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((_Bool) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)23)))) + ((+(arr_9 [i_0 + 1] [i_3]))))))));
        }
        var_28 = (-(((/* implicit */int) (unsigned short)24260)));
        arr_15 [(signed char)8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) <= (arr_8 [i_0] [i_0])))), ((-(((/* implicit */int) (unsigned short)65535))))))) || (((/* implicit */_Bool) (((~(arr_3 [i_0] [3]))) ^ (((arr_9 [i_0] [(unsigned char)11]) / (arr_13 [10ULL] [8]))))))));
    }
}
