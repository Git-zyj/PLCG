/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117230
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
    var_19 = ((/* implicit */long long int) min((((unsigned long long int) min((1422497009197384450LL), (((/* implicit */long long int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_11))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)12874)) | (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 2]))) ? (((((/* implicit */_Bool) (short)-30377)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1040275136U)))) : (((-5824526548859158566LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_1 - 2] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-33))))))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((int) max((1040275136U), (var_0))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_1] [i_3])), (min(((unsigned short)20695), ((unsigned short)12874)))))) ? (((/* implicit */unsigned int) -1055839999)) : (((unsigned int) max((((/* implicit */unsigned long long int) var_7)), (620175853694415213ULL))))));
                    }
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32235))) <= (3580367040U))))));
                }
            } 
        } 
    } 
}
