/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180081
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) ((short) (~(7215573286148424254ULL))))))))));
    var_12 = ((/* implicit */short) var_7);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (max((var_2), (var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13528)) | (((/* implicit */int) (unsigned short)15550))))) ? (((unsigned int) var_3)) : (((((/* implicit */_Bool) 7215573286148424231ULL)) ? (var_4) : (((/* implicit */unsigned int) var_5))))))) : (min((((/* implicit */long long int) var_2)), (((long long int) var_2))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) max((11231170787561127362ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 2] [i_0]))))) ? (((/* implicit */int) max(((unsigned short)15550), (((/* implicit */unsigned short) arr_1 [i_0] [i_2]))))) : (((/* implicit */int) max((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_2])))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_0 + 2])))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((arr_9 [i_4 + 2] [18] [i_2] [i_3] [i_4 - 1]), (arr_9 [i_1] [i_1] [i_1] [(short)17] [3]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) 454709724)) : (arr_6 [i_0 - 1] [i_0 - 1] [(unsigned short)10])))))))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) min((var_1), (((/* implicit */unsigned long long int) arr_0 [16ULL])))))), (max((arr_8 [i_3] [i_3] [i_3] [i_2]), (arr_8 [i_3] [i_3] [i_3] [i_2]))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                    var_16 = ((/* implicit */short) (unsigned char)86);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */short) ((((arr_14 [i_6 - 3]) ? (max((11231170787561127379ULL), (((/* implicit */unsigned long long int) (unsigned short)49985)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_5] [i_6]))))))) & (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_16 [i_5] [i_5] [(unsigned char)22])) ? (1604634410) : (((/* implicit */int) (signed char)17)))), (((((/* implicit */_Bool) (unsigned short)55044)) ? (((/* implicit */int) arr_16 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_5] [i_6 - 1])))))))));
                var_18 -= ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)23)), (min((((/* implicit */int) ((((/* implicit */int) arr_17 [i_6])) != (((/* implicit */int) (unsigned short)49965))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) (signed char)22))))))));
                var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_6 + 3] [i_6 - 2])) ? (((/* implicit */int) arr_15 [i_6] [i_6 + 1])) : (-2147483646))), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6 - 1])) && (((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6 + 1])))))));
                arr_18 [i_5] [(_Bool)0] &= (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (min((7215573286148424247ULL), (((/* implicit */unsigned long long int) arr_14 [i_6]))))))));
            }
        } 
    } 
}
