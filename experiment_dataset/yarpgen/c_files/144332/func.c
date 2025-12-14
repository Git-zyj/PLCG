/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144332
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
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)7738);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((signed char) (unsigned short)34222));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7736))) & (14065856234719464627ULL))), (((/* implicit */unsigned long long int) (short)32512))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_19 *= ((/* implicit */signed char) max((((short) (unsigned short)57798)), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (unsigned short)0))))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (unsigned short)19018))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (unsigned short)57797))) ^ (((/* implicit */int) ((unsigned short) (unsigned short)39212)))));
            var_22 -= max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-69)));
        }
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned char) max(((unsigned short)57798), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)864)) << (((/* implicit */int) (signed char)0))))))));
            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 4069882211864585896ULL))) ^ (((/* implicit */int) max(((unsigned char)246), ((unsigned char)85))))));
        }
        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            arr_15 [i_1] = ((/* implicit */signed char) min(((unsigned short)57784), (((/* implicit */unsigned short) (signed char)9))));
            arr_16 [i_1] [i_4 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((unsigned long long int) (unsigned char)51)))))));
        }
        arr_17 [(signed char)10] [(signed char)10] |= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (short)-14)) & (((/* implicit */int) (signed char)(-127 - 1))))));
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) 10617613793784383428ULL);
        var_24 = ((signed char) min((((/* implicit */unsigned long long int) (unsigned short)20511)), (16381770101641044447ULL)));
    }
    var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned short) max((max(((short)556), (((/* implicit */short) (signed char)-56)))), (var_7)))), (var_10)));
}
