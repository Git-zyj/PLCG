/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147112
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (unsigned char)26)))) + (2147483647))) << (((min((((/* implicit */unsigned int) var_5)), (var_1))) - (990400601U)))))) > (((((((/* implicit */unsigned long long int) -7126319283082720465LL)) ^ (55231763587679935ULL))) - (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
                    arr_9 [i_0] [i_0] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) (~(var_10)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_13 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_9))) > (((/* implicit */unsigned int) ((/* implicit */int) min(((short)19410), (((/* implicit */short) (_Bool)1)))))))))));
        var_14 = ((/* implicit */long long int) (!(((_Bool) var_5))));
    }
    var_15 = ((/* implicit */long long int) var_7);
}
