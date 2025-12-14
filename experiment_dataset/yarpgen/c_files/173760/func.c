/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173760
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) min((min((7634823929494525945ULL), (282696792595656908ULL))), (7634823929494525945ULL)));
        arr_4 [i_0] = ((((/* implicit */_Bool) 18164047281113894707ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (min((((/* implicit */long long int) (short)18019)), (576320014815068160LL))));
        arr_5 [i_0] [8ULL] = ((/* implicit */_Bool) (~((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-61)), ((unsigned short)25420))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_13 = ((/* implicit */_Bool) ((int) (unsigned short)25420));
            arr_9 [i_0 - 2] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)23150), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)53811)))))) / (-145229176)));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) > (2231723252U))) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (signed char)58))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_14 &= (+((+(((/* implicit */int) (_Bool)1)))));
        arr_14 [i_2 + 2] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_0 [i_2] [i_2 - 2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25407)) || ((_Bool)1)))))));
        arr_15 [i_2] = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (signed char)-42)))));
    }
    var_15 = ((/* implicit */long long int) var_2);
    var_16 = ((/* implicit */int) max((((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23150))))))), (((long long int) var_10))));
    var_17 = (+(((/* implicit */int) (unsigned short)47292)));
}
