/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131483
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (short)12573);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_3 [i_1] [i_3] [i_4 + 1]))));
                                arr_14 [i_4] [i_3] [(short)9] [i_0] [i_0] = min((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_2 [i_4 - 1])), (arr_7 [2LL] [i_3] [i_4])))), (max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)51))))), (0LL))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) min(((short)-2542), (((/* implicit */short) (_Bool)0))))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (signed char)125))))))))));
                    arr_15 [1U] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)155)) >= (min((((/* implicit */int) (signed char)-120)), (-1)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((((min((var_2), (((/* implicit */long long int) var_16)))) + (9223372036854775807LL))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [(signed char)1] [(signed char)1] [i_5] [i_2] [(signed char)1] [i_0])), ((unsigned short)7638)))) - (7610))))) <= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22633)))))));
                                var_22 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) (unsigned short)30060))))), (((arr_11 [4U] [4U] [i_2] [i_5] [i_6] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45555))) : (15103778965135270842ULL))))), (((/* implicit */unsigned long long int) -636460396665417209LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) min((var_23), (min((min((max((((/* implicit */long long int) (_Bool)0)), (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (var_10)))))), ((~((((_Bool)0) ? (((/* implicit */long long int) var_16)) : (-9223372036854775784LL)))))))));
}
