/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114316
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3183765673U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16624))) : (3183765671U))) > (arr_2 [i_1] [i_1] [i_2])))), (max((1111201640U), (((/* implicit */unsigned int) 20))))));
                    var_20 |= ((/* implicit */signed char) max(((-(arr_4 [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-17585))))))))));
                    arr_8 [i_0] [i_0] [i_0] [10ULL] = ((/* implicit */_Bool) var_15);
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) (+(arr_2 [i_0] [(_Bool)1] [i_2])));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_2);
    var_22 = ((/* implicit */short) ((1) << (((1053537030) - (1053537013)))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            {
                var_23 -= ((/* implicit */int) max(((short)17576), (((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [5U] [(signed char)6] [i_3])))))));
                arr_16 [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (1048572U)));
                var_24 = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */int) arr_14 [i_3] [19ULL] [i_3])) <= (((/* implicit */int) (short)-32749))))), ((+(((/* implicit */int) var_18)))))) >= ((-(-27)))));
                arr_17 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) arr_11 [i_4 + 2]);
            }
        } 
    } 
}
