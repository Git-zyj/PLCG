/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118890
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
    var_11 = ((/* implicit */unsigned long long int) (-((+(var_3)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [0U] [i_1] [i_1] = ((int) arr_4 [i_1] [i_1] [i_0]);
                var_12 *= ((/* implicit */int) ((_Bool) ((arr_1 [i_0]) / (var_3))));
                arr_6 [i_0] [i_1] [i_1] = var_5;
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (-(((unsigned int) 2305772640469516288ULL)))))));
                arr_7 [i_1] [4U] [4U] = ((/* implicit */int) min((arr_2 [9ULL]), (7105000507020006537ULL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            arr_13 [8LL] |= var_0;
            arr_14 [i_2] [1LL] [i_2] = ((/* implicit */unsigned int) ((_Bool) ((16140971433240035327ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3776))))));
            var_14 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 - 3] [11U])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [9LL] [i_3])) * (((/* implicit */int) (short)-32761))))) : (((((/* implicit */unsigned int) arr_0 [i_2])) * (var_2)))))) == (arr_2 [i_2]));
        }
        var_15 = ((/* implicit */unsigned short) arr_3 [i_2] [i_2 - 1] [i_2 - 3]);
        arr_15 [i_2] = ((/* implicit */unsigned int) min((((arr_2 [i_2 - 3]) & (((/* implicit */unsigned long long int) arr_8 [i_2 - 2])))), (max((((/* implicit */unsigned long long int) arr_8 [i_2 - 1])), (16140971433240035327ULL)))));
    }
    var_16 = ((/* implicit */int) var_8);
}
