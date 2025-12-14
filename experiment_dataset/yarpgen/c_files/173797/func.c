/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173797
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
    var_14 = var_2;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (min((2011078118764912834ULL), (var_10)))));
                arr_5 [11LL] [11LL] [i_1] = ((/* implicit */unsigned int) (+(2147483647)));
                var_16 = ((/* implicit */_Bool) (~(((arr_3 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (11507655804233307674ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_6);
                            var_17 += ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (int i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                {
                    arr_18 [i_4] = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), ((unsigned char)33)))) ? (max((max((((/* implicit */unsigned long long int) var_2)), (12090219860847756985ULL))), ((-(3315499468560114002ULL))))) : (((/* implicit */unsigned long long int) (+(-3098165039452185351LL)))));
                    arr_19 [i_4] [i_5 - 2] [i_4] [i_6 + 1] = ((/* implicit */int) ((_Bool) arr_15 [i_4] [i_6 - 2] [i_5]));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_25 [i_4] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) min(((unsigned short)19083), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 15131244605149437614ULL)) && (((/* implicit */_Bool) var_5)))))));
                                var_18 = ((/* implicit */unsigned long long int) arr_22 [i_4] [i_5 + 1] [i_6] [i_7] [i_8] [i_6 - 1] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((508), ((-2147483647 - 1))));
                                arr_30 [i_4] [i_4] [i_5 - 2] [i_6 - 1] [i_9] [i_9] [i_10 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (var_11)))) ? (((/* implicit */unsigned long long int) ((long long int) 2717191143839032712LL))) : (((6356524212861794636ULL) / (((/* implicit */unsigned long long int) arr_29 [i_4] [i_5 - 2] [i_10 - 1]))))));
                                arr_31 [i_9 + 1] [i_5] [i_9 - 1] [13ULL] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (7238851591138634794ULL))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-16945))))))))));
                                var_20 *= ((/* implicit */unsigned int) (unsigned char)33);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
