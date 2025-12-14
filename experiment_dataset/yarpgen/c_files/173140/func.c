/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173140
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 &= ((/* implicit */unsigned int) min(((~(min((8983764339490715886ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])))))), (((/* implicit */unsigned long long int) 4237737027U))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((unsigned int) (~(var_8))));
                        var_21 = arr_9 [i_3] [i_2] [i_1 - 1] [(unsigned short)22];
                        var_22 = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_3]))))))));
                        var_23 = ((/* implicit */unsigned long long int) (((+(min((-157628503507359694LL), (((/* implicit */long long int) (_Bool)1)))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(unsigned char)1] [i_2] [(unsigned char)1] [i_0])))))))))));
                        arr_11 [i_1] [i_1 - 1] [i_2] [i_3] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 16777215)), (-2321881657569273751LL)))), (var_5))), (max((((/* implicit */unsigned long long int) 1490961596U)), (max((var_5), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    }
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1] [i_2] [i_1 + 3]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 532477958863358090LL)))))));
                }
            } 
        } 
        var_25 = (_Bool)0;
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (var_8))))));
    }
    var_27 = ((_Bool) var_2);
    var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (2321881657569273758LL)));
}
