/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184816
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
    var_18 &= ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)43447)) | (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) var_3))))))));
            var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_15) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_1 [i_0])))))))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_1 + 2])))) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_14))));
                    arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned short)22097))))));
                }
                arr_11 [i_0] [i_0] = ((/* implicit */short) (+((~(((/* implicit */int) var_8))))));
            }
            for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) ((signed char) var_2));
                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1] [4])))))));
            }
            for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (((((~(var_17))) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1] [i_0] [i_0])))) + (147))) - (37))))))));
                var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)118)) && (((/* implicit */_Bool) var_6))))))))));
            }
        }
    }
    var_27 = ((/* implicit */short) var_6);
}
