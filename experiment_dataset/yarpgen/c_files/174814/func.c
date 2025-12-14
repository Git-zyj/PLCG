/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174814
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) 9117696963928294727ULL);
                            arr_14 [i_3] [(unsigned short)5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((arr_11 [i_2 - 1] [i_2 + 1]) / (arr_11 [i_2 - 1] [i_2]))));
                            arr_15 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0])) ? (arr_11 [i_0 - 1] [i_0 - 1]) : (arr_11 [i_0 - 3] [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) var_2)), (arr_1 [i_4]))))) ? (max((min((((/* implicit */unsigned long long int) 1297225740U)), (var_8))), (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_5)) : (arr_1 [i_6])))))) : (((/* implicit */unsigned long long int) (((~(arr_16 [16] [16] [12] [i_4]))) + (arr_20 [i_5 - 1]))))));
                                var_13 ^= (unsigned short)57909;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) var_5)), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (unsigned short)7626)) - (7611)))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7619)) - (((/* implicit */int) var_7)))))))))))));
}
