/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132142
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
    var_18 = ((/* implicit */_Bool) (-((~((~(-1547394086)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_19 = arr_2 [i_0 + 1];
        var_20 = ((int) arr_1 [i_0]);
        var_21 += (((+(1608698709))) * (max((-1547394086), ((-(((/* implicit */int) arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+((~(arr_0 [i_0 - 2])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        for (short i_2 = 3; i_2 < 12; i_2 += 1) 
        {
            {
                var_22 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 18430961125822731760ULL)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 2]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_19 [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_18 [i_1 - 2] [i_2])) ? (-1547394086) : (1642659804))));
                                arr_20 [i_1] [i_2] [i_2] [i_4] [i_5] [i_2] = arr_1 [i_5];
                                arr_21 [i_2] [i_3] [(short)11] [i_5] = ((/* implicit */unsigned short) ((unsigned char) var_3));
                                var_23 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) 
                    {
                        arr_24 [i_6] [i_2] [6LL] = ((/* implicit */unsigned short) ((signed char) arr_14 [i_2] [(signed char)2] [i_2] [(_Bool)1]));
                        var_24 ^= ((/* implicit */int) (+(arr_0 [i_1 - 3])));
                        var_25 = ((/* implicit */int) ((unsigned int) arr_8 [i_1 - 1] [i_1]));
                        arr_25 [(_Bool)1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((short) arr_15 [i_1 - 3] [i_2 + 1] [(unsigned short)4] [(unsigned short)4] [i_6 - 2] [i_6]));
                        var_26 += ((/* implicit */unsigned char) (signed char)-92);
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) arr_31 [i_2]);
                            var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5))))))), (max((max((((/* implicit */unsigned long long int) 1547394086)), (4ULL))), (((/* implicit */unsigned long long int) var_5))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
}
