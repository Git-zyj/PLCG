/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110640
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_18))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 4622862738658388594ULL))) << (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) arr_3 [i_0]);
                            arr_11 [(_Bool)1] [4U] [i_2] [i_0] [(signed char)15] [(signed char)15] = ((((/* implicit */_Bool) ((var_16) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 + 3] [i_0])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0])) > (((/* implicit */int) arr_8 [(unsigned short)12] [(_Bool)1])))))))) : (((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) 1022988950)))));
                        }
                    } 
                } 
                arr_12 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_18))) ^ (((((var_16) >> (((((/* implicit */int) arr_6 [i_0])) - (30959))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_9 [(unsigned char)5] [i_0])) ^ (((/* implicit */int) (_Bool)0)))))))))) : (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_18))) ^ (((((var_16) >> (((((((/* implicit */int) arr_6 [i_0])) - (30959))) + (4134))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_9 [(unsigned char)5] [i_0])) ^ (((/* implicit */int) (_Bool)0))))))))));
            }
        } 
    } 
}
