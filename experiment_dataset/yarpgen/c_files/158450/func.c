/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158450
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_0 [i_1]);
                arr_6 [i_0] [i_0] [3U] = ((min(((-(arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 4] [i_1])))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))));
                arr_7 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (-(arr_0 [i_1])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 4; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3]), (arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3])))), (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3])) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_20 [i_2 - 1] [i_2 - 1] [i_4] [i_5 - 1] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) max((arr_17 [i_2 + 1] [i_3] [i_5] [i_5 + 1] [i_2 + 1]), ((unsigned char)255)))) < (((/* implicit */int) arr_3 [i_2] [i_3] [i_6])))))));
                                var_13 = ((/* implicit */unsigned int) ((short) -7184896423179691647LL));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_2] &= ((/* implicit */unsigned int) 10117555855560466195ULL);
    }
}
