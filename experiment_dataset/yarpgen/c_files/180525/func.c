/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180525
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_1)))) ? (((/* implicit */int) ((_Bool) (short)-11615))) : (((/* implicit */int) (unsigned char)107))))));
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) / (236771758U)))) ? (((((/* implicit */int) (short)7693)) | (((/* implicit */int) (unsigned char)41)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)55))))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) ((_Bool) arr_2 [i_2]));
                            var_14 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_3] [i_2 - 2] [i_2] [i_0])))) : (((2485289662677434360LL) | (((/* implicit */long long int) ((/* implicit */int) (short)31619)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) (signed char)24);
            }
        } 
    } 
    var_16 = 753014460U;
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (signed char)55)))))) % (var_9)));
    var_18 = (!(var_3));
    var_19 = ((/* implicit */unsigned char) max((((short) min((3459899626U), (2271572225U)))), (((/* implicit */short) (_Bool)1))));
}
