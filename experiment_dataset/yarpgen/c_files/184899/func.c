/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184899
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 15919703759120424105ULL))) * (((/* implicit */int) ((((var_11) ? (((/* implicit */int) (unsigned short)4828)) : (-1549197520))) < (((((/* implicit */int) (_Bool)1)) & (-1199269445)))))))))));
    var_14 = var_10;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] &= max((((unsigned char) (unsigned char)114)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8268)) ? (-9011990206826301843LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1539)) << (((((/* implicit */int) (unsigned char)243)) - (241)))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) (_Bool)1))))))));
}
