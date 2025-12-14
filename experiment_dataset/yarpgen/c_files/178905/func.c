/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178905
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
    var_20 = (!(((/* implicit */_Bool) var_9)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0 - 3] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-5655)) - (((/* implicit */int) (unsigned char)171))));
                            arr_10 [i_0] [i_0] [11U] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)45537))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_2 [i_0] [i_0 - 3] [(signed char)2]), (arr_2 [i_0] [i_0 - 1] [(unsigned char)9])))), (var_2)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 3; i_4 < 22; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                arr_16 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_13 [i_5]) : (((/* implicit */int) (unsigned char)108))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)19992))))), (max((((/* implicit */unsigned int) (signed char)85)), (1507871983U)))))) ? (((/* implicit */long long int) (~(arr_13 [i_5])))) : (max((((/* implicit */long long int) min((((/* implicit */int) (signed char)52)), (2094427929)))), (arr_14 [i_4 + 2] [i_4 + 2] [i_4 - 1]))))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) && (((/* implicit */_Bool) ((unsigned long long int) max((var_6), (((/* implicit */int) (unsigned short)53604))))))));
}
