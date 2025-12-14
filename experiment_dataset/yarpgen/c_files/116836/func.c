/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116836
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
    var_18 = ((/* implicit */unsigned char) ((short) (signed char)65));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)3] = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((unsigned char) (unsigned short)64145))), (((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4568)))))) >= (min((((/* implicit */int) arr_2 [i_0] [(signed char)5] [i_0])), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_19 -= ((/* implicit */signed char) (((_Bool)1) ? (505423979719189221LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2 + 1]))) * (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3160377791U)))));
                }
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_8 [i_0] [i_1])))))) != ((-(4233494959U)))));
                arr_10 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_2)))))) >= ((~(1134589503U)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_10))))))));
            }
        } 
    } 
}
