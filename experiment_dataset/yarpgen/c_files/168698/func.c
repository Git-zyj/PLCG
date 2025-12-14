/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168698
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
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [0U] [i_1] [i_1] [0U] = ((/* implicit */unsigned int) ((unsigned char) max((arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 2]), (min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned short) (short)17046)))))));
                    arr_9 [i_1] [i_1] [20U] = ((/* implicit */long long int) (unsigned short)4414);
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_1] [i_1] [(signed char)7] [i_2])), ((unsigned short)61121))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_10);
    var_18 = ((/* implicit */unsigned int) ((((var_12) < (((/* implicit */int) var_5)))) ? (((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_11))), (var_15)))) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            {
                arr_17 [i_4] = ((/* implicit */short) (signed char)-42);
                arr_18 [i_3] [i_4] = ((/* implicit */unsigned short) min((((short) (signed char)-127)), ((short)19867)));
                arr_19 [i_4 - 1] = ((/* implicit */unsigned char) ((max((((((/* implicit */int) arr_7 [(unsigned char)17] [(unsigned short)20] [i_3])) & (((/* implicit */int) arr_4 [13U] [13U])))), (((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (((/* implicit */int) arr_5 [i_3] [i_4 - 1] [i_4] [i_4])) : (((/* implicit */int) arr_2 [i_3] [i_3])))))) & ((+(((/* implicit */int) arr_6 [i_3] [i_4 - 1]))))));
                var_19 += ((/* implicit */unsigned char) arr_3 [i_3] [i_3] [i_4]);
            }
        } 
    } 
}
