/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148623
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
    var_16 = ((/* implicit */unsigned char) var_8);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned long long int) (signed char)84))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_6))))), (11042951074928838128ULL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)105))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned short)14])) ? (arr_0 [(unsigned short)1]) : (((/* implicit */unsigned long long int) 5921567501186367042LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)50350)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5952897565735019520LL)) ? (((/* implicit */int) ((unsigned short) 5921567501186367046LL))) : (((/* implicit */int) ((short) 18446744073709551615ULL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [(_Bool)1] [(_Bool)1] [i_0]))) : (-5921567501186367043LL)))) ? (5921567501186367048LL) : (((((/* implicit */_Bool) 8009126746635119169ULL)) ? (-5921567501186367048LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))))))));
                    arr_8 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) 6423603854723968697LL);
                    var_19 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_7 [i_1 - 2] [i_1] [(unsigned char)9] [i_2]))), ((-(((((/* implicit */_Bool) 3286481013664448327LL)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (unsigned short)0))))))));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((int) (unsigned char)35))) > (arr_1 [(_Bool)1]))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) > (arr_4 [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 2])))))) : (((/* implicit */int) (signed char)84))));
                    var_21 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_1] [(_Bool)1] [(_Bool)1] [i_1 - 2])), (((arr_7 [i_1 + 2] [(unsigned short)12] [(unsigned short)12] [i_1 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1625578147U)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (signed char)84);
}
