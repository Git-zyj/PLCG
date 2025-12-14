/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115687
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [(signed char)0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned short) arr_3 [i_0]);
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [(unsigned char)5]);
        }
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)-126))))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)(-127 - 1));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) max(((short)1746), ((short)12432))))));
            var_14 -= min((min((((/* implicit */signed char) ((((/* implicit */_Bool) -1459463829024260528LL)) && (((/* implicit */_Bool) (signed char)127))))), ((signed char)(-127 - 1)))), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 268435455)), (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_3]))) % (10223233191669336808ULL))))))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48756)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (short)-1740))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (((3312251280U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
        var_15 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -268435465)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))), (var_11));
    }
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) arr_16 [i_4]);
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((signed char) 4874154197503535438LL)), ((signed char)-11)))), (((((/* implicit */int) min(((unsigned char)12), ((unsigned char)255)))) | (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) var_11)))))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */int) ((unsigned char) 0U))), (((((/* implicit */int) (unsigned char)245)) ^ (((/* implicit */int) arr_8 [i_4] [i_4] [i_5])))))))));
            arr_20 [i_4] |= ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned int) var_9)), (1225319775U))), (22139012U))), (min((max((var_11), (((/* implicit */unsigned int) -1802399523)))), (((/* implicit */unsigned int) (short)1756))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */unsigned char) arr_15 [i_6]);
        arr_25 [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)133)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6])))))));
    }
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) - (var_2))) << (((var_8) - (3611101366767405181ULL))))) < (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (1424774632U))))));
}
