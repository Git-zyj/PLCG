/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135449
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
    var_18 = ((/* implicit */unsigned char) ((long long int) var_8));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) var_16))) != ((+(((/* implicit */int) (unsigned short)57859)))))) ? (((long long int) arr_8 [i_0] [i_0] [i_2])) : (((/* implicit */long long int) (+(max((arr_8 [i_0] [(unsigned short)17] [i_2]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_0])) : (arr_7 [6ULL] [i_0] [6ULL] [i_2]))) != (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [(signed char)3])) ? (((arr_4 [i_0] [i_1] [i_1]) ? (875880610U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))) : (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) > (arr_3 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_3]))))) / (arr_17 [i_4] [i_3])));
                                arr_24 [i_3] = max((min((max((arr_17 [i_3] [i_4]), (((/* implicit */long long int) 3419086686U)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)32739))))))), (((/* implicit */long long int) arr_14 [i_3])));
                                var_21 = ((/* implicit */unsigned char) (_Bool)0);
                            }
                        } 
                    } 
                } 
                var_22 = ((unsigned char) ((unsigned short) 64512U));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) 216172782113783808LL);
}
