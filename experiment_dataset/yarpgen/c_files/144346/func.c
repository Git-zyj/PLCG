/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144346
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
    var_18 &= ((/* implicit */signed char) 14930325670627461733ULL);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1]))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-25)), ((~(((/* implicit */int) ((arr_0 [4LL] [4LL]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))))))));
    }
    for (long long int i_1 = 4; i_1 < 20; i_1 += 1) 
    {
        arr_7 [i_1] [(signed char)5] = ((/* implicit */long long int) 3516418403082089883ULL);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min(((+(max((((/* implicit */unsigned long long int) -4111738966194807496LL)), (3516418403082089883ULL))))), (((/* implicit */unsigned long long int) ((long long int) max((8569916515799222113LL), (-8569916515799222114LL))))))))));
        arr_8 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) min(((signed char)-66), (arr_4 [i_1]))))));
        var_21 = ((/* implicit */signed char) (+(arr_6 [i_1])));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_22 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) max((8569916515799222130LL), (((/* implicit */long long int) arr_9 [i_2]))))) >= (((((/* implicit */_Bool) arr_6 [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) 8569916515799222113LL)))))))));
        var_23 |= ((/* implicit */long long int) ((signed char) max(((signed char)7), (arr_10 [i_2] [i_2]))));
    }
    var_24 = ((/* implicit */signed char) (-(-3328680834243550446LL)));
}
