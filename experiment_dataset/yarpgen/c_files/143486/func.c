/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143486
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_0] [i_0] [i_0]))))) ? (((int) 603534735742690677LL)) : (((/* implicit */int) max(((_Bool)1), (arr_2 [i_0 - 1] [i_0] [i_0 - 1])))))) != (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (18446744073709551613ULL)))))));
                    arr_9 [6LL] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((unsigned short) arr_1 [i_1] [10LL])), (((/* implicit */unsigned short) arr_0 [12LL]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)865)) * (((/* implicit */int) arr_2 [i_0 + 1] [12ULL] [i_0 + 1]))))), (max((arr_3 [i_0 + 2] [i_2]), (((/* implicit */unsigned long long int) var_6))))))));
                    arr_10 [i_0] [i_1] [i_1] [(unsigned char)14] |= ((/* implicit */_Bool) (unsigned char)3);
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+(max((8129620763035397050LL), (((/* implicit */long long int) (unsigned char)59)))))))));
                    var_15 = ((8129620763035397034LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64695))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) <= (((long long int) (unsigned short)64710)))))));
}
