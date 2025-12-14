/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116622
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [10ULL] [8U] [10LL] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_1 [(short)10])))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (short)32767)))))))) - (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32767))))));
                    var_20 = ((/* implicit */int) (short)32767);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((((((/* implicit */int) (short)32754)) <= (((/* implicit */int) (short)32765)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (var_5))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) (short)-32759)) + (32787)))))))) == (((/* implicit */unsigned int) (+(arr_3 [i_0 - 1]))))));
                        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [2LL] [i_3 - 1] [i_2 + 2] [i_0] [(short)9] [i_2])))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        arr_14 [(_Bool)1] [i_1] [i_2] [4U] = ((/* implicit */unsigned long long int) var_16);
                        var_23 = ((/* implicit */unsigned char) var_14);
                        var_24 *= ((/* implicit */unsigned char) arr_0 [i_0]);
                    }
                    var_25 -= ((/* implicit */short) ((unsigned char) max((arr_8 [i_0 + 3] [i_0 + 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */int) var_10)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) var_17)) | (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_18)) : (var_4))))));
}
