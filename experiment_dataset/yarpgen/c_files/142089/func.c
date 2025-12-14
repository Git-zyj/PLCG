/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142089
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (-(9007199254740991LL))))) ? (((/* implicit */long long int) -2045271734)) : ((+((-(9007199254740979LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) (~(arr_4 [i_0] [i_2 - 2])));
                    var_22 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) ((signed char) (signed char)-1)))));
                }
                var_23 = ((/* implicit */long long int) (!(((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) * (-9007199254740991LL))) < (((/* implicit */long long int) ((int) 3717510223096611445ULL)))))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [3U]))))) >= (((/* implicit */int) ((unsigned short) arr_3 [i_0 + 3]))));
                    var_25 = ((/* implicit */signed char) (+((-(arr_4 [i_0] [i_0])))));
                }
                arr_11 [i_1] [i_1] [i_0] = ((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 1] [i_1] [11U]);
                arr_12 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) arr_3 [i_0 + 1])) + (((/* implicit */int) (short)8))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) (short)-3906)) ? (((/* implicit */int) (short)-39)) : (((/* implicit */int) (short)26266))))) ? (var_0) : (((((/* implicit */long long int) (-(0U)))) - ((+(var_8)))))));
}
