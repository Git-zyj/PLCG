/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113734
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
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (2945006928U)))) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65532)))))));
                arr_4 [i_0] [i_1] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)31124)) ? (var_18) : (((/* implicit */unsigned long long int) var_4)))), (((unsigned long long int) 3370427189U))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [(unsigned short)4]))))) : (max((((/* implicit */long long int) (short)0)), (8642258525450018274LL)))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) max((var_7), (((/* implicit */short) var_6))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-((~(1970389675U))))))));
                            arr_9 [i_0] [i_0] [(_Bool)1] [i_1] [i_1] [3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((2324577620U) - (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_12))))))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2324577621U)) ^ (((((/* implicit */_Bool) var_8)) ? (4611686018427387903LL) : (((/* implicit */long long int) var_0))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (2324577628U) : (2324577620U))))) : (((/* implicit */int) var_3)))))));
                            var_23 ^= ((/* implicit */short) max((min((((/* implicit */unsigned int) var_10)), (1970389675U))), (((/* implicit */unsigned int) var_2))));
                            arr_10 [i_0] [i_1] [i_0] [(unsigned char)14] [(signed char)19] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 9262223707568048646ULL)))));
                        }
                    } 
                } 
                var_24 -= max(((-(((/* implicit */int) var_15)))), ((+((((_Bool)0) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (14053447966754398910ULL)))));
    var_26 = ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_10))));
}
