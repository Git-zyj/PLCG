/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169248
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
    var_12 = ((/* implicit */long long int) (!((_Bool)1)));
    var_13 -= ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) var_11)) / (var_10))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) arr_5 [i_1])))))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) % (((/* implicit */int) arr_5 [i_1]))))));
                    arr_10 [i_1] [i_1 + 3] [i_2] [i_1 + 3] = ((/* implicit */short) arr_0 [i_0]);
                    var_14 = (+(var_9));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                                var_15 = ((/* implicit */long long int) (_Bool)1);
                                var_16 = ((/* implicit */unsigned char) (~((~((-(133955584)))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_18 -= min((max((((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_10))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))))) ? (max(((+(((/* implicit */int) var_5)))), ((+(((/* implicit */int) var_8)))))) : ((+(((var_8) ? (var_2) : (((/* implicit */int) arr_3 [i_0])))))))))));
        var_20 = ((((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned char)0), ((unsigned char)250))))))) - (min((((/* implicit */unsigned int) (signed char)-11)), (((var_11) << (((134217727U) - (134217705U))))))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != ((-(var_1)))));
}
