/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130064
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_19 *= ((/* implicit */signed char) ((unsigned long long int) min((7916390188515784400LL), (((/* implicit */long long int) (signed char)-36)))));
                        var_20 += ((/* implicit */short) arr_7 [i_0] [(_Bool)1] [i_2]);
                        var_21 = arr_7 [(_Bool)1] [i_2] [i_2];
                    }
                    var_22 = ((/* implicit */unsigned char) arr_8 [i_2]);
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) (unsigned char)178)), (1119490119667758276LL)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) (+(max((min((1119490119667758276LL), (((/* implicit */long long int) var_17)))), (min((((/* implicit */long long int) (_Bool)1)), (-7916390188515784405LL)))))));
    var_25 = ((/* implicit */_Bool) 4167519633U);
    var_26 = ((_Bool) var_6);
}
