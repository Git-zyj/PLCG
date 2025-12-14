/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18324
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
    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-20478)) | (((((/* implicit */int) var_6)) << (((176947548468439555ULL) - (176947548468439544ULL)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))) << (((/* implicit */int) ((176947548468439567ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                var_16 = ((/* implicit */short) arr_3 [i_0] [i_0]);
                var_17 = ((/* implicit */unsigned long long int) ((((176947548468439555ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) != (arr_3 [i_2] [i_2])))))));
                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 + 2])) > (((/* implicit */int) arr_1 [i_1 + 4]))));
            }
            arr_7 [i_0] [i_0] |= ((/* implicit */unsigned int) (_Bool)0);
        }
        for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            var_19 &= ((/* implicit */long long int) ((-562343320136826579LL) >= (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_3 + 1] [(unsigned short)6] [i_0])) << (((/* implicit */int) arr_6 [i_0] [i_3 - 1] [4U] [i_0])))))));
            var_20 = ((/* implicit */unsigned char) 176947548468439555ULL);
            arr_11 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3 - 1])) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_2 [i_3 + 1] [i_3 + 1])))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_0] [i_0]);
        }
    }
}
