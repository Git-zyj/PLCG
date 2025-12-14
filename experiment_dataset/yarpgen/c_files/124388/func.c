/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124388
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)25778))))))) ? (((/* implicit */int) (unsigned short)25785)) : (((/* implicit */int) (unsigned short)25778))));
                            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_13))))))));
                            var_19 = ((/* implicit */long long int) max(((unsigned short)25778), (((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                            arr_8 [i_0] [i_1] [(unsigned short)3] [i_3] = ((/* implicit */int) (unsigned char)167);
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 3]))))) ? (((/* implicit */int) (unsigned char)102)) : ((+(((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 3] [i_3] [i_3] [i_3]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_17 [(unsigned char)3] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_16))) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                                var_21 = ((/* implicit */unsigned char) (+(max((var_12), (arr_12 [8U] [(unsigned char)0] [10ULL] [10ULL] [i_0] [11])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_2 [i_4] [i_1])) && (((/* implicit */_Bool) var_7)))), (arr_9 [i_0] [i_1] [i_0]))), ((!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) arr_6 [i_0] [(unsigned char)2] [i_1] [i_1] [i_4]))))))))))));
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) + (2789648391U)));
                    var_24 = ((/* implicit */signed char) min((max((var_10), (8U))), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_7] [i_0]))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((signed char) (unsigned char)88));
    var_26 &= ((/* implicit */unsigned char) var_11);
}
