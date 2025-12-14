/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160541
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */short) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))))), (arr_6 [i_0 - 1] [i_0 + 2] [(signed char)12] [i_0 - 1]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))), (arr_5 [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(unsigned short)9] [i_3] [i_4] = ((/* implicit */signed char) -1724319291);
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) % (var_8)))) ? (max((1234997491), (((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned short)28794))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) & ((-(-2LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((min((((/* implicit */short) (unsigned char)152)), (arr_10 [i_0] [i_1] [i_0] [i_2] [i_1] [i_4]))), (arr_0 [i_3])))))));
                                var_22 = ((/* implicit */unsigned int) max((((signed char) var_4)), (((/* implicit */signed char) (!(var_18))))));
                                arr_14 [i_0] [i_2] [i_2] = ((((/* implicit */int) (short)32766)) < (604209156));
                                var_23 = ((/* implicit */unsigned short) arr_12 [i_0 - 1] [i_3 + 1] [4] [(short)2] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) ((((-1724319298) + (2147483647))) << (((/* implicit */int) (short)0)))))));
                                var_25 = ((/* implicit */unsigned char) (-((-(arr_1 [i_0 - 1] [i_0 - 1])))));
                                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? (max((arr_2 [i_1]), (arr_2 [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) ^ (192079713))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) var_18);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        var_28 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_13)))))) : ((-(((-1234997503) % (20)))))));
        arr_22 [i_7] = arr_4 [i_7];
    }
    var_29 = var_9;
}
