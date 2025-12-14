/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143097
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
    var_19 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) ((short) ((arr_4 [(short)3] [i_1 - 2] [i_2]) & (arr_4 [6ULL] [i_1 + 1] [11LL]))));
                    var_21 = ((/* implicit */unsigned int) min((arr_1 [i_0 - 2] [i_0 - 1]), (arr_1 [i_0 - 2] [i_0 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (signed char)127);
                                var_23 = ((/* implicit */unsigned short) ((int) arr_4 [i_1] [i_1 - 1] [i_1 + 1]));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1] [i_0]);
                }
            } 
        } 
        var_25 -= ((/* implicit */long long int) (unsigned char)189);
        var_26 = ((/* implicit */unsigned char) arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) ((arr_11 [i_5] [i_5] [(short)16] [i_5]) ^ (arr_11 [(unsigned char)0] [6U] [i_5] [i_5])));
        var_28 = ((/* implicit */short) ((arr_1 [i_5] [i_5]) < (((/* implicit */long long int) var_10))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            var_29 = ((/* implicit */signed char) ((arr_12 [i_5]) >= (arr_11 [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6])));
            var_30 = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_5] [(unsigned short)0]));
        }
    }
    var_31 = ((/* implicit */_Bool) ((var_3) & (var_3)));
    var_32 &= ((((((/* implicit */int) var_6)) < (((((/* implicit */_Bool) (signed char)-9)) ? (var_12) : (((/* implicit */int) (signed char)-5)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)1))))) ^ (max((((/* implicit */long long int) var_3)), (-1339232377397899676LL))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) var_5)) < (var_11))))));
}
