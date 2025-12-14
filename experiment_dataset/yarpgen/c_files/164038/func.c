/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164038
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) 7847194680656384638LL);
                                arr_13 [i_0] [i_1] [(unsigned char)2] [i_3] [i_1] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) ((7847194680656384638LL) >= (-1518817224076379484LL)))), (((((/* implicit */_Bool) arr_3 [i_4])) ? (3767326697247968853ULL) : (3767326697247968876ULL)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [0ULL] [15LL] = arr_7 [i_0] [4] [i_1] [i_1] [4];
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (int i_6 = 4; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_0] [(signed char)4] [i_0] = ((((/* implicit */int) ((-7847194680656384633LL) <= (min((((/* implicit */long long int) var_14)), (7962009902653335087LL)))))) ^ (((/* implicit */int) var_18)));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) ((arr_18 [i_1] [i_1]) ? (var_8) : (7847194680656384635LL))))))) ? (((7847194680656384625LL) << (((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_2 + 1] [i_2 + 1] [i_6 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7847194680656384632LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_6))) & (-292179098))))));
}
