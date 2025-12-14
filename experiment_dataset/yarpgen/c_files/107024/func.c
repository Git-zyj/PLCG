/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107024
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
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_18 = ((/* implicit */signed char) var_5);
                    var_19 = ((/* implicit */unsigned short) ((var_6) & (arr_0 [i_2] [i_0])));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (short i_5 = 3; i_5 < 12; i_5 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) arr_9 [i_3] [i_4]);
                    arr_17 [i_5] [11ULL] [3LL] = ((/* implicit */unsigned int) (+((-2147483647 - 1))));
                    var_21 = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) min((var_2), (var_2)))))) - (max((max((arr_3 [22ULL]), (var_1))), ((((-2147483647 - 1)) | ((-2147483647 - 1))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_2))))), (var_3)))) != ((+(((/* implicit */int) var_9))))));
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_7)), (var_11)));
}
