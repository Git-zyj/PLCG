/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132760
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
    var_14 = ((/* implicit */unsigned char) ((unsigned short) ((((4973058127255954299ULL) << (0LL))) < (min((13473685946453597292ULL), (13835058055282163712ULL))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) arr_2 [i_1]);
                arr_6 [3ULL] [3ULL] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) -850106438211685417LL)) != ((-(4973058127255954299ULL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) != ((-(-1LL))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (-(var_0)))) < (min((22U), (((/* implicit */unsigned int) (signed char)0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16776960)) ? (7685448530724525833ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (var_2) : (((/* implicit */int) ((1885803385) < (2147483647))))))));
}
