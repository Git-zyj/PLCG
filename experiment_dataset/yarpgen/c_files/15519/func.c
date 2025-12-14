/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15519
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
    var_19 |= ((/* implicit */unsigned long long int) ((_Bool) var_17));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)1023))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((var_0) << ((((~(10453135313253734695ULL))) - (7993608760455816883ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))))));
    var_21 = ((/* implicit */unsigned char) 35184372088831LL);
    var_22 = ((/* implicit */int) (unsigned short)18);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [(unsigned char)5] = ((/* implicit */unsigned char) var_15);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned short) ((unsigned char) 7993608760455816921ULL));
                        arr_12 [3LL] [3LL] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */int) (_Bool)1);
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (131070)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_3]))) | (-5082890132700958486LL))) : (arr_3 [i_0] [i_3] [i_2]));
                    }
                }
            } 
        } 
    } 
}
