/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146221
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
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) (-(min((((11976104432980440979ULL) << (((11976104432980440979ULL) - (11976104432980440963ULL))))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_3))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_0 + 1] [1U] |= ((/* implicit */unsigned short) (_Bool)1);
            var_13 = ((/* implicit */unsigned long long int) (+(arr_3 [i_0 + 2] [i_1 + 1])));
        }
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            arr_9 [i_0 - 1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */short) var_6)), (((short) arr_7 [i_0 + 2] [i_2 - 1] [i_2 - 1]))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 1981172310)), (((11976104432980441004ULL) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0])))))))));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_7 [i_2 - 1] [(signed char)17] [i_4]))))))) ? ((((+(var_9))) % ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_4]))))))));
                        var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 2])) ? (((/* implicit */long long int) ((arr_14 [i_0] [i_2] [i_2] [19] [19]) - ((-(((/* implicit */int) arr_6 [i_0]))))))) : (-3848955645021474651LL)));
                    }
                } 
            } 
        }
    }
    var_17 = (-(((/* implicit */int) var_1)));
}
