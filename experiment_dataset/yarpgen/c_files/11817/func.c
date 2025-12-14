/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11817
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
    var_20 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [8U])) | (((/* implicit */int) min((((short) var_7)), (((/* implicit */short) (!(var_14)))))))));
                            var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0] [i_3])), (arr_10 [i_0] [i_0 + 1] [i_0] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_2])))) : (64403453064572039LL)))), (8091742608561641252ULL)));
                            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (~(min((((/* implicit */int) ((_Bool) var_8))), (max((-1274150227), (((/* implicit */int) (_Bool)1))))))));
                            var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_19)), ((unsigned short)4042))))))) ? (var_3) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) arr_7 [i_3] [i_2 + 1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)254)))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_1 + 1]))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_11);
}
