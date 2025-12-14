/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180332
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
    for (int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
                            {
                                var_12 = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [(_Bool)1] [(unsigned short)1] [i_4]);
                                arr_12 [i_0] [(_Bool)0] |= ((/* implicit */unsigned int) ((arr_9 [i_0]) > (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_9 [i_4 - 1])))) ? (min((((/* implicit */long long int) arr_7 [i_1])), (8024102380637706343LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 2] [i_0 - 4])))))));
                                arr_13 [i_0 - 2] [0] [i_0 - 2] [(unsigned char)18] [0] [12LL] &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1])) > (-587361511)))) > (((/* implicit */int) (_Bool)1))));
                                var_13 = ((/* implicit */unsigned int) ((unsigned short) arr_6 [i_4] [(_Bool)1] [(_Bool)1] [i_3]));
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 2) /* same iter space */
                            {
                                var_14 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (arr_9 [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [i_0] [i_3] [i_3])))))));
                                var_15 -= ((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0)))), (min((arr_8 [i_0] [6U] [i_0] [(_Bool)1] [i_0 + 2] [i_0 - 3]), (arr_8 [i_0] [(_Bool)1] [(_Bool)1] [2ULL] [i_0 + 2] [i_0 - 3])))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_11))));
                                var_17 = ((/* implicit */int) var_3);
                                arr_16 [i_0] [i_2] [i_0] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) min(((unsigned short)65483), (((/* implicit */unsigned short) (_Bool)1))));
                            }
                            arr_17 [i_0] [i_0] [(unsigned char)12] [i_2] [i_3] [i_3] = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                var_18 = ((((0U) & (var_4))) != (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_1 [(unsigned char)4]) == (arr_10 [(signed char)13] [i_1] [i_1] [i_0])))) / (((/* implicit */int) (unsigned short)26961))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (~(var_4)));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) ((long long int) var_5))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (8318085679427340319ULL))))))))));
    var_21 = var_7;
}
