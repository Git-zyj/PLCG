/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173955
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) : ((+(max((2462686131U), (170032107U)))))));
                    arr_10 [(unsigned short)5] [i_0] [i_2] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (!((_Bool)1)))))) ^ (((arr_4 [i_0]) ^ (arr_4 [i_0])))));
                    arr_11 [i_0] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 2])) : (arr_4 [i_0])))) ? (((/* implicit */int) (unsigned char)24)) : (((((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 3])) & (arr_4 [i_0])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!((!((_Bool)1)))))) | (((((/* implicit */int) var_8)) / ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (384288699)))))));
    var_18 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_24 [i_5] [i_4] [i_5] [(signed char)7] = ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_5]))))) && (((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (short)-2656)) : (((/* implicit */int) arr_2 [i_4]))))));
                            var_19 = ((/* implicit */short) max(((_Bool)1), ((_Bool)0)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) -1451735506)) : (arr_18 [i_3] [i_4]))) >= (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */short) (_Bool)1)))))))))));
            }
        } 
    } 
}
