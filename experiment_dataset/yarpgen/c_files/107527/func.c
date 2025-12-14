/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107527
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [16ULL] [i_1 - 2] [(short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]))));
                        arr_13 [i_0] [i_3] [(unsigned short)9] [i_3] [i_1] = ((/* implicit */_Bool) max((-1661807615539049490LL), (((/* implicit */long long int) max((((((/* implicit */int) arr_7 [i_0] [(short)4] [i_1])) | (arr_5 [i_1] [i_2] [3]))), (((/* implicit */int) arr_7 [i_2 - 2] [i_1] [i_0])))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((-541473305), (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_4])))) : (((/* implicit */int) arr_7 [i_1 - 1] [11LL] [i_2 - 3]))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))));
                        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)112))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_1)) * ((+((~(((/* implicit */int) var_8))))))));
}
