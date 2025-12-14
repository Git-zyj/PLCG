/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16311
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
    var_18 ^= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((((long long int) arr_2 [i_0] [i_0] [i_0])) < (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) % (((/* implicit */int) (_Bool)1))))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1 - 3] [i_1])) ^ (((/* implicit */int) arr_2 [(_Bool)1] [i_1 - 2] [i_1 + 1]))))) && (((/* implicit */_Bool) ((-7493268359691708417LL) * (((-8088717556897511227LL) / (-9045304239619147950LL))))))));
                var_20 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) (short)22587)) - (22568))))));
                var_21 = ((/* implicit */unsigned int) ((short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)17389)) || (((/* implicit */_Bool) 18094769694216238709ULL))))));
                var_22 ^= ((((int) var_11)) * (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_10))) == (((/* implicit */int) ((unsigned short) (unsigned short)17389)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_2);
    var_24 = ((/* implicit */unsigned long long int) ((unsigned char) var_16));
}
