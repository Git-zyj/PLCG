/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143719
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
    var_20 = var_16;
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-11131)) | (((/* implicit */int) var_8))))))) || (((/* implicit */_Bool) var_18)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_7 [(_Bool)1] = ((/* implicit */short) var_4);
                    arr_8 [0U] = ((/* implicit */signed char) min(((short)-11395), (((/* implicit */short) (signed char)-67))));
                    arr_9 [i_0] [(short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-11140))) % ((+(var_11)))))) || ((!(((/* implicit */_Bool) var_18))))));
                }
                arr_10 [i_0] [13ULL] [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_0 [(signed char)9])) == (((/* implicit */int) arr_0 [i_0])))));
                var_22 += ((/* implicit */_Bool) arr_0 [i_0 + 1]);
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((arr_1 [i_1 + 3]) >= (((/* implicit */int) (signed char)-107)))))));
                var_24 ^= ((/* implicit */unsigned short) ((-1412444959) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [5ULL] [(short)13]))))) ? (((/* implicit */int) var_15)) : (arr_1 [(unsigned char)7])))));
            }
        } 
    } 
}
