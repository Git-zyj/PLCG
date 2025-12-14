/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165863
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_10 = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned short) max(((-((~(((/* implicit */int) var_8)))))), (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))));
                }
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        {
                            arr_13 [3] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((_Bool) min((arr_12 [i_4] [14ULL] [i_4 + 2] [i_4]), (arr_12 [(_Bool)1] [i_4 + 1] [i_4 - 1] [i_0]))));
                            arr_14 [i_3] [i_1 - 1] [i_3] [i_1 - 1] [i_3] = ((/* implicit */signed char) ((var_6) ? (((((/* implicit */_Bool) (short)-4370)) ? (-7564478198618950434LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18349))))) : ((+(var_4)))));
                        }
                    } 
                } 
                var_11 = ((/* implicit */unsigned char) (!(var_3)));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((-90885003), (((/* implicit */int) (signed char)105))));
                var_12 = ((/* implicit */short) ((((/* implicit */int) var_7)) > (((/* implicit */int) (((-(arr_8 [i_0] [i_0] [(unsigned char)12]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
}
