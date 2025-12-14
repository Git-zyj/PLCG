/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147338
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_0]))))));
                arr_6 [i_0] = ((/* implicit */int) arr_3 [i_1] [i_0]);
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 6; i_2 += 1) 
                {
                    arr_9 [i_1] [i_2] = ((((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) max(((unsigned char)217), (((/* implicit */unsigned char) (signed char)106))))))) ? (((unsigned int) (unsigned char)105)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-3530)), (arr_4 [i_0] [i_0])))) || (((((/* implicit */int) (unsigned short)23800)) <= (((/* implicit */int) arr_5 [i_0] [(signed char)1])))))))));
                    arr_10 [(unsigned char)5] [i_1] [(signed char)5] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_0])), ((short)3))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_3 [i_2 - 1] [i_1]))));
                }
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((arr_4 [i_0] [i_1]), (((arr_4 [i_1] [i_0]) | (((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_3))))))))))));
                var_16 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_8 [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            for (unsigned char i_5 = 4; i_5 < 11; i_5 += 1) 
            {
                {
                    arr_21 [i_4] [i_4 + 3] [i_4] [i_3] = ((/* implicit */unsigned char) var_12);
                    var_18 = ((/* implicit */long long int) min((var_18), ((-(((((/* implicit */long long int) var_9)) | (arr_17 [8LL] [i_4] [i_5])))))));
                    arr_22 [(_Bool)1] [11ULL] [(signed char)3] [i_3] = ((/* implicit */long long int) arr_13 [i_5]);
                }
            } 
        } 
    } 
}
