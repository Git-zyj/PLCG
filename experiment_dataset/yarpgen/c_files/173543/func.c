/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173543
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((int) var_3));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) min((min((4422837016286319787LL), (((/* implicit */long long int) (unsigned char)125)))), (((/* implicit */long long int) (unsigned char)123)))))));
        var_18 = (+((+(((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) (((+(((/* implicit */int) var_6)))) <= (var_4)))))))));
    }
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) ((min((var_1), (((/* implicit */int) var_7)))) >= (((((/* implicit */_Bool) (unsigned short)3267)) ? (((/* implicit */int) (unsigned char)131)) : (var_4)))))), (((((/* implicit */int) var_3)) % (((/* implicit */int) ((unsigned char) var_9)))))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_21 = ((/* implicit */short) ((int) (unsigned char)152));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)108)))) : (((/* implicit */int) (unsigned char)131)))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_0)) | (((/* implicit */int) max(((short)-4038), (((/* implicit */short) (unsigned char)124))))))), (((/* implicit */int) (unsigned char)130))));
    }
    var_22 = ((/* implicit */unsigned long long int) -1766437518);
    var_23 = ((/* implicit */unsigned short) (~(323482779)));
}
