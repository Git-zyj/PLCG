/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171477
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((6363612161482601549ULL) == (((/* implicit */unsigned long long int) 1655751942U))))), (arr_5 [(signed char)9] [(unsigned short)2] [i_2])))) : ((~(((/* implicit */int) arr_0 [i_1]))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_2 [22]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            {
                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) ((unsigned short) (short)-32764)));
                arr_14 [i_3] [i_3] = ((((/* implicit */int) (unsigned char)181)) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)32760))))));
            }
        } 
    } 
}
