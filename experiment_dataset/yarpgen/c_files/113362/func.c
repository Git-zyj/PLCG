/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113362
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_17 [i_1] [i_3] [i_2] [i_1] = min((4003183253U), (((/* implicit */unsigned int) 570302949)));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 470098179)) > (((((/* implicit */_Bool) 137430564864ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))) : (11912928765275947230ULL))))) ? (((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_3] [i_4])) : (6882731869502651719ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_0 + 1]))))) : (arr_0 [i_0])));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) (unsigned char)184))) : (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned short)65535)) : (-1796972011))))), (min((-1506496751), (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (6326574752249910641ULL)));
}
