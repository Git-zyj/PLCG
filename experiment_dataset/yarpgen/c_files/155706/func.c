/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155706
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)44556))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) % (18446744073709551613ULL))), (((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL)))))))));
                var_21 |= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((2970958386U) >> (((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])) - (28501)))))) / (((((/* implicit */long long int) ((/* implicit */int) arr_2 [4U]))) * (271707915994526112LL)))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((long long int) arr_0 [i_0])) / (min((-7519236772866788217LL), (((/* implicit */long long int) arr_3 [i_1] [i_0] [i_0]))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [20U])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_3 [7U] [i_1] [i_0])))), (((/* implicit */int) ((_Bool) (unsigned short)33062)))))))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)17485), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [15] [i_1])) && (((/* implicit */_Bool) (signed char)-114)))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) ^ (2790904197846801535ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)400), (((/* implicit */unsigned short) arr_0 [2LL])))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)44549)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (-3469105280779775910LL))) / (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [(signed char)13]))))))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */_Bool) -525698168)) || (((/* implicit */_Bool) arr_2 [i_1]))))))) * ((((!(((/* implicit */_Bool) 7421926082891571556LL)))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)21005), (((/* implicit */unsigned short) arr_3 [i_2] [i_2] [i_2 + 2])))))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) -525698168)), (1277221678U)))))) ? ((((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 1073479680)))) - (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65524))))))) : (((/* implicit */long long int) ((/* implicit */int) max((min(((unsigned short)44556), (((/* implicit */unsigned short) (short)31314)))), ((unsigned short)20987)))))));
    }
}
