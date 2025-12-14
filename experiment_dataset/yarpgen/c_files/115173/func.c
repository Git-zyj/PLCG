/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115173
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
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-1))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_16 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (short)1)), (var_12)));
            arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (var_9)))) || (((((/* implicit */_Bool) arr_1 [i_0])) || (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_13))))))));
            arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) var_3));
            var_17 = ((/* implicit */unsigned short) (unsigned char)0);
            var_18 -= ((/* implicit */short) ((((464924189627517702ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26033))))) - (((/* implicit */unsigned long long int) var_0))));
        }
        arr_7 [i_0] [i_0] = max((((/* implicit */unsigned int) arr_1 [i_0])), (((unsigned int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (short)-2))))));
        arr_8 [(unsigned short)3] [(unsigned short)3] &= ((/* implicit */short) min((var_7), (min((((/* implicit */unsigned int) min(((short)968), ((short)26047)))), (((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] [i_2] = ((((/* implicit */_Bool) (short)-26013)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)968))) : (4611686018427387903ULL));
        var_19 = ((/* implicit */unsigned short) (+(7427894683925610025ULL)));
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)33)))) + ((~(((/* implicit */int) arr_11 [i_2]))))))) + (((unsigned int) var_7))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) var_10);
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)26016))));
        arr_17 [i_3] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54887)))))))));
        arr_18 [i_3] = ((/* implicit */unsigned char) (~((~(((unsigned int) var_9))))));
    }
}
