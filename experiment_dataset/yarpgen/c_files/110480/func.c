/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110480
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
    var_19 = ((/* implicit */unsigned long long int) min((1012745605U), (((/* implicit */unsigned int) var_1))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [1] [i_0 - 1] = ((/* implicit */short) ((((int) 3487036694U)) < (((/* implicit */int) ((short) -1831777752)))));
        arr_3 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) (-(min(((-(351845186145149338ULL))), (arr_1 [i_0 - 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (max((min((3282221691U), (((/* implicit */unsigned int) (short)-10192)))), (((/* implicit */unsigned int) (-(16383))))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_14)))) ? (min((351845186145149343ULL), (arr_1 [i_1]))) : (((18094898887564402282ULL) + (18094898887564402262ULL))))) == (((/* implicit */unsigned long long int) var_0))));
        arr_9 [i_1] = var_9;
    }
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 3282221672U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / ((-(18094898887564402248ULL)))))));
}
