/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165146
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
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) 1270002688916844921LL))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = max((((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) : (0U)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44601)) ? (((/* implicit */long long int) -1093354145)) : (arr_3 [i_1]))))))));
                arr_6 [(signed char)5] [i_1] [14] = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_0]));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                arr_8 [i_0] [i_1 - 2] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    var_15 = -1261240963;
                    arr_19 [i_2 - 2] [3ULL] [3ULL] = ((/* implicit */short) min((((/* implicit */unsigned char) arr_12 [i_4] [i_3] [i_2 - 3])), (arr_11 [i_4] [i_2])));
                }
            } 
        } 
    } 
    var_16 = 15241102382476375443ULL;
}
